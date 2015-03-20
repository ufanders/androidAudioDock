/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        system.h
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
#ifndef SYSTEM_H
#define SYSTEM_H
////////////////////////////////////////////////////////////////////////////////

#include <xc.h>
#include "GenericTypeDefs.h"
#include "time.h"
#include "i2s.h"
#include <plib.h>

#define ROM     const

////////////////////////////////////////////////////////////////////////////////
#ifdef SYSTEM_C

    #pragma config PMDL1WAY = OFF           //
    #pragma config IOL1WAY  = OFF           //
    #pragma config FUSBIDIO = OFF           //
    #pragma config FVBUSONIO= OFF           //
    #pragma config UPLLEN   = ON            // USB PLL Enabled
    #pragma config FPLLMUL  = MUL_16        // PLL Multiplier
    #pragma config UPLLIDIV = DIV_3         // USB PLL Input Divider
    #pragma config FPLLIDIV = DIV_3         // PLL Input Divider
    #pragma config FPLLODIV = DIV_2         // PLL Output Divider
    #pragma config FPBDIV   = DIV_1         // Peripheral Clock divisor
    #pragma config FWDTEN   = OFF           // Watchdog Timer
    #pragma config WDTPS    = PS1           // Watchdog Timer Postscale
    #pragma config FCKSM    = CSDCMD        // Clock Switching & Fail Safe Clock Monitor
    #pragma config OSCIOFNC = OFF           // CLKO Enable
    #pragma config POSCMOD  = HS            // Primary Oscillator
    #pragma config IESO     = OFF           // Internal/External Switch-over
    #pragma config FSOSCEN  = OFF           // Secondary Oscillator Enable (KLO was off)
    #pragma config FNOSC    = PRIPLL        // Oscillator Selection

    #pragma config JTAGEN   = OFF           //
    #pragma config CP       = OFF           // Code Protect
    #pragma config BWP      = OFF           // Boot Flash Write Protect
    #pragma config PWP      = OFF           // Program Flash Write Protect
    #pragma config ICESEL   = ICS_PGx2      // ICE/ICD Comm Channel Select

#endif
////////////////////////////////////////////////////////////////////////////////

#define SYSTEM_GetSystemClock()             32000000ul
#define SYSTEM_GetInstructionClock()        SysGetClock()
#define SYSTEM_GetPeripheralClock()         SysGetClock()

#define SysGetClock()                   SYSTEM_GetSystemClock()
#define SysGetInstructionClock()        SYSTEM_GetInstructionClock()
#define SysGetPeripheralClock()         SYSTEM_GetPeripheralClock()
#define GetPeripheralClock()            SYSTEM_GetPeripheralClock()

////////////////////////////////////////////////////////////////////////////////

#define SysIdle()                   SYSTEM_Idle ()
#define SYSTEM_PowerUp()            LATGSET = 0b1000000000000000
#define SYSTEM_PowerDown()          LATGCLR = 0b1000000000000000

#define SYSTEM_LED_ALL              0b00011111
#define SYSTEM_LED_SYS              0b00000001
#define SYSTEM_LED_ATTACH           0b00000010
#define SYSTEM_LED_CONNECT          0b00000100

#define SYSTEM_LED_1                0b00000001
#define SYSTEM_LED_2                0b00000010
#define SYSTEM_LED_3                0b00000100
#define SYSTEM_LED_4                0b00001000
#define SYSTEM_LED_5                0b00010000

////////////////////////////////////////////////////////////////////////////////

#define SYSTEM_AD_VOLUME_POT        0x000B0000  // AN11

#define SYSTEM_AD_MAX               0xFFC0
#define SYSTEM_AD_MID               0x8000

////////////////////////////////////////////////////////////////////////////////

#define SYSTEM_MAIN_I2C_MODULE      PED_I2C2
#define SYSTEM_MAIN_I2C_SPEED       40000
#define SYSTEM_ACP_I2C_MODULE       PED_I2C2
#define SYSTEM_ACP_I2C_ADDRESS      0x20

