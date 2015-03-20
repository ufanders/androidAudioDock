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

#define IAP_HANDLERS_C

#include "iap_handlers.h"

// <MFIConfig.Handlers_Header_Files>
// </MFIConfig.Handlers_Header_Files>

const UINT8 iAP2_LSP_USBDM [] = {
    // Link Version
    0x01,
    // Maximum Number of Outstanding Packets
    0x01,
    // Maximum Packet Length
    ( IAP_MAXIMUM_PACKET_LENGTH_IN >> 8 ), ( IAP_MAXIMUM_PACKET_LENGTH_IN & 0xFF ),
    // Retransmission Timeout
    HIGH_BYTE(IAP2_RETRANSMISSION_TIMEOUT_USBDM), LOW_BYTE(IAP2_RETRANSMISSION_TIMEOUT_USBDM),
    // Cumulative ACK Timeout - Tasks function must be called at least this often
    HIGH_BYTE(IAP2_CUMULATIVE_ACK_TIMEOUT_USBDM), LOW_BYTE(IAP2_CUMULATIVE_ACK_TIMEOUT_USBDM),
    // Maximum Number of Retransmissions
    IAP2_MAX_RETRANSMISSIONS_USBDM,
    // Maximum Cumulative Acknowledgements
    0x00,
    // iAP2 Session 1: Session ID, Type, Version
    IAP2_SESSION_00_ID, IAP2_SESSION_00_TYPE, IAP2_SESSION_00_VERSION,
};

const UINT8 iAP2_identificationInformation_USBDM [] = {
    // Name
    0x00,0x19,0x00,0x00,'U','n','i','v','e','r','s','a','l',' ','A','u','d','i','o',' ','D','o','c','k',0x00,
    // ModelIdentifier
    0x00,0x0B,0x00,0x01,'C','u','s','t','o','m',0x00,
    // Manufacturer
    0x00,0x1E,0x00,0x02,'M','i','c','r','o','c','h','i','p',' ','T','e','c','h','n','o','l','o','g','y',' ','I','n','c','.',0x00,
    // SerialNumber
    0x00,0x09,0x00,0x03,'N','o','n','e',0x00,
    // FirmwareVersion
    0x00,0x09,0x00,0x04,'5','.','0','0',0x00,
    // HardwareVersion
    0x00,0x0A,0x00,0x05,'R','e','v',' ','1',0x00,
    // MessagesSentByAccessory
    0x00,0x14,0x00,0x06,0x68,0x00,0x68,0x02,0x68,0x03,0xAE,0x00,0xAE,0x02,0xAE,0x03,0xDA,0x00,0xDA,0x02,
    // MessagesReceivedFromDevice
    0x00,0x0A,0x00,0x07,0x68,0x01,0xAE,0x01,0xDA,0x01,
    // PowerSourceType
    0x00,0x05,0x00,0x08,IAP2_POWER_SOURCE_TYPE,
    // MaximumCurrentDrawnFromDevice
    0x00,0x06,0x00,0x09,HIGH_BYTE(IAP_MAXIMUM_CURRENT_DRAW), LOW_BYTE(IAP_MAXIMUM_CURRENT_DRAW),
    // CurrentLanguage
    0x00,0x07,0x00,0x0C,'e','n',0x00,
    // SupportedLanguage
    0x00,0x07,0x00,0x0D,'e','n',0x00,
    // USBDeviceTransportComponent
    0x00,0x26,0x00,0x0F,
        // TransportComponentIdentifier
        0x00,0x06,0x00,0x00,HIGH_BYTE( IAP_TRANSPORT_USB_DEVICE_MODE ), LOW_BYTE( IAP_TRANSPORT_USB_DEVICE_MODE ),
        // TransportComponentName
        0x00,0x09,0x00,0x01,'i','A','P','2',0x00,
        // TransportSupportsiAP2Connection
        0x00,0x04,0x00,0x02,
        // USBDeviceSupportedAudioSampleRate
        0x00,0x05,0x00,0x03,0x06,
        // USBDeviceSupportedAudioSampleRate
        0x00,0x05,0x00,0x03,0x07,
        // USBDeviceSupportedAudioSampleRate
        0x00,0x05,0x00,0x03,0x08,
    // iAP2HIDComponent
    0x00,0x1A,0x00,0x12,
        // HIDComponentIdentifier
        0x00,0x06,0x00,0x00,HIGH_BYTE( IAP2_HID_00_ID ), LOW_BYTE( IAP2_HID_00_ID ),
        // HIDComponentName
        0x00,0x0B,0x00,0x01,'R','e','m','o','t','e',0x00,
        // HIDComponentFunction
        0x00,0x05,0x00,0x02,IAP2_HID_00_FUNCTION,
};


