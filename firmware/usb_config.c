/*
********************************************************************************
                                                                                
Software License Agreement                                                      
                                                                                
Copyright © 2010-2014 Microchip Technology Inc.  All rights reserved.           
                                                                                
Microchip licenses to you the right to use, modify, copy and distribute Software
only when embedded on a Microchip microcontroller or digital signal controller  
that is integrated into your product or third party product (pursuant to the    
sublicense terms in the accompanying license agreement).                        
                                                                                
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
                                                                                
********************************************************************************
*/

// Created by the Microchip MFi Library SW320411 Configuration Utility for iAP2/iAP1, Version 4.06.00.00, 04/14/2014, 17:30:52

#include "system.h"
#include "usb/usb.h"
#include "usb/usb_host_hid.h"
#include "usb/usb_host_audio_v1.h"
#include "USB/usb_host_android.h"
#include "USB/usb_host_audio_v1.h"

////////////////////////////////////////////////////////////////////////////////
// Client Driver Function Pointer Table for the USB Embedded Host foundation

CLIENT_DRIVER_TABLE usbClientDrvTable[] =
{
    {
        USBHostHIDInitialize,
        USBHostHIDEventHandler,
        NULL,
        0
    }
    ,
    {
        USBHostAudioV1Initialize,
        USBHostAudioV1EventHandler,
        USBHostAudioV1DataEventHandler,
        0
    },

    {
        AndroidAppInitialize,
        AndroidAppEventHandler,
        AndroidAppDataEventHandler,
        0
    },

    {
        AndroidAppInitialize,
        AndroidAppEventHandler,
        AndroidAppDataEventHandler,
        ANDROID_INIT_FLAG_BYPASS_PROTOCOL
    }
};

////////////////////////////////////////////////////////////////////////////////
// USB Embedded Host Targeted Peripheral List (TPL)

USB_TPL usbTPL[] =
{
    // HID
    { INIT_CL_SC_P( 0x03, 0x00, 0x00 ), 0, 0, {TPL_CLASS_DRV} },

    // Audio
    { INIT_CL_SC_P( 0x01, 0x01, 0x00 ), 0, 1, {TPL_CLASS_DRV | TPL_IGNORE_PROTOCOL} },
    { INIT_CL_SC_P( 0x01, 0x02, 0x00 ), 0, 1, {TPL_CLASS_DRV | TPL_IGNORE_PROTOCOL} },

    // Android AOA
    { INIT_VID_PID( 0x18D1, 0x2D00 ), 0, 3, {TPL_EP0_ONLY_CUSTOM_DRIVER} },
    { INIT_VID_PID( 0x18D1, 0x2D01 ), 0, 3, {TPL_EP0_ONLY_CUSTOM_DRIVER} },
    { INIT_VID_PID( 0x18D1, 0x2D02 ), 0, 3, {TPL_EP0_ONLY_CUSTOM_DRIVER} },
    { INIT_VID_PID( 0x18D1, 0x2D03 ), 0, 3, {TPL_EP0_ONLY_CUSTOM_DRIVER} },
    { INIT_VID_PID( 0x18D1, 0x2D04 ), 0, 3, {TPL_EP0_ONLY_CUSTOM_DRIVER} },
    { INIT_VID_PID( 0x18D1, 0x2D05 ), 0, 3, {TPL_EP0_ONLY_CUSTOM_DRIVER} },

    // Android
    { INIT_CL_SC_P( 0xFF, 0xFF, 0xFF ), 0, 2, {TPL_CLASS_DRV | TPL_IGNORE_CLASS | TPL_IGNORE_SUBCLASS | TPL_IGNORE_PROTOCOL} },
};

////////////////////////////////////////////////////////////////////////////////
