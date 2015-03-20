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

#include "system.h"
#include "usb/usb.h"
#include "iap_config.h"

#include "usb/usb_function_audio.h"  // For constant definitions only
#include "usb/usb_function_hid.h"     // For constant definitions only
#include "ped_usb_audio.h"

/* Configuration 1 Descriptor */
ROM BYTE ConfigDescriptorPC[170] =
{
   /* Configuration Descriptor */
   9,                                   // Size of this descriptor in bytes
   USB_DESCRIPTOR_CONFIGURATION,        // CONFIGURATION descriptor type
   DESC_CONFIG_WORD ( sizeof ( ConfigDescriptorPC )),	// Total length of data for this cfg
   2,                                   // Number of interfaces in this cfg
   USB_PC_CONFIG_ID,                 // Index value of this configuration
   0x00,                                // Configuration string index
   _DEFAULT | _SELF,                    // Attributes, see usb_device.h
   ( IAP_MAXIMUM_CURRENT_DRAW / 2 ),   // Max power consumption (2X mA)

   ////////////////////////////////////////////////////////////////////////////
    // Audio Control Interface

    /* USB Standard AC Interface Descriptor */
    9,                                   // Size of this descriptor in bytes (bLength)
    USB_DESCRIPTOR_INTERFACE,               // INTERFACE descriptor type (bDescriptorType)
    USB_AUDIO_CONTROL_INTERFACE,         // Interface Number  (bInterfaceNumber)
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
        DESC_CONFIG_WORD ( 0x0100 ),        // Audio Device compliant to the USB Audio specification version 1.00 (bcdADC)
        DESC_CONFIG_WORD ( 39 ),            // Total number of bytes returned for the class-specific AudioControl interface descriptor. (wTotalLength)
                                            // Includes the combined length of this descriptor header and all Unit and Terminal descriptors.
        1,                                  // The number of AudioStreaming interfaces in the Audio Interface Collection to which this AudioControl interface belongs  (bInCollection)
        USB_AUDIO_STREAMING_OUT_INTERFACE,   // Interface belonging to this AudioControl interface (baInterfaceNr)

        //----------------------------------------------------------------------

        /* USB Streaming Audio Input Terminal Descriptor */
        12,                                 // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        INPUT_TERMINAL,                     // INPUT_TERMINAL descriptor subtype (bDescriptorSubtype)
        ID_INPUT_TERMINAL_STREAM,           // ID of this Terminal(bTerminalID)
        DESC_CONFIG_WORD ( 0x0101 ),        // USB Streaming (wTerminalType)
        0x00,                               // No association (bAssocTerminal)
        0x02,                               // Two Channels (bNrChannels)
        DESC_CONFIG_WORD ( 0x0003 ),        // Left Front, Right Front (wChannelConfig)
        0x00,                               // Unused(iChannelNames)
        0x00,                               // Unused (iTerminal)

        /* USB Speaker Feature Unit Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        FEATURE_UNIT,                       // FEATURE_UNIT  descriptor subtype (bDescriptorSubtype)
        ID_FEATURE_UNIT,                    // ID of this unit (bUnitID)
        ID_INPUT_TERMINAL_STREAM,           // ID of the unit that is the source for this unit (bSourceID)
        0x02,                               // Number of bytes in bmaControls (bControlSize)
        DESC_CONFIG_WORD ( 0x0003 ),        // Mute control, mandatory for PC audio (bmaControls)
        0x00,                               // Unused (iFeature)

        /* USB Speaker Output Terminal Descriptor */
        9,                               // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        OUTPUT_TERMINAL,                    // OUTPUT_TERMINAL descriptor subtype (bDescriptorSubtype)
        ID_OUTPUT_TERMINAL_SPEAKER,         // ID of this Terminal (bTerminalID)
        DESC_CONFIG_WORD( 0x0301 ),         // Generic speaker (wTerminalType)
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
    0,                                      // Number of endpoints in this interface (bNumEndpoints)
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
        DESC_CONFIG_WORD ( 0x0001 ),        // PCM Format (wFormatTag)

        /*  USB Speaker Type 1 Format Type Descriptor */
        20,                                 // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        FORMAT_TYPE,                        // FORMAT_TYPE subtype (bDescriptorSubtype)
        1,                                  // FORMAT_TYPE_1 (bFormatType)
        AUDIO_NUM_CHANNELS,                 // (bNrChannels)
        2,                                  // (bSubFrameSize)
        16,                                 // (bBitResolution)
        4,                                  // Number of frequencies supported  (bSamFreqType)
        0x80, 0xBB, 0x00,                   // 48000 Hz (tSamFreq)
        0x44, 0xAC, 0x00,                   // 44100 Hz (tSamFreq)
        0x88, 0x58, 0x01,                   // 88200 Hz (tSamFreq)
        0x00, 0x77, 0x01,                   // 96000 Hz (tSamFreq)

        /*  USB Speaker Standard Endpoint Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        USB_DESCRIPTOR_ENDPOINT,            // ENDPOINT descriptor (bDescriptorType)
        USB_AUDIO_STREAM_EP | USB_OUT_EP,   // Endpoing number (bEndpointAddress)
        0b0001101,                          // Isochronous, Synchronous, Data Endpoint (bmAttributes)
        DESC_CONFIG_WORD ( AUDIO_MAX_PACKET_SIZE ),       // Max bytes per packet - 48 kHz, 2 channels, 2 bytes per sample (wMaxPacketSize)
        1,                                  // One packet per frame.(bInterval)
        0,                                  // Unused. (bRefresh)
        0x00,    							// Unused (bSynchAddress)

            /* USB Speaker Class-specific Isoc. Audio Data Endpoint Descriptor*/
            7,                              // Size of the descriptor, in bytes (bLength)
            CS_ENDPOINT,                    // CS_ENDPOINT Descriptor Type (bDescriptorType)
            EP_GENERAL,                     // GENERAL subtype. (bDescriptorSubtype)
            0x01,                           // Sampling frequency control, no pitch control, no packet padding.(bmAttributes)
            0x00,                           // Unused. (bLockDelayUnits)
            DESC_CONFIG_WORD ( 0x0000 ),    // Unused. (wLockDelay)

    //----------------------------------------------------------------------
   /* USB Speaker Standard AS Interface Descriptor (Alt. Set. 2), full bandwidth */
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
        DESC_CONFIG_WORD ( 0x0001 ),        // PCM Format (wFormatTag)

        /*  USB Speaker Type 1 Format Type Descriptor */
        20,                                 // Size of the descriptor, in bytes (bLength)
        CS_INTERFACE,                       // CS_INTERFACE Descriptor Type (bDescriptorType)
        FORMAT_TYPE,                        // FORMAT_TYPE subtype (bDescriptorSubtype)
        1,                                  // FORMAT_TYPE_1 (bFormatType)
        AUDIO_NUM_CHANNELS,                 // (bNrChannels)
        3,                                  // (bSubFrameSize)
        24,                                 // (bBitResolution)
        4,                                  // Number of frequencies supported  (bSamFreqType)
        0x80, 0xBB, 0x00,                   // 48000 Hz (tSamFreq)
        0x44, 0xAC, 0x00,                   // 44100 Hz (tSamFreq)
        0x88, 0x58, 0x01,                   // 88200 Hz (tSamFreq)
        0x00, 0x77, 0x01,                   // 96000 Hz (tSamFreq)

        /*  USB Speaker Standard Endpoint Descriptor */
        9,                                  // Size of the descriptor, in bytes (bLength)
        USB_DESCRIPTOR_ENDPOINT,            // ENDPOINT descriptor (bDescriptorType)
        USB_AUDIO_STREAM_EP | USB_OUT_EP,   // Endpoing number (bEndpointAddress)
        0b0001101,                          // Isochronous, Synchronous, Data Endpoint (bmAttributes)
        DESC_CONFIG_WORD ( AUDIO_MAX_PACKET_SIZE ),       // Max bytes per packet - 48 kHz, 2 channels, 2 bytes per sample (wMaxPacketSize)
        0x01,                               // One packet per frame.(bInterval)
        0x00,                               // Unused. (bRefresh)
        0x00,                               // Unused. (bSynchAddress)

            /* USB Speaker Class-specific Isoc. Audio Data Endpoint Descriptor*/
            7,                              // Size of the descriptor, in bytes (bLength)
            CS_ENDPOINT,                    // CS_ENDPOINT Descriptor Type (bDescriptorType)
            EP_GENERAL,                     // GENERAL subtype. (bDescriptorSubtype)
            0x01,                           // Sampling frequency control, no pitch control, no packet padding.(bmAttributes)
            0x00,                           // Unused. (bLockDelayUnits)
            DESC_CONFIG_WORD ( 0x0000 ),    // Unused. (wLockDelay)
};

extern ROM BYTE *USB_CD_Ptr[];

VOID USB_DESC_SetConfigPC ( VOID )
{
    USB_CD_Ptr[0] = ConfigDescriptorPC;
}

/** EOF usb_descriptors.c ***************************************************/
#endif
