//DOM-IGNORE-BEGIN
/*******************************************************************************
FileName:       ped_i2c_hal32.h
Processor:      PIC24F
Compiler:       Microchip MPLAB C30 v3.22 or higher

Copyright � 2013 released Microchip Technology Inc.  All rights
reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS� WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
//DOM-IGNORE-END

#ifndef PED_I2C_HAL32_H
#define PED_I2C_HAL32_H

////////////////////////////////////////////////////////////////////////////////

    #include "system.h"

////////////////////////////////////////////////////////////////////////////////

    typedef struct
    {
        union{
            volatile UINT32 I2CxCON;
            volatile __I2C1CONbits_t I2CxCONbits;
        };
        volatile UINT32 I2CxCONCLR;
        volatile UINT32 I2CxCONSET;
        volatile UINT32 I2CxCONINV;
        union{
            volatile UINT32 I2CxSTAT;
            volatile __I2C1STATbits_t I2CxSTATbits;
        };
        volatile UINT32 I2CxSTATCLR;
        volatile UINT32 I2CxSTATSET;
        volatile UINT32 I2CxSTATINV;
        volatile UINT32 I2CxADD;
        volatile UINT32 I2CxADDCLR;
        volatile UINT32 I2CxADDSET;
        volatile UINT32 I2CxADDINV;
        volatile UINT32 I2CxMSK;
        volatile UINT32 I2CxMSKCLR;
        volatile UINT32 I2CxMSKSET;
        volatile UINT32 I2CxMSKINV;
        volatile UINT32 I2CxBRG;
        volatile UINT32 I2CxBRGCLR;
        volatile UINT32 I2CxBRGSET;
        volatile UINT32 I2CxBRGINV;
        volatile UINT32 I2CxTRN;
        volatile UINT32 I2CxTRNCLR;
        volatile UINT32 I2CxTRNSET;
        volatile UINT32 I2CxTRNINV;
        volatile UINT32 I2CxRCV;
    }
    *PED_I2C_HANDLE;

    #define PED_I2C1    (PED_I2C_HANDLE)_I2C1_BASE_ADDRESS
    #define PED_I2C2    (PED_I2C_HANDLE)_I2C2_BASE_ADDRESS
    #define PED_I2C3    (PED_I2C_HANDLE)_I2C3_BASE_ADDRESS

    #define PED_I2C_READ    1
    #define PED_I2C_WRITE   0
    #define PED_I2C_ACK     0
    #define PED_I2C_NAK     1

    #define PED_I2C_GENERAL_CALL_ADDRESS        0x00
    #define PED_I2C_START_BYTE                  0x01
    #define PED_I2C_10BIT_ADDRESS_CONST_BITS    0x1E

    #define PED_I2C_ENABLE_SMB_SUPPORT  0x0100
    #define PED_I2C_ENABLE_HIGH_SPEED   0x0200
    #define PED_I2C_STOP_IN_IDLE        0x2000
    #define PED_I2C_7BIT_ADDRESS        0x0000
    #define PED_I2C_USE_10BIT_ADDRESS   0x0400
    #define PED_I2C_ENABLE_GENERAL_CALL 0x0080
    #define PED_I2C_DISABLE_IPMI        0x0800

    #define PED_I2CxCON_INIT_MASK       0b1000000000000000
    #define PED_I2CxCON_BUSY_MASK       0b0000000000011111

////////////////////////////////////////////////////////////////////////////////
#endif
