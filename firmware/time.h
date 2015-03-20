/*******************************************************************************
  Timekeeping and delay routines for 16 / 32 bit devices definitions header

  Company:
    Microchip Technology Inc.

  File Name:
    time.h

  Summary:
    Timekeeping and delay routines for 16 / 32 bit devices definitions header

  Description:
    Subset of functions to provide system-clock-independend real time keeping
    and delay functionality in natural units (us, ms).

*******************************************************************************/
// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

#ifndef TIME_H
#define TIME_H

#include "system.h"

/****************************************************************************
  Function:
    VOID TimeInit ( VOID )

  Description:
    Initialization of internal variables.

  Precondition:
    None

  Parameters:
    None

  Returns:
    None

  Remarks:
    None
  ***************************************************************************/

VOID TIME_Initialize ( VOID );

/****************************************************************************
  Function:
    VOID TimeUpdate ( UINT16 time )

  Description:
    Time counting function.

  Precondition:
    None

  Parameters:
    UINT16 time     - time in ms passed since last execution

  Returns:
    None

  Remarks:
    Although this function can run in asyncronous mode with wide range of
    intermittent delays, synchronous mode with lowest possible resolution (1 ms)
    is recommended to keep timing as precise as possible. In either case,
    cycle-to-cycle rounding shouldn't result in accumulating error. Best practice
    is using 1-ms timer interrupt.
  ***************************************************************************/

VOID TIME_Update ( UINT16 time );

/****************************************************************************
  Function:
    VOID TimeDelay10us ( UINT16 delay )

  Description:
    Generates delay defined in 10 us steps.

  Precondition:
    None

  Parameters:
    None

  Returns:
    None

  Remarks:
    This function uses hard-coded loop with known execution time to generate
    delays. It works independently from ms-range timekeeping, and uses
    SYSTEM_GetInstructionClock () function / macro to calculate loop count. System
    clock can affect precision, particularly, running PIC24 below 4 MIPS
    or PIC32 below 2 MIPS results in rising minimal possible delay above 10 us.
    Maximum value is 65535 units as per UINT16 definition, what results
    in maximum delay of 655.35 ms.
  ***************************************************************************/

VOID TIME_Delay10us( UINT16 delay );

/****************************************************************************
  Function:
    VOID TimeDelay1ms ( UINT16 delay )

  Description:
    Generates delay defined in 1 ms steps.

  Precondition:
    None

  Parameters:
    None

  Returns:
    None

  Remarks:
    This function uses ms-range timekeeping to generate delays, so it's
    precision will depend on TimeUpdate () calling profile. Maximum value
    is 65535 units as per UINT16 definition, what results in maximum delay
    of 65.535 s.
    PIC24 implementation uses Idle () inside the loop to reduce power
    consumption.
  ***************************************************************************/

VOID TIME_Delay1ms ( UINT16 delay );

/****************************************************************************
  Function:
    UINT16 TimeGet1ms ( VOID )

  Description:
    Returns system time in 1 ms units.

  Precondition:
    None

  Parameters:
    None

  Returns:
    UINT16          - system time in 1 ms units

  Remarks:
    The library uses free-running 16 bit timer, so application should account
    for possible rollover (65.536 s period ).
  ***************************************************************************/

UINT16 TIME_Get1ms ( VOID );

/****************************************************************************
  Function:
    UINT16 TimeGet100ms ( VOID )

  Description:
    Returns system time in 100 ms units.

  Precondition:
    None

  Parameters:
    None

  Returns:
    UINT16          - system time in 100 ms units

  Remarks:
    The library uses free-running 16 bit timer counting in 100 ms, so application should account
    for possible rollover ( 6553.6 s period ).
  ***************************************************************************/

UINT16 TIME_Get100ms ( VOID );

/****************************************************************************
  Function:
    BOOL TimeElapsed1ms ( UINT16 time )

  Description:
    Safely checks if 1 ms timer reached given value.

  Precondition:
    None

  Parameters:
    UINT16 time     - time mark in 1 ms units to check against

  Returns:
    BOOL            - TRUE if timer passed the mark

  Remarks:
    This function accounts to possible timer rollover, thus making checking
    safe and simple. Common usage profile:
    <code>
        timemark = TimeGet1ms () + TIMEOUT_MS;
        while ( TimeElapsed1ms ( timemark ) != TRUE )
        {
            ...
        }
    </code>
  ***************************************************************************/

BOOL TIME_Elapsed1ms ( UINT16 time );

/****************************************************************************
  Function:
    BOOL TimeElapsed100ms ( UINT16 time )

  Description:
    Safely checks if 100 ms timer reached given value.

  Precondition:
    None

  Parameters:
    UINT16 time     - time mark in 100 ms units to check against

  Returns:
    BOOL            - TRUE if timer passed the mark

  Remarks:
    This function accounts to possible timer rollover, thus making checking
    safe and simple. Common usage profile:
    <code>
        timemark = TimeGet100ms () + TIMEOUT_100MS;
        while ( TimeElapsed100ms ( timemark ) != TRUE )
        {
            ...
        }
    </code>
  ***************************************************************************/

BOOL TIME_Elapsed100ms ( UINT16 time );


UINT16 TIME_Passed1ms ( UINT16 timeMark );
UINT16 TIME_Passed100ms ( UINT16 timeMark );


////////////////////////////////////////////////////////////////////////////////
#endif
