/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        key.h
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
#ifndef KEY_H
#define KEY_H

////////////////////////////////////////////////////////////////////////////////

#include "system.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    UINT8 id;

    union
    {
        struct
        {
            UINT8 mode      :4;
            UINT8 state     :1;
        };

        UINT8 flags;
    };

    UINT16 time;
}
KEY_STATE;

////////////////////////////////////////////////////////////////////////////////

#define KEY_MODE_DISABLED       0
#define KEY_MODE_CONTINUOUS     1
#define KEY_MODE_SINGLE_ACTION  2
#define KEY_MODE_DUAL_ACTION    3
#define KEY_MODE_AUTOREPEAT     4
#define KEY_MODE_DUAL_HOLD      5

#define KEY_EVENT_PRIMARY       0x10
#define KEY_EVENT_SECONDARY     0x20

#define KEY_DUAL_ACTION_DELAY   500     // all in ms
#define KEY_AUTOREPEAT_DELAY    500
#define KEY_AUTOREPEAT_RATE     100     // = 10 per sec
#define KEY_DUAL_HOLD_DELAY     1000
#define KEY_HOLD_DELAY_MAX      10000

#define KEY_TASK_PERIOD         10

////////////////////////////////////////////////////////////////////////////////

// TODO change codes
#define KEY_ID_VOLUME_UP        0
#define KEY_ID_BASS_BOOST       1
#define KEY_ID_MUTE             2
#define KEY_ID_NC               3
#define KEY_ID_UP               4
#define KEY_ID_MENU             5
#define KEY_ID_VOLUME_DOWN      6
#define KEY_ID_NEXT             7
#define KEY_ID_PLAY             8
#define KEY_ID_PREV             9
#define KEY_ID_DOWN             10
#define KEY_ID_SELECT           11

////////////////////////////////////////////////////////////////////////////////

VOID KEY_Initialize ( const KEY_STATE* initState );
VOID KEY_Task ( VOID );
VOID KEY_Process ( KEY_STATE *key, UINT16 time );

extern VOID KEY_Handler ( UINT8 key, UINT8 event );

////////////////////////////////////////////////////////////////////////////////
#endif
