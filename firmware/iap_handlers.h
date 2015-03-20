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

// Created by the Microchip MFi Library SW320411 Configuration Utility for iAP2/iAP1, Version 5.00.00.00, 05/16/2014, 13:46:27

#ifndef IAP_HANDLERS_H
#define IAP_HANDLERS_H

#include "xc.h"
#include "ped/iap.h"

#ifdef IAP_HANDLERS_C

    #include "ped/iap_interface.h"
    #include "ped/iap1_identification.h"
    #include "ped/iap1_authentication.h"
    #include "ped/iap2_identification.h"
    #include "ped/iap2_authentication.h"

    UINT8 IAPCP_Initialize ( void );
    UINT16 IAP1I_CommandLength ( void );
    UINT8  IAP1I_Initialize ( void );
    BOOL   IAP1I_IsCommandReceived ( void );
    void   IAP1I_OutputBufferEmptied( void );
    void   IAP1I_ProcessiPodAttach ( void );
    void   IAP1I_ProcessiPodDetach ( void );
    void   IAP1I_Tasks ( void );

    UINT16 IAP2I_CommandLength ( void );
    UINT8  IAP2I_Initialize ( void );
    BOOL   IAP2I_IsCommandReceived ( void );
    void   IAP2I_OutputBufferEmptied( void );
    void   IAP2I_ProcessiPodAttach ( void );
    void   IAP2I_ProcessiPodDetach ( void );
    void   IAP2I_Tasks ( void );

#else

    extern const UINT8 iAP2_identificationInformation_USBDM [];
    extern const UINT8 iAP2_LSP_USBDM [];
    extern const UINT8 iAP2_identificationInformation_USBHM [];
    extern const UINT8 iAP2_LSP_USBHM [];

#endif

void IAPCB_CommandReceive( void );
void IAPCB_CommandTransmit( void );
IAP_COMMUNICATION_STATUS IAPCB_GetStatus ( void );
UINT8 IAPCB_Initialize ( void );
BOOL IAPCB_IsCommandReceived( void );
BOOL IAPCB_IsiPodAttached( void );
BOOL IAPCB_IsReadyForiAP( void );
void IAPCB_OutputBufferEmptied( void );
BOOL IAPCB_ProcessCompletion ( void );
void IAPCB_ProcessiPodAttach( void );
void IAPCB_ProcessiPodDetach ( void );
BOOL IAPCB_ProcessPacket ( void );
UINT16 IAPCB_ReceivedMessageLength ( void );
void IAPCB_ResetInputCommandBuffer( BOOL purge );
void IAPCB_Shutdown( void );
void IAPCB_Tasks ( void );
void IAPCB_TerminateReceive( void );

#endif