const UINT8 iAP2_LSP_USBHM [] = {
    // Link Version
    0x01,
    // Maximum Number of Outstanding Packets
    0x01,
    // Maximum Packet Length
    ( IAP_MAXIMUM_PACKET_LENGTH_IN >> 8 ), ( IAP_MAXIMUM_PACKET_LENGTH_IN & 0xFF ),
    // Retransmission Timeout
    HIGH_BYTE(IAP2_RETRANSMISSION_TIMEOUT_USBHM), LOW_BYTE(IAP2_RETRANSMISSION_TIMEOUT_USBHM),
    // Cumulative ACK Timeout - Tasks function must be called at least this often
    HIGH_BYTE(IAP2_CUMULATIVE_ACK_TIMEOUT_USBHM), LOW_BYTE(IAP2_CUMULATIVE_ACK_TIMEOUT_USBHM),
    // Maximum Number of Retransmissions
    IAP2_MAX_RETRANSMISSIONS_USBHM,
    // Maximum Cumulative Acknowledgements
    0x00,
    // iAP2 Session 1: Session ID, Type, Version
    IAP2_SESSION_00_ID, IAP2_SESSION_00_TYPE, IAP2_SESSION_00_VERSION,
};

const UINT8 iAP2_identificationInformation_USBHM [] = {
    // Name
    0x00,0x19,0x00,0x00,'U','n','i','v','e','r','s','a','l',' ','A','u','d','i','o',' ','D','o','c','k',0x00,
    // ModelIdentifier
    0x00,0x0B,0x00,0x01,'C','u','s','t','o','m',0x00,
    // Manufacturer
    0x00,0x1E,0x00,0x02,'M','i','c','r','o','c','h','i','p',' ','T','e','c','h','n','o','l','o','g','y',' ','I','n','c','.',0x00,
    // SerialNumber
    0x00,0x09,0x00,0x03,'N','o','n','e',0x00,
    // FirmwareVersion
    0x00,0x09,0x00,0x04,'5','.','0','0',0x00,
    // HardwareVersion
    0x00,0x0A,0x00,0x05,'R','e','v',' ','1',0x00,
    // MessagesSentByAccessory
    0x00,0x10,0x00,0x06,0x68,0x00,0x68,0x02,0x68,0x03,0xAE,0x00,0xAE,0x02,0xAE,0x03,
    // MessagesReceivedFromDevice
    0x00,0x08,0x00,0x07,0x68,0x01,0xAE,0x01,
    // PowerSourceType
    0x00,0x05,0x00,0x08,IAP2_POWER_SOURCE_TYPE,
    // MaximumCurrentDrawnFromDevice
    0x00,0x06,0x00,0x09,HIGH_BYTE(IAP_MAXIMUM_CURRENT_DRAW), LOW_BYTE(IAP_MAXIMUM_CURRENT_DRAW),
    // CurrentLanguage
    0x00,0x07,0x00,0x0C,'e','n',0x00,
    // SupportedLanguage
    0x00,0x07,0x00,0x0D,'e','n',0x00,
    // USBHostTransportComponent
    0x00,0x17,0x00,0x10,
        // TransportComponentIdentifier
        0x00,0x06,0x00,0x00,HIGH_BYTE( IAP_TRANSPORT_USB_HOST_MODE ), LOW_BYTE( IAP_TRANSPORT_USB_HOST_MODE ),
        // TransportComponentName
        0x00,0x09,0x00,0x01,'i','A','P','2',0x00,
        // TransportSupportsiAP2Connection
        0x00,0x04,0x00,0x02,
    // iAP2HIDComponent
    0x00,0x1A,0x00,0x12,
        // HIDComponentIdentifier
        0x00,0x06,0x00,0x00,HIGH_BYTE( IAP2_HID_00_ID ), LOW_BYTE( IAP2_HID_00_ID ),
        // HIDComponentName
        0x00,0x0B,0x00,0x01,'R','e','m','o','t','e',0x00,
        // HIDComponentFunction
        0x00,0x05,0x00,0x02,IAP2_HID_00_FUNCTION,
};


