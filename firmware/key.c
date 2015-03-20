/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        key.c
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
#define KEY_C
#include "key.h"
////////////////////////////////////////////////////////////////////////////////

KEY_STATE keyState[KEY_NUMBER_OF];

////////////////////////////////////////////////////////////////////////////////

VOID KEY_Initialize ( const KEY_STATE *initState )
{
    memcpy ( &keyState, initState, sizeof ( keyState ));
}

////////////////////////////////////////////////////////////////////////////////

VOID KEY_Task ( VOID )
{
    UINT8 i;
    UINT16 state;
    static UINT16 timeMark = 0;
    UINT16 time;

    time = TIME_Passed1ms ( timeMark );
    if ( time < KEY_TASK_PERIOD )
    {
        return;
    }
    timeMark = TIME_Get1ms ();

    state = SYSTEM_GetKeys ();

    for ( i = 0; i < KEY_NUMBER_OF; i ++ )
    {
        keyState[i].state = state & 1;
        state >>= 1;
        KEY_Process ( &keyState[i], time );
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID KEY_Process ( KEY_STATE *key, UINT16 time )
{
    if ( key->mode == KEY_MODE_DISABLED )
    {
        return;
    }

    if ( key->state == TRUE )
    {
        key->time += time;
        if ( key->time > KEY_HOLD_DELAY_MAX )
        {
            key->time = KEY_HOLD_DELAY_MAX;
        }
    }

    switch ( key->mode )
    {
        case KEY_MODE_CONTINUOUS:
            if ( key->state == TRUE )
            {
                KEY_Handler ( key->id, KEY_EVENT_PRIMARY );
            }
            break;

        case KEY_MODE_SINGLE_ACTION:
            if ( key->time == time )
            {
                KEY_Handler ( key->id, KEY_EVENT_PRIMARY );
            }
            break;

        case KEY_MODE_DUAL_ACTION:
            if (( key->time != 0 )
            && ( key->time < KEY_DUAL_ACTION_DELAY )
            && ( key->state == FALSE ))
            {
                KEY_Handler ( key->id, KEY_EVENT_PRIMARY );
            }
            else if ( key->time == KEY_DUAL_ACTION_DELAY )
            {
                KEY_Handler ( key->id, KEY_EVENT_SECONDARY );
            }
            break;

        case KEY_MODE_AUTOREPEAT:
            if ( key->time == time )
            {
                KEY_Handler ( key->id, KEY_EVENT_PRIMARY );
            }
            else if ( key->time > KEY_AUTOREPEAT_DELAY + KEY_AUTOREPEAT_RATE )
            {
                KEY_Handler ( key->id, KEY_EVENT_PRIMARY );
                key->time -= KEY_AUTOREPEAT_RATE;
            }
            break;

        case KEY_MODE_DUAL_HOLD:
            if (( key->time != 0 )
            && ( key->time < KEY_DUAL_HOLD_DELAY )
            && ( key->state == FALSE ))
            {
                KEY_Handler ( key->id, KEY_EVENT_PRIMARY );
            }
            else if ( key->time > KEY_DUAL_HOLD_DELAY )
            {
                KEY_Handler ( key->id, KEY_EVENT_SECONDARY );
            }
            break;
    }

    if ( key->state == FALSE )
    {
        key->time = 0;
    }
}

////////////////////////////////////////////////////////////////////////////////
