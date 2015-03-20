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

// Created by the Microchip MFi Library SW320411 Configuration Utility for iAP2/iAP1, Version 5.00.00.00, 05/16/2014, 13:46:27

#ifndef _IAP_CONFIG_H_
#define _IAP_CONFIG_H_

#define _IAP_CONFIG_VERSION_MAJOR 5
#define _IAP_CONFIG_VERSION_MINOR 0
#define _IAP_CONFIG_VERSION_DOT   0
#define _IAP_CONFIG_VERSION_BUILD 0

//------------------------------------------------------------------------------
// Accessory Information

#define IAP_INCLUDE_IAP1_SUPPORT
#define IAP_INCLUDE_IAP2_SUPPORT

#define IAP_ACCESSORY_NAME                      "Universal Audio Dock"
#define IAP_ACCESSORY_MANUFACTURER              "Microchip Technology Inc."
#define IAP_ACCESSORY_MODEL_NUMBER              "Custom"
#define IAP_ACCESSORY_SERIAL_NUMBER             "None"
#define IAP1_ACCESSORY_HARDWARE_VERSION_MAJOR   1
#define IAP1_ACCESSORY_HARDWARE_VERSION_MINOR   0
#define IAP1_ACCESSORY_HARDWARE_VERSION_REV     0
#define IAP2_ACCESSORY_HARDWARE_VERSION         "Rev 1"
#define IAP1_ACCESSORY_SOFTWARE_VERSION_MAJOR   5
#define IAP1_ACCESSORY_SOFTWARE_VERSION_MINOR   0
#define IAP1_ACCESSORY_SOFTWARE_VERSION_REV     0
#define IAP2_ACCESSORY_SOFTWARE_VERSION         "5.00"

//------------------------------------------------------------------------------
// Coordinating Information 

#define IAP2_IDENTIFICATION_INFORMATION_SIZE_UART   0
#define IAP2_LSP_SIZE_UART                          0
#define IAP2_IDENTIFICATION_INFORMATION_SIZE_USBDM  213
#define IAP2_LSP_SIZE_USBDM                         13
#define IAP2_IDENTIFICATION_INFORMATION_SIZE_USBHM  192
#define IAP2_LSP_SIZE_USBHM                         13
#define IAP2_IDENTIFICATION_INFORMATION_SIZE_BT     0
#define IAP2_LSP_SIZE_BT                            0
#define IAP2_POWER_SOURCE_TYPE                      2
#define IAP_MAXIMUM_CURRENT_DRAW                    0
#define IAP_OPERATIONAL_FLAGS                       0x35

//------------------------------------------------------------------------------
// Transport and ACP

#define IAP_USE_USB_DEVICE_MODE
#define IAP2_RETRANSMISSION_TIMEOUT_USBDM       2000
#define IAP2_CUMULATIVE_ACK_TIMEOUT_USBDM       10
#define IAP2_MAX_RETRANSMISSIONS_USBDM          30
#define IAP2_AUDIO_SAMPLE_RATES                 0x1C0
#define IAP_USE_USB_HOST_MODE
#define IAP2_RETRANSMISSION_TIMEOUT_USBHM       2000
#define IAP2_CUMULATIVE_ACK_TIMEOUT_USBHM       10
#define IAP2_MAX_RETRANSMISSIONS_USBHM          30
#define USB_APPLICATION_VID                     0x04D8
#define USB_APPLICATION_PID                     0x0068
#define IAP_MAXIMUM_PACKET_LENGTH_IN            256
#define IAP_MAXIMUM_PACKET_LENGTH_OUT           1040
#define IAP_CP_ADDRESS                          0x20
#define IAP_CP_FREQUENCY                        (400000ul)
#define IAP_CP_MODULE                           PED_I2C1

//------------------------------------------------------------------------------
// Session Information

#define IAP2_SESSION_00_ID       1
#define IAP2_SESSION_00_TYPE     0
#define IAP2_SESSION_00_VERSION  1

//------------------------------------------------------------------------------
// HID Component Information

#define IAP2_HID_00_ID          1
#define IAP2_HID_00_NAME        "Remote"
#define IAP2_HID_00_FUNCTION    1