//////////////////////////////////////////////////////////////////////

void IAPCB_CommandReceive ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_CommandReceive ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_CommandReceive ();
            break;
    }
}

//////////////////////////////////////////////////////////////////////

void IAPCB_CommandTransmit ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_CommandTransmit ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_CommandTransmit ();
            break;
    }
}

//////////////////////////////////////////////////////////////////////

IAP_COMMUNICATION_STATUS IAPCB_GetStatus ( void )
{
    IAP_COMMUNICATION_STATUS status;

    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            status = IAPIF_USBH_GetStatus ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            status = IAPIF_USBD_GetStatus ();
            break;
    }
    if ( IAP_iAP2InUse() )
    {
        if ( IAP2ID_IsIdentifying() )
        {
            status.identifying = 1;
        }
        if ( IAP2AU_IsAuthenticating() )
        {
            status.authenticating = 1;
        }
    }
    else
    {
        if ( IAP1ID_IsIdentifying() )
        {
            status.identifying = 1;
        }
        if ( IAP1AU_IsAuthenticating() )
        {
            status.authenticating = 1;
        }
    }
    return status;
}

//////////////////////////////////////////////////////////////////////

UINT8 IAPCB_Initialize ( void )
{
    UINT8 rc;

    rc = IAPCP_Initialize ();
    if ( rc != IAP_SUCCESS )
    {
        return rc;
    }

    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_Initialize ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_Initialize ();
            break;
    }

    rc = IAP1I_Initialize ();
    if ( rc != IAP_SUCCESS )
    {
        return rc;
    }
    IAP1ID_Initialize ();
    IAP1AU_Initialize ();

    rc = IAP2I_Initialize ();
    if ( rc != IAP_SUCCESS )
    {
        return rc;
    }
    IAP2ID_Initialize ();
    IAP2AU_Initialize ();

    return IAP_SUCCESS;
}

//////////////////////////////////////////////////////////////////////

BOOL IAPCB_IsCommandReceived( void )
{
    if ( IAP_iAP2InUse() )
    {
        return IAP2I_IsCommandReceived();
    }
    else
    {
        return IAP1I_IsCommandReceived();
    }
}

//////////////////////////////////////////////////////////////////////

BOOL IAPCB_IsiPodAttached ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            return IAPIF_USBH_IsiPodAttached ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            return IAPIF_USBD_IsiPodAttached ();
            break;
    }
    return FALSE;
}

//////////////////////////////////////////////////////////////////////

BOOL IAPCB_IsReadyForiAP ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            return IAPIF_USBH_IsReadyForiAP ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            return IAPIF_USBD_IsReadyForiAP ();
            break;
    }
    return FALSE;
}

//////////////////////////////////////////////////////////////////////

