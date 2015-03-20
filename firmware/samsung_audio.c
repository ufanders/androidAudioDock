/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        samsung_audio.c
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
#define SAMSUNG_AUDIO_C
#include "samsung_audio.h"

////////////////////////////////////////////////////////////////////////////////

SAMSUNG_STATUS samsungStatus;

////////////////////////////////////////////////////////////////////////////////

UINT8 samsungHIDReportDescriptor[SAMSUNG_HID_REPORT_DESC_SIZE] =
{
    0x05, 0x0C,         // USAGE_PAGE (Consumer Devices)
    0x09, 0x01,         // USAGE (Consumer Control)
    0xA1, 0x01,         // COLLECTION (Application)
    0x15, 0x00,         //   LOGICAL_MINIMUM (0)
    0x25, 0x01,         //   LOGICAL_MAXIMUM (1)
    0x95, 0x05,         //   REPORT_COUNT (5)
    0x75, 0x01,         //   REPORT_SIZE (1)
    0x09, 0xB7,         //   USAGE (Stop)
    0x09, 0xB0,         //   USAGE (Play)
    0x09, 0xCD,         //   USAGE (Play/Pause)
    0x09, 0xB5,         //   USAGE (Scan Next Track)
    0x09, 0xB6,         //   USAGE (Scan Previous Track)
    0x81, 0x42,         //   INPUT (Data,Var,Abs,Null)
    0x75, 0x03,         //   REPORT_SIZE (3)
    0x95, 0x01,         //   REPORT_COUNT (1)
    0x81, 0x03,         //   INPUT (Data,Const,Abs)
    0xC0                // END_COLLECTION
};

////////////////////////////////////////////////////////////////////////////////

VOID SAMSUNG_Initialize ( VOID )
{
    memset ( &samsungStatus, 0x00, sizeof ( SAMSUNG_STATUS ));
    samsungStatus.state = SAMSUNG_STATE_WAITING;
}

////////////////////////////////////////////////////////////////////////////////

VOID SAMSUNG_Task ( VOID )
{
    static UINT16 timer;

    if ( SAMSUNG_GetVBUS () == FALSE )
    {
        SAMSUNG_Detach ();
    }

    switch( samsungStatus.state )
    {
        case SAMSUNG_STATE_WAITING:
            break;

        case SAMSUNG_STATE_CONNECTED:
            timer = TIME_Get1ms () + SAMSUNG_AUTOPLAY_DELAY;
            DISPATCH_DeviceConnected ();
            samsungStatus.state = SAMSUNG_STATE_AUTOPLAY;
            break;

        case SAMSUNG_STATE_AUTOPLAY:
            if ( TIME_Elapsed1ms ( timer ))
            {
                SAMSUNG_ControlHandler ( CTRL_PLAY );
                samsungStatus.state = SAMSUNG_STATE_RUNNING;
            }
            break;

        case SAMSUNG_STATE_RUNNING:
            break;
    }
}

////////////////////////////////////////////////////////////////////////////////

BOOL SAMSUNG_ControlHandler ( UINT8 cmd )
{
    switch ( cmd )
    {
        case CTRL_STOP:
            samsungStatus.controls.stop = TRUE;
            break;

        case CTRL_PLAY:
            samsungStatus.controls.play = TRUE;
            break;

        case CTRL_PLAY_PAUSE:
            samsungStatus.controls.play_pause = TRUE;
            break;

        case CTRL_NEXT_TRACK:
            samsungStatus.controls.next_track = TRUE;
            break;

        case CTRL_PREV_TRACK:
            samsungStatus.controls.prev_track = TRUE;
            break;
    }

    return ( TRUE );
}

////////////////////////////////////////////////////////////////////////////////

VOID SAMSUNG_Detach ( VOID )
{
    USBModuleDisable ();
    USBDeviceInit ();
    SAMSUNG_Initialize ();
    DISPATCH_DeviceDetached ();
    USBDeviceAttach ();
}

////////////////////////////////////////////////////////////////////////////////
// USB
////////////////////////////////////////////////////////////////////////////////

BOOL SAMSUNG_USBDeviceEventHandler ( UINT16 event, VOID *data, UINT16 size )
{
    BOOL res = FALSE;

    res |= PED_AUDIO_USBDeviceEventHandler ( event, data, size );
    res |= PED_HID_USBDeviceEventHandler ( event, data, size );

    switch ( event )
    {
        case EVENT_CONFIGURED:
            if ( USBActiveConfiguration == USB_SAMSUNG_CONFIG_ID )
            {
                PED_HID_Initialize ( &samsungHIDReportDescriptor, sizeof ( samsungHIDReportDescriptor ),
                                     &samsungStatus.controlsLatch, sizeof ( samsungStatus.controlsLatch ));
                DISPATCH_DeviceAttached ( DISPATCH_DEVICE_SAMSUNG );
                samsungStatus.state = SAMSUNG_STATE_CONNECTED;
            }
            return TRUE;

        case EVENT_SUSPEND:
            return ( FALSE );
    }

    return res;
}

////////////////////////////////////////////////////////////////////////////////

BOOL SAMSUNG_USBDeviceDataHandler ( UINT8 endpoint )
{
    if ( PED_AUDIO_USBDeviceDataHandler ( endpoint )) return ( TRUE );

    if ( endpoint == ( USB_HID_EP | USB_IN_EP ))
    {
        samsungStatus.controlsLatch = samsungStatus.controls.value;
        samsungStatus.controls.value = 0;
        return ( PED_HID_USBDeviceDataHandler ( endpoint ));
    }

    return ( FALSE );
}

////////////////////////////////////////////////////////////////////////////////
