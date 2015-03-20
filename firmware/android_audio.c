/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        android_audio.c
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
#define ANDROID_AUDIO_C
#include "android_audio.h"
////////////////////////////////////////////////////////////////////////////////

ANDROID_STATUS android;

////////////////////////////////////////////////////////////////////////////////

char manufacturer[] = "Microchip Technology Inc.";
char model[] = "Basic Accessory Demo";
char description[] = "PIC32MX250F128D";
char version[] = "2.0";
char uri[] = "http://www.microchip.com/android";
char serial[] = "N/A";

ANDROID_ACCESSORY_INFORMATION androidDeviceInfo =
{
    //Pass in NULL for the manufacturer and model string if you don't want
    //  an app to pop up when the accessory is plugged in.
    NULL, 0,      //manufacturer,
    NULL, 0,      //model,
    description, sizeof (description),
    version, sizeof (version),
    uri, sizeof (uri),
    serial, sizeof (serial),
    ANDROID_AUDIO_MODE__44K_16B_PCM
};

const UINT8 androidReportDescriptor[] =
{
    0x05, 0x0C,                    // USAGE_PAGE (Consumer Devices)
    0x09, 0x01,                    // USAGE (Consumer Control)
    0xA1, 0x01,                    // COLLECTION (Application)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
    0x75, 0x01,                    //   REPORT_SIZE (1)
    0x95, 0x05,                    //   REPORT_COUNT (5)
    0x09, 0xB7,                    //   USAGE (Stop)
    0x09, 0xB0,                    //   USAGE (Play)
    0x09, 0xCD,                    //   USAGE (Play/Pause)
    0x09, 0xB5,                    //   USAGE (Scan Next Track)
    0x09, 0xB6,                    //   USAGE (Scan Previous Track)
    0x81, 0x42,                    //   INPUT (Data,Ary,Abs,Null)
    0x75, 0x03,                    //   REPORT_SIZE (3)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x81, 0x03,                    //   INPUT (Const,Ary,Abs)
    0xC0                           // END_COLLECTION
};

const UINT32 androidSampleRate = 44100;

////////////////////////////////////////////////////////////////////////////////

VOID ANDROID_Initialize ( VOID )
{
    AndroidAppStart ( &androidDeviceInfo );
    android.state = ANDROID_STATE_WAITING;
}

////////////////////////////////////////////////////////////////////////////////

VOID ANDROID_Task ( VOID )
{
    static UINT16 timer;

    USBHostTasks ( );
    AndroidTasks ( );

    switch ( android.state )
    {
        case ANDROID_STATE_WAITING:
            break;

        case ANDROID_STATE_CONNECTED:
            timer = TIME_Get1ms () + ANDROID_AUTOPLAY_DELAY;
            ANDROID_CBHandler ( ANDROID_EVENT_CONNECTED, 0 );
            android.state = ANDROID_STATE_SET_INTERFACE;
            break;

        case ANDROID_STATE_SET_INTERFACE:
            if ( USBHostAudioV1SetInterfaceFullBandwidth ( android.audioDeviceID->deviceAddress ) == USB_SUCCESS )
            {
                AFE_PlayStart ();
                android.state = ANDROID_STATE_WAITING;
            }
            break;

        case ANDROID_STATE_SET_SAMPLERATE:
            if ( USBHostAudioV1SetSamplingFrequency ( android.deviceAddress, (UINT8 *) &androidSampleRate ) == USB_SUCCESS )
            {
                AFE_SetParameter ( AFE_PARAM_SAMPLE_RATE, androidSampleRate );
                AFE_SetParameter ( AFE_PARAM_SAMPLE_RESOLUTION, 16 );
                android.state = ANDROID_STATE_WAITING;
            }
            break;

        case ANDROID_STATE_AUTOPLAY:
            if ( TIME_Elapsed1ms ( timer ))
            {
                ANDROID_ControlHandler ( CTRL_PLAY );
                android.state = ANDROID_STATE_RUNNING;
            }
            break;

        case ANDROID_STATE_RUNNING:
            ANDROID_KeyTask ( );
            break;

        case ANDROID_STATE_ERROR:
            break;
    };
}

////////////////////////////////////////////////////////////////////////////////

