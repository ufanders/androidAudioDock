/*******************************************************************************
FileName:       ped_i2c.c
Processor:      PIC24F/PIC32
Compiler:       XC16/XC32

Copyright 2012-2014 released Microchip Technology Inc.  All rights
reserved.

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
*******************************************************************************/

#define PED_I2C_C
#include "ped_i2c.h"

///////////////////////////////////////////////////////////////////////////////

BOOL ack;

///////////////////////////////////////////////////////////////////////////////
VOID PED_I2CInitBRG ( PED_I2C_HANDLE i2c, UINT16 brg, UINT16 flags )
{
    i2c->I2CxBRG = brg;
    i2c->I2CxCON = flags | PED_I2CxCON_INIT_MASK;
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CReady ( PED_I2C_HANDLE i2c )
{
    if (( i2c->I2CxCON & PED_I2CxCON_BUSY_MASK ) != 0 )
    {
        return ( FALSE );
    }
    else
    {
        if (( i2c->I2CxSTATbits.TRSTAT ) != 0 )
        {
            return ( FALSE );
        }
    }

    return ( TRUE );
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CReadyWait ( PED_I2C_HANDLE i2c )
{
    UINT16 timeout;
    
    timeout = TIME_Get1ms () + PED_I2C_TIMEOUT_1MS;

    do
    {
        if ( PED_I2CReady ( i2c ) == TRUE )
        {
            return ( TRUE );
        }

        SYSTEM_Idle ();
    }
    while ( TIME_Elapsed1ms ( timeout ) == FALSE );

    return ( FALSE );
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CStart ( PED_I2C_HANDLE i2c, UINT8 addr )
{
    ack = FALSE;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxCONbits.SEN = TRUE;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxTRN = addr;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    if ( i2c->I2CxSTATbits.ACKSTAT == 0 )
    {
        return ( TRUE );
    }
    else
    {
        return ( FALSE );
    }
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CRestart ( PED_I2C_HANDLE i2c, UINT8 addr )
{
    ack = FALSE;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxCONbits.RSEN = TRUE;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxTRN = addr;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    if ( i2c->I2CxSTATbits.ACKSTAT == 0 )
    {
        return ( TRUE );
    }
    else
    {
        return ( FALSE );
    }
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CReceiveByte ( PED_I2C_HANDLE i2c, UINT8 *data )
{
    if ( ack == TRUE )
    {
        i2c->I2CxCONbits.ACKDT = PED_I2C_ACK;
        i2c->I2CxCONbits.ACKEN = TRUE;
    }
    ack = TRUE;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxCONbits.RCEN = TRUE;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    *data = i2c->I2CxRCV;

    return ( TRUE );
}
///////////////////////////////////////////////////////////////////////////////
UINT16 PED_I2CReceiveData ( PED_I2C_HANDLE i2c, UINT8 *addr, UINT16 count )
{
    UINT16 read = 0;

    while ( count > 0 )
    {
        if ( ack == TRUE )
        {
            i2c->I2CxCONbits.ACKDT = PED_I2C_ACK;
            i2c->I2CxCONbits.ACKEN = TRUE;
        }
        ack = TRUE;

        if ( PED_I2CReadyWait ( i2c ) != TRUE )
        {
            break;
        }

        i2c->I2CxCONbits.RCEN = TRUE;

        if ( PED_I2CReadyWait ( i2c ) != TRUE )
        {
            break;
        }

        *addr = i2c->I2CxRCV;
        addr ++;
        count --;
        read ++;
    }

    return ( read );
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CSendByte ( PED_I2C_HANDLE i2c, UINT8 data )
{
    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxTRN = data;

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    if ( i2c->I2CxSTATbits.ACKSTAT == 1 )
    {
        return ( FALSE );
    }

    return ( TRUE );
}
///////////////////////////////////////////////////////////////////////////////
UINT16 PED_I2CSendData ( PED_I2C_HANDLE i2c, const UINT8 *addr, UINT16 count )
{
    UINT16 written = 0;

    while ( count > 0 )
    {
        if ( PED_I2CReadyWait ( i2c ) != TRUE )
        {
            break;
        }

        i2c->I2CxTRN = *addr;
        addr ++;
        count --;
        written ++;

        if ( PED_I2CReadyWait ( i2c ) != TRUE )
        {
            break;
        }

        if ( i2c->I2CxSTATbits.ACKSTAT == 1 )
        {
            break;
        }
    }

    return ( written );
}
///////////////////////////////////////////////////////////////////////////////
BOOL PED_I2CStop ( PED_I2C_HANDLE i2c )
{
    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    if ( ack == TRUE )
    {
        i2c->I2CxCONbits.ACKDT = PED_I2C_NAK;
        i2c->I2CxCONbits.ACKEN = TRUE;
    }

    if ( PED_I2CReadyWait ( i2c ) != TRUE )
    {
        return ( FALSE );
    }

    i2c->I2CxCONbits.PEN = TRUE;

    return ( TRUE );
}
///////////////////////////////////////////////////////////////////////////////
