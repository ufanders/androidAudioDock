/*
********************************************************************************
                                                                                
Software License Agreement                                                      
                                                                                
Copyright � 2010-2011 Microchip Technology Inc.  All rights reserved.           
                                                                                
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
#ifndef __USB_DESCRIPTORS_C
#define __USB_DESCRIPTORS_C

#include "usb/usb.h"
#include "iap_config.h"

#include "usb/usb_function_audio.h"  // For constant definitions only
#include "usb/usb_function_hid.h"     // For constant definitions only

/* Device Descriptor */
ROM USB_DEVICE_DESCRIPTOR device_dsc=
{
    sizeof(USB_DEVICE_DESCRIPTOR),    // Size of this descriptor in bytes
    USB_DESCRIPTOR_DEVICE, 		               // DEVICE descriptor type
    0x0200,                 // USB Spec Release Number in BCD format
    0x00,                   // Class Code
    0x00,                   // Subclass code
    0x00,                   // Protocol code
    USB_EP0_BUFF_SIZE,      // Max packet size for EP0
    USB_APPLICATION_VID,    // Vendor ID
    USB_APPLICATION_PID,    // Product ID
    0x0100,                 // Device release number in BCD format
    0x01,                   // Manufacturer string index
    0x02,                   // Product string index
    0x00,                   // Device serial number string index
    0x01                    // Number of possible configurations
};

#define USB_CONFIG_INTERFACE_iAP_SIZE       ( 23 )
#define USB_CONFIG_INTERFACE_iAP_AUDIO_SIZE ( 149 )
#define USB_CONFIG_DESCRIPTOR_iAP_SIZE      ( USB_CONFIG_INTERFACE_iAP_SIZE + USB_CONFIG_INTERFACE_iAP_AUDIO_SIZE + 9 )

