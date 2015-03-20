/*******************************************************************************
  Timekeeping and delay routines for 16 / 32 bit devices

  Company:
    Microchip Technology Inc.

  File Name:
    time.c

  Summary:
    Timekeeping and delay routines for 16 / 32 bit devices

  Description:
    Subset of functions to provide system-clock-independend real time keeping
    and delay functionality in natural units (us, ms).

*******************************************************************************/
/*******************************************************************************
Copyright (c) 2012-2013 Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*******************************************************************************/

#define     TIME_C
#include    "time.h"

////////////////////////////////////////////////////////////////////////////////

volatile UINT16 time1ms, time100ms;
static UINT16 div100ms;
static volatile UINT32 timeCycles;

////////////////////////////////////////////////////////////////////////////////
VOID TIME_Initialize ( VOID )
{
    time1ms = 0;
    time100ms = 0;
    div100ms = 0;
}
////////////////////////////////////////////////////////////////////////////////
VOID TIME_Update ( UINT16 time )
{
    time1ms += time;

    div100ms += time;
    while ( div100ms >= 100 )
    {
        time100ms ++;
        div100ms -= 100;
    }
}
////////////////////////////////////////////////////////////////////////////////
VOID TIME_Delay10us ( UINT16 delay )
{
    #if defined ( __C30__ ) || defined ( __XC16__ )
        timeCycles = delay;
        timeCycles *= ( SYSTEM_GetInstructionClock () + 487 ) / 488;
        timeCycles /= 2048;
        Nop ();

        if ( timeCycles >= 5 )
        {
            timeCycles -= 5;
            while ( timeCycles -- );
        }
    #elif defined ( __C32__ ) || defined ( __XC32__ )
        UINT32 timeMark = _CP0_GET_COUNT () + ( SYSTEM_GetSystemClock () / 2 / 100000 ) * delay;

        while ((INT32)( timeMark - _CP0_GET_COUNT ()) > 0 );
    #endif
}
////////////////////////////////////////////////////////////////////////////////
VOID TIME_Delay1ms ( UINT16 delay )
{
    delay += time1ms + 1;

    while ( delay - time1ms < 0x8000u )
    {
        SYSTEM_Idle ();
    }
}
////////////////////////////////////////////////////////////////////////////////
UINT16 TIME_Get1ms ( VOID )
{
    return ( time1ms );
}
////////////////////////////////////////////////////////////////////////////////
UINT16 TIME_Get100ms ( VOID )
{
    return ( time100ms );
}
////////////////////////////////////////////////////////////////////////////////
BOOL TIME_Elapsed1ms ( UINT16 timeMark )
{
    timeMark -= time1ms;
    if ( timeMark & 0x8000 )
    {
        return ( TRUE );
    }
    else
    {
        return ( FALSE );
    }
}
////////////////////////////////////////////////////////////////////////////////
BOOL TIME_Elapsed100ms ( UINT16 timeMark )
{
    timeMark -= time100ms;
    if ( timeMark & 0x8000 )
    {
        return ( TRUE );
    }
    else
    {
        return ( FALSE );
    }
}
////////////////////////////////////////////////////////////////////////////////
UINT16 TIME_Passed1ms ( UINT16 timeMark )
{
    return ( time1ms - timeMark );
}
////////////////////////////////////////////////////////////////////////////////
UINT16 TIME_Passed100ms ( UINT16 timeMark )
{
    return ( time100ms - timeMark );
}
////////////////////////////////////////////////////////////////////////////////