////////////////////////////////////////////////////////////////////////////////

#define APPLE_ACPShutdown()         LATDCLR = 0b0100000000000000
#define APPLE_ACPPower()            LATDSET = 0b0100000000000000

////////////////////////////////////////////////////////////////////////////////

#define PC_AUDIO_GetVBUS()           SYSTEM_GetUSBMiniB ()

////////////////////////////////////////////////////////////////////////////////

#define SAMSUNG_GetVBUS()           SYSTEM_GetUSBMiniB ()

////////////////////////////////////////////////////////////////////////////////

#define KEY_NUMBER_OF               6

////////////////////////////////////////////////////////////////////////////////
// USB Device Definitions

#define self_power                  1
#define USB_BUS_SENSE               1
#define MAX_ALLOWED_CURRENT         500
#define USB_CHARGING_CURRENT        2100

#define SYSTEM_USB_SWITCH_TYPE_A    0b10
#define SYSTEM_USB_SWITCH_MINI_B    0b11

////////////////////////////////////////////////////////////////////////////////
// Audio driver configuration

#define AUDIO_PLAYBACK
//#define AUDIO_RECORD

#define AUDIO_INIT_SAMPLE_RATE          48000
#define AUDIO_INIT_SAMPLE_RESOLUTION    16
#define AUDIO_INIT_VOLUME               -12

#define AUDIO_MAX_SAMPLE_RATE              96000
#define AUDIO_MAX_BITS_PER_SAMPLE   24
#define AUDIO_NUM_CHANNELS          2

#define AUDIO_MAX_SAMPLES           (( AUDIO_MAX_SAMPLE_RATE + 999 ) / 1000 )   // round-up
#define AUDIO_BYTES_PER_SUBFRAME    (( AUDIO_MAX_BITS_PER_SAMPLE + 7 ) / 8 ) // round-up
#define AUDIO_BYTES_PER_FRAME       ( AUDIO_BYTES_PER_SUBFRAME * AUDIO_NUM_CHANNELS )
#define AUDIO_MAX_PACKET_SIZE       ( AUDIO_MAX_SAMPLES * AUDIO_BYTES_PER_FRAME )

////////////////////////////////////////////////////////////////////////////////
// I2S driver configuration

#define I2S_BUFFER_SIZE             2880   // 5 ms @ 96 KHz 24 bit
#define I2S_OPTIMAL_SIZE            ( I2S_BUFFER_SIZE / 2 )
#define I2S_TUNING_COEFF            1      // higher val = more aggressive

#define I2S_MODULE                  SPI_CHANNEL1
#define I2S_PORT                    SPI1BUF
#define I2S_TX_IRQ                  _SPI1_TX_IRQ
#define I2S_RX_IRQ                  _SPI1_RX_IRQ
#define I2S_INIT_ROSEL              0b0110	// USB PLL
#define I2S_INIT_REFERENCE_CLOCK    96000000
#define I2S_BICK_DIVIDER            4
#define I2S_INIT_SAMPLERATE         48000
#define I2S_INIT_SAMPLERATE_TUNING  TRUE
#define I2S_INIT_AUDIO_MODE         SPI_CONFIG2_AUDMOD_I2S
#define I2S_INIT_SAMPLE_RESOLUTION  16

#define I2S_TX_DMA_CHANNEL          DMA_CHANNEL0
#define I2S_TX_DMA_IRQ              INT_DMA0
#define I2S_TX_DMA_VECTOR           INT_DMA_0_VECTOR
#define I2S_TX_DMA_HANDLER          _DMA_0_VECTOR
#define I2S_TX_DMA_INT_PRI          INT_PRIORITY_LEVEL_5
#define I2S_TX_DMA_INT_SPRI         INT_SUB_PRIORITY_LEVEL_0
#define I2S_TX_DMA_IPL              IPL5SOFT