/* Configuration 1 Descriptor */
ROM BYTE ConfigDescriptorApple[ USB_CONFIG_DESCRIPTOR_iAP_SIZE ] =
{
    /* Configuration Descriptor */
    9,                                      // Size of this descriptor in bytes
    USB_DESCRIPTOR_CONFIGURATION,           // CONFIGURATION descriptor type
    DESC_CONFIG_WORD ( sizeof ( ConfigDescriptorApple )),   // Total length of the configuration descriptor
    4,                                      // Number of interfaces in this configuration
    USB_APPLE_CONFIG_ID,                    // Index value of this configuration
    3,                                      // Configuration string index
    _DEFAULT | _SELF,                       // Attributes, see usb_device.h
    ( IAP_MAXIMUM_CURRENT_DRAW / 2 ),      // Max power consumption (2X mA)

    ////////////////////////////////////////////////////////////////////////////
    // iAP Interface

    /* USB Standard Interface Descriptor */
    9,                                      // Size of this descriptor in bytes
    USB_DESCRIPTOR_INTERFACE,               // INTERFACE descriptor type
    USB_IAP_INTERFACE_ID,                   // Interface Number
    0,                                      // Alternate Setting Number
    2,                                      // Number of endpoints in this intf
    0xFF,                                   // Class code
    0xF0,                                   // Subclass code
    0x00,                                   // Protocol code
    4,                                      // Interface string index

        /* USB Standard Endpoint Descriptor - Bulk Endpoint OUT to the device */
        7,                                  // Size of this descriptor in bytes (bLength)
        USB_DESCRIPTOR_ENDPOINT,            //Endpoint Descriptor
        USB_IAP_BULK_EP | USB_OUT_EP,       //EndpointAddress
        _BULK,                              //Attributes
        USB_IAP_BULK_SIZE,0x00,             //size
        1,                                  //Interval

        /* USB Standard Endpoint Descriptor - Bulk Endpoint IN from the device */
        7,                                  // Size of this descriptor in bytes (bLength)
        USB_DESCRIPTOR_ENDPOINT,            //Endpoint Descriptor
        USB_IAP_BULK_EP | USB_IN_EP,        //EndpointAddress
        _BULK,                              //Attributes
        USB_IAP_BULK_SIZE,0x00,             //size
        1,                                  //Interval

    ////////////////////////////////////////////////////////////////////////////
    // Audio Control Interface

    /* USB Standard AC Interface Descriptor */
    9,                                      // Size of this descriptor in bytes (bLength)
    USB_DESCRIPTOR_INTERFACE,               // INTERFACE descriptor type (bDescriptorType)
    USB_AUDIO_CONTROL_INTERFACE,            // Interface Number  (bInterfaceNumber)
    0x00,                                   // Alternate Setting Number (bAlternateSetting)
    0x00,                                   // Number of endpoints in this intf (bNumEndpoints)
    AUDIO_DEVICE,                           // Class code  (bInterfaceClass)
    AUDIOCONTROL,                           // Subclass code (bInterfaceSubclass)
    0x00,                                   // Protocol code  (bInterfaceProtocol)
    0x00,                                   // Interface string index (iInterface)

        //----------------------------------------------------------------------

        /* USB Class-specific AC Interface Descriptor  */
        9,                                  // Size of this descriptor in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        HEADER,                             // HEADER descriptor subtype    (bDescriptorSubtype)
        0x00,0x01,                          // Audio Device compliant to the USB Audio specification version 1.00 (bcdADC)
        39,                                 // Total number of bytes returned for the class-specific AudioControl interface descriptor. (wTotalLength)
        0,                                  //     Includes the combined length of this descriptor header and all Unit and Terminal descriptors.
        1,                                  // The number of AudioStreaming interfaces in the Audio Interface Collection to which this AudioControl interface belongs  (bInCollection)
        USB_AUDIO_STREAMING_OUT_INTERFACE,  // Interface belonging to this AudioControl interface (baInterfaceNr)

        //----------------------------------------------------------------------

        /* USB Streaming Audio Input Terminal Descriptor */
        12,                                 // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        INPUT_TERMINAL,                     // INPUT_TERMINAL descriptor subtype (bDescriptorSubtype)
        ID_INPUT_TERMINAL_STREAM,           // ID of this Terminal(bTerminalID)
        0x01,0x01,                          // USB Streaming (wTerminalType)
        0x00,                               // No association (bAssocTerminal)
        0x02,                               // Two Channels (bNrChannels)
        0x03,0x00,                          // Left Front, Right Front (wChannelConfig)
        0x00,                               // Unused(iChannelNames)
        0x00,                               // Unused (iTerminal)

        /* USB Speaker Feature Unit Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        FEATURE_UNIT,                       // FEATURE_UNIT  descriptor subtype (bDescriptorSubtype)
        ID_FEATURE_UNIT,                    // ID of this unit (bUnitID)
        ID_INPUT_TERMINAL_STREAM,           // ID of the unit that is the source for this unit (bSourceID)
        0x02,                               // Number of bytes in bmaControls (bControlSize)
        DESC_CONFIG_WORD ( 0x0000 ),        // No controls supported (bmaControls)
        0x00,                               // Unused (iFeature)

        /* USB Speaker Output Terminal Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        OUTPUT_TERMINAL,                    // OUTPUT_TERMINAL descriptor subtype (bDescriptorSubtype)
        ID_OUTPUT_TERMINAL_SPEAKER,         // ID of this Terminal (bTerminalID)
        0x01,0x03,                          // Generic speaker (wTerminalType)
        0x00,                               // No association (bAssocTerminal)
        ID_FEATURE_UNIT,                    // ID of the unit that is the source for this terminal (bSourceID)
        0x00,                               // Unused (iTerminal)

    ////////////////////////////////////////////////////////////////////////////
    // Streaming Audio OUT Interface

    /* USB Speaker Standard AS Interface Descriptor (Alt. Set. 0), zero bandwidth */
    9,                                      // Size of the descriptor, in bytes (bLength)
    USB_DESCRIPTOR_INTERFACE,               // INTERFACE descriptor type (bDescriptorType)
    USB_AUDIO_STREAMING_OUT_INTERFACE,      // Interface Number (bInterfaceNumber)
    USB_AUDIO_ALT_ZERO_BANDWIDTH,           // Alternate Setting Number (bAlternateSetting)
    0x00,                                   // Number of endpoints in this interface (bNumEndpoints)
    AUDIO_DEVICE,                           // Class code (bInterfaceClass)
    AUDIOSTREAMING,                         // Subclass code (bInterfaceSubclass)
    0x00,                                   // Protocol code  (bInterfaceProtocol)
    0x00,                                   // Interface string index (iInterface)

    //----------------------------------------------------------------------

    /* USB Speaker Standard AS Interface Descriptor (Alt. Set. 1), full bandwidth */
    9,                                      // Size of the descriptor, in bytes (bLength)
    USB_DESCRIPTOR_INTERFACE,               // INTERFACE descriptor type (bDescriptorType)
    USB_AUDIO_STREAMING_OUT_INTERFACE,      // Interface Number (bInterfaceNumber)
    USB_AUDIO_ALT_FULL_BANDWIDTH_16,        // Alternate Setting Number (bAlternateSetting)
    1,                                      // Number of endpoints in this interface (bNumEndpoints)
    AUDIO_DEVICE,                           // Class code (bInterfaceClass)
    AUDIOSTREAMING,                         // Subclass code (bInterfaceSubclass)
    0x00,                                   // Protocol code (bInterfaceProtocol)
    0x00,                                   // Interface string index (iInterface)

        /*  USB Speaker Class-specific AS General Interface Descriptor */
        7,                                  // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        AS_GENERAL,                         // GENERAL subtype (bDescriptorSubtype)
        ID_INPUT_TERMINAL_STREAM,           // Unit ID of the Terminal (bTerminalLink)
        0x01,                               // Interface delay (bDelay)
        0x01,0x00,                          // PCM Format (wFormatTag)

        /*  USB Speaker Type 1 Format Type Descriptor */
        14,                                 // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        FORMAT_TYPE,                        // FORMAT_TYPE subtype (bDescriptorSubtype)
        1,                                  // FORMAT_TYPE_1 (bFormatType)
        AUDIO_NUM_CHANNELS,                 // (bNrChannels)
        2,                                  // (bSubFrameSize)
        16,                                 // (bBitResolution)
        2,                                  // Number of frequencies supported  (bSamFreqType)
        0x80, 0xBB, 0x00,                   // 48000 Hz (tSamFreq)
        0x44, 0xAC, 0x00,                   // 44100 Hz (tSamFreq)

        /*  USB Speaker Standard Endpoint Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        USB_DESCRIPTOR_ENDPOINT,            // ENDPOINT descriptor (bDescriptorType)
        USB_AUDIO_STREAM_EP | USB_OUT_EP,   // Endpoing number (bEndpointAddress)
        0b0000101,                          // Isochronous, Synchronous, Data Endpoint (bmAttributes)
        DESC_CONFIG_WORD ( AUDIO_MAX_PACKET_SIZE ),       // Max bytes per packet - 48 kHz, 2 channels, 2 bytes per sample (wMaxPacketSize)
        1,                               // One packet per frame.(bInterval)
        0,                               // Unused. (bRefresh)
        0x00,    							// Unused (bSynchAddress)

            /* USB Speaker Class-specific Isoc. Audio Data Endpoint Descriptor*/
            7,                              // Size of the descriptor, in bytes (bLength)
            CS_ENDPOINT,                    // CS_ENDPOINT Descriptor Type (bDescriptorType)
            EP_GENERAL,                     // GENERAL subtype. (bDescriptorSubtype)
            0x01,                           // Sampling frequency control, no pitch control, no packet padding.(bmAttributes)
            0x00,                           // Unused. (bLockDelayUnits)
            DESC_CONFIG_WORD ( 0x0000 ),    // Unused. (wLockDelay)

    //----------------------------------------------------------------------

    /* USB Speaker Standard AS Interface Descriptor (Alt. Set. 1), full bandwidth */
    9,                                      // Size of the descriptor, in bytes (bLength)
    USB_DESCRIPTOR_INTERFACE,               // INTERFACE descriptor type (bDescriptorType)
    USB_AUDIO_STREAMING_OUT_INTERFACE,      // Interface Number (bInterfaceNumber)
    USB_AUDIO_ALT_FULL_BANDWIDTH_24,        // Alternate Setting Number (bAlternateSetting)
    1,                                      // Number of endpoints in this interface (bNumEndpoints)
    AUDIO_DEVICE,                           // Class code (bInterfaceClass)
    AUDIOSTREAMING,                         // Subclass code (bInterfaceSubclass)
    0x00,                                   // Protocol code (bInterfaceProtocol)
    0x00,                                   // Interface string index (iInterface)

        /*  USB Speaker Class-specific AS General Interface Descriptor */
        7,                                  // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        AS_GENERAL,                         // GENERAL subtype (bDescriptorSubtype)
        ID_INPUT_TERMINAL_STREAM,           // Unit ID of the Terminal (bTerminalLink)
        0x01,                               // Interface delay (bDelay)
        0x01,0x00,                          // PCM Format (wFormatTag)

        /*  USB Speaker Type 1 Format Type Descriptor */
        14,                                 // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        FORMAT_TYPE,                        // FORMAT_TYPE subtype (bDescriptorSubtype)
        1,                                  // FORMAT_TYPE_1 (bFormatType)
        AUDIO_NUM_CHANNELS,                 // (bNrChannels)
        3,                                  // (bSubFrameSize)
        24,                                 // (bBitResolution)
        2,                                  // Number of frequencies supported  (bSamFreqType)
        0x80, 0xBB, 0x00,                   // 48000 Hz (tSamFreq)
        0x44, 0xAC, 0x00,                   // 44100 Hz (tSamFreq)


        /*  USB Speaker Standard Endpoint Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        USB_DESCRIPTOR_ENDPOINT,            // ENDPOINT descriptor (bDescriptorType)
        USB_AUDIO_STREAM_EP | USB_OUT_EP,   // Endpoing number (bEndpointAddress)
        0b0001101,                          // Isochronous, Synchronous, Data Endpoint (bmAttributes)
        DESC_CONFIG_WORD ( AUDIO_MAX_PACKET_SIZE ),       // Max bytes per packet - 48 kHz, 2 channels, 2 bytes per sample (wMaxPacketSize)
        0x01,                               // One packet per frame.(bInterval)
        0x00,                               // Unused. (bRefresh)
        0x00,    							// Unused (bSynchAddress)

            /* USB Speaker Class-specific Isoc. Audio Data Endpoint Descriptor*/
            7,                              // Size of the descriptor, in bytes (bLength)
            CS_ENDPOINT,                    // CS_ENDPOINT Descriptor Type (bDescriptorType)
            EP_GENERAL,                     // GENERAL subtype. (bDescriptorSubtype)
            0x01,                           // Sampling frequency control, no pitch control, no packet padding.(bmAttributes)
            0x00,                           // Unused. (bLockDelayUnits)
            DESC_CONFIG_WORD ( 0x0000 )    // Unused. (wLockDelay)
};