//------------------------------------------------------------------------------
// Messages

#define IAP2_MESSAGE_SENT_00           0x6800
#define IAP2_MESSAGE_SENT_01           0x6802
#define IAP2_MESSAGE_SENT_02           0x6803
#define IAP2_MESSAGE_SENT_03           0xAE00
#define IAP2_MESSAGE_SENT_04           0xAE02
#define IAP2_MESSAGE_SENT_05           0xAE03
#define IAP2_MESSAGE_SENT_06           0xDA00
#define IAP2_MESSAGE_SENT_07           0xDA02
#define IAP2_MESSAGE_RECEIVED_00       0x6801
#define IAP2_MESSAGE_RECEIVED_01       0xAE01
#define IAP2_MESSAGE_RECEIVED_02       0xDA01

//------------------------------------------------------------------------------
// Languages

#define IAP2_CURRENT_LANGUAGE          "en"
#define IAP2_LANGUAGE_00               "en"

//------------------------------------------------------------------------------
// OS Application Information

#define IAP_BUNDLE_SEED_ID             ""
#define IAP_BUNDLE_ID                  ""

#define IAP1_EA_PROTOCOL_STRING_COUNT          0
#define IAP1_EA_PROTOCOL_STRINGS               ""

//------------------------------------------------------------------------------
// iAP1 Configuration 

#define IAP1_OPERATIONAL_PARAMETERS_BYTE0       0x80
#define IAP1_OPERATIONAL_PARAMETERS_BYTE1       0x6A
#define IAP1_OPERATIONAL_PARAMETERS_BYTE2       0x0B

#define IAP1_COMMAND_DELAY_IDL                  0
#define IAP1_COMMAND_DELAY                      0

//------------------------------------------------------------------------------
// Lingoes, Capabilities, and Preferences

#define IAP1_ACCESSORY_LINGOES                  (IAP1_LINGO_FLAG_GENERAL | IAP1_LINGO_FLAG_SIMPLE_REMOTE | IAP1_LINGO_FLAG_DIGITAL_AUDIO)

#define IAP1_ACCESSORY_PREFERENCES_BYTE0        0x00
#define IAP1_ACCESSORY_PREFERENCES_BYTE1        0x00

#define IAP1_ACCESSORY_CAPABILITIES_BYTE0       0x10
#define IAP1_ACCESSORY_CAPABILITIES_BYTE1       0x00
#define IAP1_ACCESSORY_CAPABILITIES_BYTE2       0x00
#define IAP1_ACCESSORY_CAPABILITIES_BYTE3       0x00
#define IAP1_ACCESSORY_CAPABILITIES_BYTE4       0x00
#define IAP1_ACCESSORY_CAPABILITIES_BYTE5       0x00
#define IAP1_ACCESSORY_CAPABILITIES_BYTE6       0x00
#define IAP1_ACCESSORY_CAPABILITIES_BYTE7       0x00

//------------------------------------------------------------------------------
// Accessory RF Certifications

#define IAP1_ACCESSORY_RF_CERTIFICATIONS_BYTE0  0x00
#define IAP1_ACCESSORY_RF_CERTIFICATIONS_BYTE1  0x00
#define IAP1_ACCESSORY_RF_CERTIFICATIONS_BYTE2  0x00
#define IAP1_ACCESSORY_RF_CERTIFICATIONS_BYTE3  0x00

//------------------------------------------------------------------------------
// Device Options

#define IAP1_ACCESSORY_DEVICE_OPTIONS_BYTE0     0x02
#define IAP1_ACCESSORY_DEVICE_OPTIONS_BYTE1     0x00
#define IAP1_ACCESSORY_DEVICE_OPTIONS_BYTE2     0x00
#define IAP1_ACCESSORY_DEVICE_OPTIONS_BYTE3     0x00

//------------------------------------------------------------------------------
// Extra USB Charging Current (USB only)

#define IAP1_USB_EXTRA_CURRENT_IN_SUSPEND       0
#define IAP1_USB_EXTRA_CURRENT_NOT_IN_SUSPEND   500


#endif

