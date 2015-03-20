/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        system.c
    Dependencies:    See Includes Section
    Processor:       PIC24, PIC32

Copyright � 2009-2013 Microchip Technology Inc.  All rights reserved.

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

******************************************************************************/
#define     SYSTEM_C
#include    "system.h"
///////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_Initialize ( VOID )
{
    LATA  = 0b0000001011110000;
    TRISA = 0b1100010000001111;

    LATB  = 0b1000000000000000;
    TRISB = 0b0111111100111111;

    LATC  = 0b0000000000000000;
    TRISC = 0b1111000000010000;

    LATD  = 0b0100100000110100;
    TRISD = 0b1010000101000000;

    LATE  = 0b0000000000000000;
    TRISE = 0b0000000100000000;

    LATF  = 0b0001000000100100;
    TRISF = 0b0010000000011000;

    LATG  = 0b0111001000000000;
    TRISG = 0b0000000111000000;

    ANSELA    = 0b0000000000000000;
    ANSELB    = 0b0000100000000000;
    ANSELC    = 0b0000000000000000;
    ANSELD    = 0b0000000000000000;
    ANSELE    = 0b0000000000000000;
    ANSELF    = 0b0000000000000000;
    ANSELG    = 0b0000000000000000;

    SYSTEMConfigWaitStatesAndPB ( SysGetClock ( ) );
    SYSTEMConfigPerformance ( SysGetClock ( ) );
    CheKseg0CacheOn ( );
    INTEnableSystemMultiVectoredInt ( );

    while ( ! OSCCONbits.SLOCK )
        SYSTEM_SetLedOn ( SYSTEM_LED_ALL );

    SYSTEM_SetLedOff ( SYSTEM_LED_ALL );
    SYSTEM_SetUSBSwitch ( SYSTEM_USB_SWITCH_TYPE_A );

    AD1CON1 = 0b0000001011100000;
    AD1CON2 = 0b0000000000000000;
    AD1CON3 = 0b0001111100000011;
    AD1CSSL = 0;
    AD1CON1bits.ADON   = TRUE;

    RPF8R = 0b0011;     // REFO
    RPD9R = 0b0111;     // FS1
    RPD0R = 0b1000;     // SDO1

    TMR1 = 0;
    T1CON = 0;
    PR1 = SysGetPeripheralClock ( ) / 1000;
    T1CONbits.TON = 1;

    INTSetVectorPriority ( INT_TIMER_1_VECTOR, 2 );
    INTSetVectorSubPriority ( INT_TIMER_1_VECTOR, 0 );
    INTEnable ( INT_T1, INT_ENABLED );

    // Need those settings to enable wake up from Idle by I2C interrupt
    INTSetVectorPriority ( INT_I2C_2_VECTOR, 1 );
    INTSetVectorSubPriority ( INT_I2C_2_VECTOR, 0 );
    INTEnable ( INT_I2C2M, INT_ENABLED );

    IPC7bits.SPI1IP = 6;

    INTEnableInterrupts ( );
}

////////////////////////////////////////////////////////////////////////////////
VOID SYSTEM_Idle ( VOID )
{
    LATASET = BIT_4;
    _wait ();
    LATACLR = BIT_4;
}
////////////////////////////////////////////////////////////////////////////////
VOID SYSTEM_Sleep ( VOID )
{
    _wait ();
}
////////////////////////////////////////////////////////////////////////////////
VOID SYSTEM_IntEnable ( VOID )
{
    INTEnableInterrupts ();
}
////////////////////////////////////////////////////////////////////////////////
VOID SYSTEM_IntDisable ( VOID )
{
    INTDisableInterrupts ();
}
////////////////////////////////////////////////////////////////////////////////
UINT16 SYSTEM_ADCRead ( UINT32 channel )
{
    AD1CHS = channel;
    AD1CON1CLR = _AD1CON1_DONE_MASK;
    AD1CON1SET = _AD1CON1_SAMP_MASK;

    while ( !(( AD1CON1bits.DONE == TRUE ) && ( AD1CON1bits.SAMP == FALSE )))
    {
        Nop ();
        Nop ();
        Nop ();
        Nop ();
    }

    return ( ADC1BUF0 );
}

////////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_SetUSBSwitch ( UINT8 channel )
{
    if ( channel == SYSTEM_USB_SWITCH_TYPE_A )
    {
        LATGCLR = _LATG_LATG0_MASK | _LATG_LATG13_MASK;
        LATGSET = _LATG_LATG1_MASK | _LATG_LATG12_MASK | _LATG_LATG14_MASK;
    }
    else
    {
        LATGCLR = _LATG_LATG12_MASK;
        LATGSET = _LATG_LATG0_MASK | _LATG_LATG1_MASK | _LATG_LATG13_MASK | _LATG_LATG14_MASK;
    }
}