#define I2S_RX_DMA_CHANNEL          DMA_CHANNEL1
#define I2S_RX_DMA_IRQ              INT_DMA1
#define I2S_RX_DMA_VECTOR           INT_DMA_1_VECTOR
#define I2S_RX_DMA_HANDLER          _DMA_1_VECTOR
#define I2S_RX_DMA_INT_PRI          INT_PRIORITY_LEVEL_5
#define I2S_RX_DMA_INT_SPRI         INT_SUB_PRIORITY_LEVEL_1
#define I2S_RX_DMA_IPL              IPL5SOFT

////////////////////////////////////////////////////////////////////////////////
//  AK4384 HAL definitions

#define AK4384_AssertCS()                       LATDCLR = 0b0000000000000100
#define AK4384_DeassertCS()                     LATDSET = 0b0000000000000100

#define AK4384_SetCCLKHigh()                    LATDSET = 0b0000000000001000
#define AK4384_SetCCLKLow()                     LATDCLR = 0b0000000000001000

#define AK4384_SetCDTIHigh()                    LATDSET = 0b0001000000000000
#define AK4384_SetCDTILow()                     LATDCLR = 0b0001000000000000

#define AK4201_PowerUp()                        LATDSET = 0b0000000000000010
#define AK4201_PowerDown()                      LATDCLR = 0b0000000000000010

////////////////////////////////////////////////////////////////////////////////

#define USE_GFX_PMP
#define USE_8BIT_PMP
#define PIC32_GP_SK
#define GFX_USE_DISPLAY_CONTROLLER_OTM2201A
#define GFX_USE_DISPLAY_PANEL_PH480272T_005_I11Q

#define DISP_ORIENTATION		90
#define DISP_HOR_RESOLUTION		176
#define DISP_VER_RESOLUTION		220

#define PMP_DATA_SETUP_TIME                1
#define PMP_DATA_WAIT_TIME                 40
#define PMP_DATA_HOLD_TIME                 1


#define DisplayConfig()             TRISDCLR = _TRISD_TRISD11_MASK
#define DisplayEnable()             LATDCLR = _LATD_LATD11_MASK     //ADK Checked
#define DisplayDisable()            LATDSET = _LATD_LATD11_MASK     //ADK Checked

#define DisplayCmdDataConfig()      TRISBCLR = _TRISB_TRISB15_MASK
#define DisplaySetCommand()         LATBCLR = _LATB_LATB15_MASK
#define DisplaySetData()            LATBSET = _LATB_LATB15_MASK

#define DisplayResetConfig()        TRISCCLR = _TRISC_TRISC1_MASK    //ADK Checked
#define DisplayResetEnable()        LATCCLR =  _LATC_LATC1_MASK       //ADK Checked
#define DisplayResetDisable()       LATCSET =  _LATC_LATC1_MASK       //ADK Checked

#define DisplayBacklightOff()
#define DisplayBacklightConfig()

////////////////////////////////////////////////////////////////////////////////

VOID SYSTEM_Initialize ( VOID );
VOID SYSTEM_Idle ( VOID );
VOID SYSTEM_Sleep ( VOID );
VOID SYSTEM_IntEnable ( VOID );
VOID SYSTEM_IntDisable ( VOID );
UINT16 SYSTEM_ADCRead ( UINT32 channel );
VOID SYSTEM_SetUSBSwitch ( UINT8 channel );
UINT8 SYSTEM_GetUSBSwitch ( VOID );
VOID SYSTEM_SetLedOn ( UINT16 leds );
VOID SYSTEM_SetLedOff ( UINT16 leds );
VOID SYSTEM_SetLedToggle ( UINT16 leds );
UINT16 SYSTEM_LedMask ( UINT16 leds );
UINT16 SYSTEM_GetLed ( VOID );
UINT16 SYSTEM_GetKeys ( VOID );
VOID SYSTEM_Error ( VOID );

#define SYSTEM_InterruptDisable()   INTDisableInterrupts ()
#define SYSTEM_InterruptEnable()    INTEnableInterrupts ()

#define Delay10us(x)                TIME_Delay10us ( x )
#define DelayMs(x)                  TIME_Delay1ms ( x )

////////////////////////////////////////////////////////////////////////////////
#endif