//Language code string descriptor
ROM struct{BYTE bLength;BYTE bDscType;WORD string[1];}sd000={
sizeof(sd000),USB_DESCRIPTOR_STRING,{0x0409}};

//Manufacturer string descriptor - must match Accessory Manufacturer
ROM struct{BYTE bLength;BYTE bDscType;WORD string[25];}sd001={
sizeof(sd001),USB_DESCRIPTOR_STRING,
{'M','i','c','r','o','c','h','i','p',' ','T','e','c','h','n','o','l','o','g','y',' ','I','n','c','.'}};

//Product string descriptor - must match Accessory Name
ROM struct{BYTE bLength;BYTE bDscType;WORD string[24];}sd002={
sizeof(sd002),USB_DESCRIPTOR_STRING,
{'U','n','i','v','e','r','s','a','l',' ','U','S','B',' ','A','u','d','i','o',' ','D','o','c','k'}};

//Configuration string descriptor
ROM struct{BYTE bLength;BYTE bDscType;WORD string[18];}sd003={
sizeof(sd003),USB_DESCRIPTOR_STRING,
{'M','a','i','n',' ','C','o','n','f','i','g','u','r','a','t','i','o','n'}};

//Interface string descriptor
ROM struct{BYTE bLength;BYTE bDscType;WORD string[13];}sd004={
sizeof(sd004),USB_DESCRIPTOR_STRING,
{'i','A','P',' ','I','n','t','e','r','f','a','c','e'}};

//Serial Number string descriptor
ROM struct{BYTE bLength;BYTE bDscType;WORD string[7];}sd005={
sizeof(sd005),USB_DESCRIPTOR_STRING,
{'V','a','r','i','o','u','s'}};

//Array of configuration descriptors
ROM BYTE *USB_CD_Ptr[1] = { ConfigDescriptorApple };

//Array of string descriptors
ROM BYTE *ROM USB_SD_Ptr[]=
{
    (ROM BYTE *ROM)&sd000,
    (ROM BYTE *ROM)&sd001,
    (ROM BYTE *ROM)&sd002,
    (ROM BYTE *ROM)&sd003,
    (ROM BYTE *ROM)&sd004,
    (ROM BYTE *ROM)&sd005,
};

VOID USB_DESC_SetConfigApple ( VOID )
{
    USB_CD_Ptr[0] = ConfigDescriptorApple;
}

/** EOF usb_descriptors.c ***************************************************/
#endif
