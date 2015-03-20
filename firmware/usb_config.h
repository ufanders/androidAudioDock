/*
********************************************************************************
                                                                                
Software License Agreement                                                      
                                                                                
Copyright � 2010-2014 Microchip Technology Inc.  All rights reserved.           
                                                                                
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

#ifndef USB_CONFIG_H
#define USB_CONFIG_H

// Created by the Microchip MFi Library SW320411 Configuration Utility for iAP2/iAP1, Version 4.06.00.00, 04/14/2014, 17:30:52

#define _USB_CONFIG_VERSION_MAJOR 4
#define _USB_CONFIG_VERSION_MINOR 6
#define _USB_CONFIG_VERSION_DOT   0
#define _USB_CONFIG_VERSION_BUILD 0
////////////////////////////////////////////////////////////////////////////////

#include "system.h"

////////////////////////////////////////////////////////////////////////////////
// USB Host

#define USB_SUPPORT_HOST
#define USB_PING_PONG_MODE  USB_PING_PONG__FULL_PING_PONG

#define NUM_TPL_ENTRIES             10
#define NUM_CLIENT_DRIVER_ENTRIES   4

#define USB_SUPPORT_ISOCHRONOUS_TRANSFERS
#define USB_MAX_ISOCHRONOUS_DATA_BUFFERS    2
#define USB_HOST_APP_DATA_EVENT_HANDLER     USB_HostDataHandler
#define USB_ENABLE_TRANSFER_EVENT
#define USB_NUM_CONTROL_NAKS                20000
#define USB_SUPPORT_INTERRUPT_TRANSFERS
#define USB_NUM_INTERRUPT_NAKS              3
#define USB_INITIAL_VBUS_CURRENT            (100/2)
#define USB_INSERT_TIME                     (250+1)
#define USB_HOST_APP_EVENT_HANDLER          USB_HostEventHandler
#define USB_ENABLE_1MS_EVENT

// Host HID Client Driver Configuration

#define USB_MAX_HID_DEVICES             1
#define HID_MAX_DATA_FIELD_SIZE         8
#define USB_HID_ENABLE_TRANSFER_EVENT

#define USBTasks()                  \
    {                               \
        USBHostTasks();             \
        USBHostHIDTasks();          \
    }

////////////////////////////////////////////////////////////////////////////////
#endif
