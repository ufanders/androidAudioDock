/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        android_audio.h
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
#ifndef ANDROID_AUDIO_H
#define ANDROID_AUDIO_H

////////////////////////////////////////////////////////////////////////////////

#include "system.h"
#include "USB/usb.h"
#include "USB/usb_host_android.h"
#include "USB/usb_host_audio_v1.h"
#include "afe.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    union
    {
        struct
        {
            UINT8 stop      : 1;
            UINT8 play      : 1;
            UINT8 playPause : 1;
            UINT8 nextTrack : 1;
            UINT8 prevTrack : 1;
        };
        UINT8 value;
    };
}
ANDROID_HID_REPORT;

typedef struct
{
    ANDROID_HID_REPORT report;
    UINT8 reportLatch;
    UINT8 reportToSend;
    BYTE deviceAddress;
    VOID* deviceHandle;
    USB_AUDIO_V1_DEVICE_ID* audioDeviceID;
    ISOCHRONOUS_DATA audioData;
    UINT8 state;
}
ANDROID_STATUS;

enum
{
    CTRL_PLAY_PAUSE,
    CTRL_STOP,
    CTRL_PLAY,
    CTRL_PAUSE,
    CTRL_VOLUME_UP,
    CTRL_VOLUME_DOWN,
    CTRL_MUTE,
    CTRL_BASS_BOOST,
    CTRL_NEXT_TRACK,
    CTRL_PREV_TRACK,
    CTRL_MENU,
    CTRL_SELECT,
    CTRL_UP,
    CTRL_DOWN,
    CTRL_REPEAT,
    CTRL_SHUFFLE,
    CTRL_FAST_FORWARD,
    CTRL_REWIND
};

////////////////////////////////////////////////////////////////////////////////

typedef enum
{
    ANDROID_EVENT_ATTACHED,
    ANDROID_EVENT_CONNECTED,
    ANDROID_EVENT_DETACHED
}
ANDROID_EVENT;

////////////////////////////////////////////////////////////////////////////////

enum
{
    ANDROID_STATE_WAITING,
    ANDROID_STATE_CONNECTED,
    ANDROID_STATE_SET_INTERFACE,
    ANDROID_STATE_SET_SAMPLERATE,
    ANDROID_STATE_AUTOPLAY,
    ANDROID_STATE_RUNNING,
    ANDROID_STATE_ERROR
};

#define ANDROID_KEYPRESS_DELAY  50  // ms
#define ANDROID_AUTOPLAY_DELAY  500 // ms

////////////////////////////////////////////////////////////////////////////////

VOID ANDROID_Initialize ( VOID );
VOID ANDROID_Task ( VOID );
VOID ANDROID_ControlHandler ( UINT8 button );
VOID ANDROID_KeyTask ( VOID );
BOOL ANDROID_AUBApplicationDataEventHandler ( BYTE address, UINT16 event, VOID *data, DWORD size );
BOOL ANDROID_USBApplicationEventHandler ( BYTE address, UINT16 event, VOID *data, DWORD size );
BOOL ANDROID_USB_OSApplicationEventHandler ( BYTE address, UINT16 event, VOID *data, DWORD size );

extern BOOL ANDROID_CBHandler ( ANDROID_EVENT event, UINT32 data );

////////////////////////////////////////////////////////////////////////////////
#endif