void IAPCB_OutputBufferEmptied( void )
{
    if ( IAP_iAP2InUse() )
    {
        return IAP2I_OutputBufferEmptied();
    }
    else
    {
        return IAP1I_OutputBufferEmptied();
    }
}

//////////////////////////////////////////////////////////////////////

BOOL IAPCB_ProcessCompletion ( void )
{
    if ( IAP_iAP2InUse() )
    {
        if ( IAP2ID_ProcessCompletion() ) return TRUE;
        if ( IAP2AU_ProcessCompletion() ) return TRUE;
    }
    else
    {
        if ( IAP1ID_ProcessCompletion() ) return TRUE;
        if ( IAP1AU_ProcessCompletion() ) return TRUE;
    }
    return FALSE;
}

//////////////////////////////////////////////////////////////////////

void IAPCB_ProcessiPodAttach ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_ProcessiPodAttach ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_ProcessiPodAttach ();
            break;
    }
    IAP1I_ProcessiPodAttach ();
    IAP2I_ProcessiPodAttach ();
}

//////////////////////////////////////////////////////////////////////

void IAPCB_ProcessiPodDetach ( void )
{
    if ( IAP_iAP2InUse() )
    {
        IAP2ID_ProcessiPodDetach ();
        IAP2AU_ProcessiPodDetach ();
        IAP2I_ProcessiPodDetach ();
    }
    else
    {
        IAP1ID_ProcessiPodDetach ();
        IAP1AU_ProcessiPodDetach ();
        IAP1I_ProcessiPodDetach ();
    }
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_ProcessiPodDetach ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_ProcessiPodDetach ();
            break;
    }
}

//////////////////////////////////////////////////////////////////////

BOOL IAPCB_ProcessPacket ( void )
{
    if ( IAP_iAP2InUse() )
    {
        if ( IAP2ID_ProcessPacket() ) return TRUE;
        if ( IAP2AU_ProcessPacket() ) return TRUE;
    }
    else
    {
        if ( IAP1ID_ProcessPacket() ) return TRUE;
        if ( IAP1AU_ProcessPacket() ) return TRUE;
    }
    return FALSE;
}

//////////////////////////////////////////////////////////////////////

UINT16 IAPCB_ReceivedMessageLength( void )
{
    if ( IAP_iAP2InUse() )
    {
        return IAP2I_CommandLength();
    }
    else
    {
        return IAP1I_CommandLength();
    }
}

//////////////////////////////////////////////////////////////////////

void IAPCB_ResetInputCommandBuffer ( BOOL purge )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_ResetInputCommandBuffer ( purge );
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_ResetInputCommandBuffer ( purge );
            break;
    }
}

//////////////////////////////////////////////////////////////////////

void IAPCB_Shutdown ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_Shutdown ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_Shutdown ();
            break;
    }
}

//////////////////////////////////////////////////////////////////////

void IAPCB_Tasks ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_Tasks ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_Tasks ();
            break;
    }
 
    if ( IAP_iAP2InUse() )
    {
        IAP2ID_Tasks ();
        IAP2AU_Tasks ();
        IAP2I_Tasks();
    }
    else
    {
        IAP1ID_Tasks ();
        IAP1AU_Tasks ();
        IAP1I_Tasks();
    }
}

//////////////////////////////////////////////////////////////////////

void IAPCB_TerminateReceive ( void )
{
    switch ( iAP_applicationInformation.activeTransport )
    {
        case IAP_TRANSPORT_USB_DEVICE_MODE:
            IAPIF_USBH_TerminateReceive ();
            break;
        case IAP_TRANSPORT_USB_HOST_MODE:
            IAPIF_USBD_TerminateReceive ();
            break;
    }
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// USB Device Mode Support Functions
//
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// USB Host Mode Support Functions
//
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void IAPIF_USBD_USBDisableInterrupts( void )
{
    USBDisableInterrupts();
}

void IAPIF_USBD_USBEnableInterrupts( void )
{
    USBEnableInterrupts();
}