////////////////////////////////////////////////////////////////////////////////

UINT8 SYSTEM_GetUSBSwitch ( VOID )
{
    return ( LATG & 0b11 );
}

///////////////////////////////////////////////////////////////////////////////

BOOL SYSTEM_GetUSBTypeA ( VOID )
{
    if ( PORTDbits.RD6 == 0 )
    {
        return ( TRUE );
    }
    else
    {
        return ( FALSE );
    }
}

///////////////////////////////////////////////////////////////////////////////

BOOL SYSTEM_GetUSBMiniB ( VOID )
{
    if ( PORTDbits.RD13 == 1 )
    {
        return ( TRUE );
    }
    else
    {
        return ( FALSE );
    }
}

///////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_SetLedOn ( UINT16 leds )
{
    LATACLR = SYSTEM_LedMask ( leds );
}

///////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_SetLedOff ( UINT16 leds )
{
    LATASET = SYSTEM_LedMask ( leds );
}

///////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_SetLedToggle ( UINT16 leds )
{
    LATAINV = SYSTEM_LedMask ( leds );
}

///////////////////////////////////////////////////////////////////////////////

UINT16 SYSTEM_LedMask ( UINT16 leds )
{
    UINT16 mask;

    leds &= SYSTEM_LED_ALL;
    mask = leds << 4;
    if ( mask & 0b0000000100000000 )
    {
        mask &= 0b1111111011111111;
        mask |= 0b0000001000000000;
    }

    return ( mask );
}

///////////////////////////////////////////////////////////////////////////////

UINT16 SYSTEM_GetLed ( VOID )
{
    UINT16 leds;

    leds = LATA & 0b0000001011110000;
    if ( leds & 0b0000001000000000 )
    {
        leds &= 0b1111110111111111;
        leds |= 0b0000000100000000;
    }
    leds >>= 4;
    
    return ( leds );
}

///////////////////////////////////////////////////////////////////////////////

UINT16 SYSTEM_GetKeys ( VOID )
{
    UINT16 state = 0;

    state = PORTA & 0b0000000000000011;
    if ( PORTAbits.RA10 )
    {
        state |= 0b0000000000000100;
    }

    state |= ( PORTB & 0b0111000000000000 ) >> 9;
    state ^= 0b0000000000111111;

    return  ( state );
}

///////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_Error ( VOID )
{
    SYSTEM_SetLedOn ( SYSTEM_LED_SYS );
    SYSTEM_SetLedOff ( SYSTEM_LED_CONNECT );
    SYSTEM_InterruptEnable ( );

    while ( TRUE )
    {
        TIME_Delay1ms ( 500 );
        SYSTEM_SetLedToggle ( SYSTEM_LED_ALL );
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Interrupts & Traps
//
////////////////////////////////////////////////////////////////////////////////

VOID __ISR ( _TIMER_1_VECTOR, IPL2SOFT ) TMR1Int ( VOID )
{
    IFS0CLR = _IFS0_T1IF_MASK;

    TIME_Update ( 1 );
}

////////////////////////////////////////////////////////////////////////////////

VOID __ISR ( _USB_1_VECTOR, IPL4SOFT ) USBInterrupt ( VOID )
{
    USB_Interrupt ();
}

////////////////////////////////////////////////////////////////////////////////

VOID __ISR ( I2S_TX_DMA_HANDLER, I2S_TX_DMA_IPL ) DMATxInterrupt ( VOID )
{
    INTClearFlag ( I2S_TX_DMA_IRQ );
    I2S_DMATxInterrupt ();
}

////////////////////////////////////////////////////////////////////////////////

VOID __ISR ( _I2C_2_VECTOR, IPL1SOFT ) I2C1MInterrupt ( VOID )
{
    // Formal handler to support wake up from Idle
    IFS1CLR = _IFS1_I2C2MIF_MASK;
}

////////////////////////////////////////////////////////////////////////////////

VOID _general_exception_handler ( )
{
    static UINT32 epc, cause;
    static UINT8 cause_ix;

    epc = _CP0_GET_EPC();
    cause = _CP0_GET_CAUSE();
    cause_ix = ( cause & _CP0_CAUSE_EXCCODE_MASK ) >> _CP0_CAUSE_EXCCODE_POSITION;

    __asm volatile ( "sdbbp 0" );

}

////////////////////////////////////////////////////////////////////////////////