VOID ANDROID_KeyTask ( VOID )
{
    static UINT16 timer = 0;

    if ( TIME_Passed1ms ( timer ) > ANDROID_KEYPRESS_DELAY )
    {
        timer = TIME_Get1ms ();

        if ( android.report.value != android.reportLatch )
        {
            android.reportToSend = android.report.value;
            android.reportLatch = android.report.value;

            if ( AndroidAppHIDSendEvent ( android.deviceAddress, 1, &android.reportToSend, sizeof ( ANDROID_HID_REPORT )) != USB_SUCCESS )
            {
                USBHostClearEndpointErrors ( android.deviceAddress, 0 );
            }
        }
        android.report.value = 0;
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID ANDROID_ControlHandler ( UINT8 key )
{
    switch ( key )
    {
        case CTRL_STOP:
            android.report.stop = 1;
            break;
        case CTRL_PLAY:
            android.report.play = 1;
            break;
        case CTRL_PLAY_PAUSE:
            android.report.playPause = 1;
            break;
        case CTRL_NEXT_TRACK:
            android.report.nextTrack = 1;
            break;
        case CTRL_PREV_TRACK:
            android.report.prevTrack = 1;
            break;
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID ANDROID_Detach ( VOID )
{
    USBHostShutdown ();
}

////////////////////////////////////////////////////////////////////////////////
// USB
////////////////////////////////////////////////////////////////////////////////

BOOL ANDROID_USBHostEventHandler ( BYTE address, UINT16 event, VOID *data, DWORD size )
{
    switch ( event )
    {
        case EVENT_OVERRIDE_CLIENT_DRIVER_SELECTION:
            if (((((USB_OVERRIDE_CLIENT_DRIVER_EVENT_DATA *) data )->idVendor )  == 0x18D1 )
            || ((((USB_OVERRIDE_CLIENT_DRIVER_EVENT_DATA *) data )->idVendor )  == 0x04E8 ))
            {
                ANDROID_CBHandler ( ANDROID_EVENT_ATTACHED, 0 );
            }
            return ( FALSE );

        case EVENT_ANDROID_ATTACH:
            android.deviceAddress = address;
            android.deviceHandle = data;
            AndroidAppHIDRegister ( android.deviceAddress, 1, (UINT8*)androidReportDescriptor, sizeof ( androidReportDescriptor ) );
            return ( TRUE );

        case EVENT_ANDROID_DETACH:
            ANDROID_Initialize ( );
            ANDROID_CBHandler ( ANDROID_EVENT_DETACHED, 0 );
            return ( TRUE );
            break;

        case EVENT_ANDROID_HID_REGISTRATION_COMPLETE:
            android.state = ANDROID_STATE_CONNECTED;
            return ( TRUE );

        case EVENT_ANDROID_HID_SEND_EVENT_COMPLETE:
            return ( TRUE );


        case EVENT_AUDIO_ATTACH:
            android.audioDeviceID = data;
            if ( USBHostIsochronousBuffersCreate ( &android.audioData, 2, android.audioDeviceID->audioDataPacketSize ) == FALSE )
            {
                SYSTEM_Error ( );
            }
            USBHostIsochronousBuffersReset ( &android.audioData, 2 );
            return ( TRUE );

        case EVENT_AUDIO_INTERFACE_SET:
            android.state = ANDROID_STATE_SET_SAMPLERATE;
            return ( TRUE );

        case EVENT_AUDIO_FREQUENCY_SET:
            if ( USBHostAudioV1ReceiveAudioData ( android.audioDeviceID->deviceAddress, &android.audioData ) != USB_SUCCESS )
            {
                SYSTEM_Error ( );
            }
            android.state = ANDROID_STATE_AUTOPLAY;
            return ( TRUE );

        case EVENT_AUDIO_DETACH:
            AFE_PlayStop ();
            USBHostIsochronousBuffersDestroy ( &android.audioData, 2 );
            android.audioDeviceID = NULL;
            return ( TRUE );
    }
    return ( FALSE );
}

////////////////////////////////////////////////////////////////////////////////

BOOL ANDROID_USBHostDataHandler ( UINT8 address, USB_EVENT event, VOID *data, UINT32 size )
{
    if ( event == EVENT_AUDIO_STREAM_RECEIVED )
    {
        AFE_Write ( data, size );
        return ( TRUE );
    }

    return ( FALSE );
}

////////////////////////////////////////////////////////////////////////////////
