/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        ak4366.c
    Dependencies:    See Includes Section
    Processor:       PIC24, PIC32

Copyright � 2009-2013 Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED ?AS IS? WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

******************************************************************************/
#define AK4384_C
#include "ak4384.h"
////////////////////////////////////////////////////////////////////////////////

volatile AK_STATE ak4384State;

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_WriteRegister ( UINT8 reg, UINT8 value )
{
    reg |= 0x60;		//C1=0, C0=1, RW=1

    AK4384_AssertCS ( );
    AK4384_WriteByte ( reg );
    AK4384_WriteByte ( value );
    AK4384_DeassertCS ( );
}

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_WriteByte ( UINT8 value )
{
    UINT8 i;

    for ( i = 0; i < 8; i ++ )
    {
        AK4384_SetCCLKLow ( );
        if (( value & 0x80 ) == 0x80 )
        {
            AK4384_SetCDTIHigh ();
        }
        else
        {
            AK4384_SetCDTILow ();
        }
        value <<= 1;
        Nop ( );
        Nop ( );
        Nop ( );
        Nop ( );
        Nop ( );
        Nop ( );
        Nop ( );
        AK4384_SetCCLKHigh ( );
        Nop ( );
    }
}

////////////////////////////////////////////////////////////////////////////////

INT16 AK4384_VolumeSet ( INT16 volume )
{
    INT32 volumeLinear;

    if ( volume > AK4384_VOLUME_MAX )
    {
        volume = AK4384_VOLUME_MAX;
    }

    if ( volume < AK4384_VOLUME_MIN )
    {
        volume = AK4384_VOLUME_MIN;
    }

    ak4384State.volume = volume;
    volumeLinear = volume;

    // approximate dB scale into linear 8 bit
    volumeLinear -= AK4384_VOLUME_MIN - 10;
    volumeLinear *= volumeLinear;
    volumeLinear *= volumeLinear;
    volumeLinear /= 41396;
    
    AK4384_WriteRegister ( 3, volumeLinear );
    AK4384_WriteRegister ( 4, volumeLinear );

    return ( ak4384State.volume );
}

////////////////////////////////////////////////////////////////////////////////

BOOL AK4384_MuteSet ( BOOL mute )
{
    ak4384State.mute = mute;
    AK4384_WriteRegister ( 1, AK4384_CONTROL2_VALUE | ak4384State.mute );

    return ( ak4384State.mute );
}

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_Initialize ( VOID )
{
    ak4384State.volume = AK4384_VOLUME_INIT;
    ak4384State.mute = FALSE;
    ak4384State.state = AK_STATE_STOP;

    AK4384_DeassertCS ( );
    AK4384_SetCCLKHigh ( );
    AK4384_SetCDTIHigh ( );

    TIME_Delay1ms ( 5 );

    AK4384_WriteRegister ( 0, 0b10001111 );     // ACKS=1, DIF=011(I2S), PW=1, RSTN=1
    AK4384_WriteRegister ( 1, AK4384_CONTROL2_VALUE | 1 );  // SMUTE=1
    AK4384_WriteRegister ( 2, 0b00000000 );     // INVL=0, INVR=0, DZFB=0
}

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_Task ( VOID )
{
    static UINT16 timeMark = 0;

    if ( TIME_Passed1ms ( timeMark ) < AK4384_TASK_PERIOD )
    {
        return;
    }
    timeMark = TIME_Get1ms ();

    switch ( ak4384State.state )
    {
        case AK_STATE_IDLE:
            break;

        case AK_STATE_START:
        {
            AK4384_VolumeSet ( ak4384State.volume );
            AK4384_MuteSet ( ak4384State.mute );

            ak4384State.state = AK_STATE_RUNNING;
        }
        break;

        case AK_STATE_STOP:
        {
            AK4384_WriteRegister ( 1, AK4384_CONTROL2_VALUE | 1 );  // SMUTE=1
            ak4384State.stateTimer = TIME_Get1ms () + 100;

            ak4384State.state ++;
        }
        break;

        case AK_STATE_STOP + 1:
        {
            if ( TIME_Elapsed1ms ( ak4384State.stateTimer ))
            {
                ak4384State.state = AK_STATE_STOPPED;
            }
        }
        break;

        case AK_STATE_RUNNING:
        case AK_STATE_STOPPED:
            break;
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_Start ( VOID )
{
    ak4384State.state = AK_STATE_START;
}

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_Stop ( VOID )
{
    ak4384State.state = AK_STATE_STOP;
}

////////////////////////////////////////////////////////////////////////////////
