/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        samsung_audio.h
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
#ifndef SAMSUNG_AUDIO_H
#define SAMSUNG_AUDIO_H
////////////////////////////////////////////////////////////////////////////////

#include "system.h"

#include "dispatch.h"
#include "ped_usb_audio.h"
#include "ped_usb_hid.h"

typedef union
{
    struct
    {
        unsigned stop               :1;
        unsigned play               :1;
        unsigned play_pause         :1;
        unsigned next_track         :1;
        unsigned prev_track         :1;
    };
    UINT8 value;
}
SAMSUNG_CONTROLS;

typedef struct
{
    UINT8 state;
    SAMSUNG_CONTROLS controls;
    UINT8 controlsLatch;
    USB_HANDLE hidHandle;
}
SAMSUNG_STATUS;

enum
{
    SAMSUNG_STATE_WAITING,
    SAMSUNG_STATE_CONNECTED,
    SAMSUNG_STATE_AUTOPLAY,
    SAMSUNG_STATE_RUNNING,
};

#define SAMSUNG_AUTOPLAY_DELAY      500     // ms

////////////////////////////////////////////////////////////////////////////////

VOID SAMSUNG_Initialize ( VOID );
VOID SAMSUNG_Task ( VOID );
VOID SAMSUNG_Detach ( VOID );
BOOL SAMSUNG_ControlHandler ( UINT8 command );

////////////////////////////////////////////////////////////////////////////////
#endif
