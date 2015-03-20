/*******************************************************************************
  I2C Library Interface Definition

  Summary:
    This file contains the Application Program Interface (API) definition  for
    the I2C peripheral library.

  Description:
    This library provides a low-level abstraction of the I2C (Inter-Integrated
    Circuit) module on Microchip PIC32MX family microcontrollers with a
    convenient C language interface.  It can be used to simplify low-level
    access to the module without the necessity of interacting directly with the
    module's registers, thus hiding differences from one microcontroller
    variant to another.
*******************************************************************************/
//DOM-IGNORE-BEGIN
/*******************************************************************************
FileName:       ped_i2c.h
Processor:      PIC24F
Compiler:       Microchip MPLAB C30 v3.22 or higher

Copyright 2012-2013 released Microchip Technology Inc.  All rights reserved.

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

#ifndef PED_I2C_H
#define PED_I2C_H

////////////////////////////////////////////////////////////////////////////////

    #include "system.h"
    #include "time.h"

    #if defined ( __C30__ ) || defined ( __XC16__ )
        #include "ped_i2c_hal16.h"
    #elif defined( __C32__ ) || defined ( __XC32__ )
        #include "ped_i2c_hal32.h"
    #else
        #error Invalid device.
    #endif

    #define     PED_I2C_TIMEOUT_1MS        10

    #define     PED_I2CInit( i2c, freq, flags )  PED_I2CInitBRG ( i2c, ( SYSTEM_GetPeripheralClock () / freq ) - 1, flags )
    VOID        PED_I2CInitBRG ( PED_I2C_HANDLE i2c, UINT16 brg, UINT16 flags );
    BOOL        PED_I2CReady ( PED_I2C_HANDLE i2c );
    BOOL        PED_I2CStart ( PED_I2C_HANDLE i2c, UINT8 addr );
    BOOL        PED_I2CRestart ( PED_I2C_HANDLE i2c, UINT8 addr );
    BOOL        PED_I2CSendByte ( PED_I2C_HANDLE i2c, UINT8 data );
    UINT16      PED_I2CSendData ( PED_I2C_HANDLE i2c, const UINT8 *addr, UINT16 count );
    BOOL        PED_I2CReceiveByte ( PED_I2C_HANDLE i2c, UINT8 *data );
    UINT16      PED_I2CReceiveData ( PED_I2C_HANDLE i2c, UINT8 *addr, UINT16 count );
    BOOL        PED_I2CStop ( PED_I2C_HANDLE i2c );

////////////////////////////////////////////////////////////////////////////////
#endif
