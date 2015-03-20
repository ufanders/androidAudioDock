/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        main_usb.c
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
#define MAIN_USB_C
#include "main_usb.h"
////////////////////////////////////////////////////////////////////////////////

VOID USB_Interrupt ( VOID )
{
    USBHostISR ( );
}

////////////////////////////////////////////////////////////////////////////////

BOOL USB_HostEventHandler ( UINT8 address, USB_EVENT event, VOID *data, UINT32 size )
{
    BOOL res = FALSE;

    res |= ANDROID_USBHostEventHandler ( address, event, data, size );

    switch ( event )
    {
        case EVENT_VBUS_REQUEST_POWER:
            if ( ( (USB_VBUS_POWER_EVENT_DATA*) data )->current <= ( MAX_ALLOWED_CURRENT / 2 ) )
            {
                return ( TRUE );
            }
            else
            {
                return ( FALSE );
            }

        case EVENT_VBUS_RELEASE_POWER:
        case EVENT_HUB_ATTACH:
        case EVENT_UNSUPPORTED_DEVICE:
        case EVENT_CANNOT_ENUMERATE:
        case EVENT_CLIENT_INIT_ERROR:
        case EVENT_OUT_OF_MEMORY:
        case EVENT_UNSPECIFIED_ERROR:
        case EVENT_DETACH:
        case EVENT_OVERRIDE_CLIENT_DRIVER_SELECTION:
            break;
    }

    return ( res );
}

////////////////////////////////////////////////////////////////////////////////

BOOL USB_HostDataHandler ( UINT8 address, USB_EVENT event, VOID *data, UINT32 size )
{
    return ( ANDROID_USBHostDataHandler ( address, event, data, size ));
}

////////////////////////////////////////////////////////////////////////////////

