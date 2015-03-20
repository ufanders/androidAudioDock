/******************************************************************************
                     Microchip Technology, Inc.

File Name:      afe.c
Abstracts:      Analog Front End abstraction layer
Dependencies:   see include section
Processor:      PIC24-dsPIC/PIC32
Compiler:       XC16/XC32

Copyright © 2009-2013 Microchip Technology Inc.  All rights reserved.

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
#define AFE_C
#include "afe.h"
////////////////////////////////////////////////////////////////////////////////

volatile AFE_STATE afeState;

////////////////////////////////////////////////////////////////////////////////

VOID AFE_Initialize ( VOID )
{
    afeState.flags = 0;

    I2S_Initialize ();
    I2S_StartClock ();

    AK4384_Initialize ();

    AFE_SetParameter ( AFE_PARAM_VOLUME, AUDIO_INIT_VOLUME );
    AFE_SetParameter ( AFE_PARAM_SAMPLE_RATE, AUDIO_INIT_SAMPLE_RATE );
    AFE_SetParameter ( AFE_PARAM_SAMPLE_RESOLUTION, AUDIO_INIT_SAMPLE_RESOLUTION );
    AFE_SetParameter ( AFE_PARAM_MUTE, FALSE );
}

////////////////////////////////////////////////////////////////////////////////

VOID AFE_Task ( VOID )
{
    AK4384_Task ();
    I2S_Task ();
}

////////////////////////////////////////////////////////////////////////////////

UINT16 AFE_Write ( UINT8 *addr, UINT16 size )
{
    if ( size > 0 )
    {
        return ( I2S_TxWrite ( addr, size ));
    }
    else
    {
        return ( 0 );
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID AFE_PlayStart ( VOID )
{
    AK4384_Start ();
    AK4201_PowerUp ();
}

////////////////////////////////////////////////////////////////////////////////

VOID AFE_PlayStop ( VOID )
{
    AK4384_Stop ();
    I2S_TxStop ();
}

////////////////////////////////////////////////////////////////////////////////

UINT32 AFE_SetParameter ( UINT8 param, UINT32 value )
{
    switch ( param )
    {
        case AFE_PARAM_SAMPLE_RATE:
        {
            afeState.sampleRate = I2S_SetSampleRate ( value );

            return ( afeState.sampleRate );
        }
        break;

        case AFE_PARAM_SAMPLE_RESOLUTION:
        {
            afeState.sampleResolution = I2S_SetSampleResolution ( value );

            return ( afeState.sampleResolution );
        }
        break;

        case AFE_PARAM_VOLUME:
        {
            afeState.volume = AK4384_VolumeSet ( value );

            return ( afeState.volume );
        }
        break;

        case AFE_PARAM_MUTE:
        {
            afeState.mute = AK4384_MuteSet ( value );

            return ( afeState.mute );
        }
        break;
    }

    return ( 0 );
}

////////////////////////////////////////////////////////////////////////////////

UINT32 AFE_GetParameter ( UINT8 param )
{
    switch ( param )
    {
        case AFE_PARAM_SAMPLE_RATE:
        {
            return ( afeState.sampleRate );
        }
        break;

        case AFE_PARAM_SAMPLE_RESOLUTION:
        {
            return ( afeState.sampleResolution );
        }
        break;

        case AFE_PARAM_VOLUME:
        {
            return ( afeState.volume );
        }
        break;

        case AFE_PARAM_MUTE:
        {
            return ( afeState.mute );
        }
        break;

        case AFE_PARAM_BUFFER_STATE:
        {
            return ( I2S_GetBufferLevel ());
        }
    }

    return ( 0 );
}

////////////////////////////////////////////////////////////////////////////////
