/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        main.c
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
#define MAIN_C
#include "main.h"
////////////////////////////////////////////////////////////////////////////////

const KEY_STATE keyInitMain[KEY_NUMBER_OF] =
{
    { KEY_ID_NC,            KEY_MODE_DISABLED },
    { KEY_ID_NC,            KEY_MODE_DISABLED },
    { KEY_ID_NEXT,          KEY_MODE_DUAL_HOLD },
    { KEY_ID_PLAY,          KEY_MODE_DUAL_ACTION },
    { KEY_ID_PREV,          KEY_MODE_DUAL_HOLD },
    { KEY_ID_NC,            KEY_MODE_DISABLED },
};

////////////////////////////////////////////////////////////////////////////////

INT main ( VOID )
{
    UINT16 time10ms;

    MAIN_Initialize ( );
    time10ms = TIME_Get1ms ( );

    while ( TRUE )
    {
        ANDROID_Task ();
        AFE_Task ( );
        KEY_Task ( );
        MAIN_VolumeControlTask ( );
        MAIN_DisplayTask ();

        SYSTEM_Idle ( );
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID MAIN_Initialize ( VOID )
{
    SYSTEM_Initialize ( );
    PED_I2CInit ( SYSTEM_MAIN_I2C_MODULE, SYSTEM_MAIN_I2C_SPEED, PED_I2C_ENABLE_HIGH_SPEED | PED_I2C_7BIT_ADDRESS );
    TIME_Delay1ms ( 10 );
    SYSTEM_PowerUp ();

    USBHostInit ( 0 );
    DISPLAY_Initialize ();
    KEY_Initialize ( keyInitMain );
    AFE_Initialize ();
    ANDROID_Initialize ( );
    SYSTEM_SetLedOn ( SYSTEM_LED_SYS );
}

////////////////////////////////////////////////////////////////////////////////

VOID MAIN_DisplayTask ( VOID )
{
    static UINT16 timeMark;
    static UINT32 sampleRate = AUDIO_INIT_SAMPLE_RATE;
    static UINT8 resolution = AUDIO_INIT_SAMPLE_RESOLUTION;

    if ( TIME_Passed1ms ( timeMark ) < MAIN_DISPLAY_TASK_PERIOD )
    {
        return;
    }
    timeMark = TIME_Get1ms ();

    if (( AFE_GetParameter ( AFE_PARAM_SAMPLE_RATE ) != sampleRate )
       || ( AFE_GetParameter ( AFE_PARAM_SAMPLE_RESOLUTION ) != resolution ))
    {
        DISPLAY_StreamStatus ();
        sampleRate = AFE_GetParameter ( AFE_PARAM_SAMPLE_RATE );
        resolution = AFE_GetParameter ( AFE_PARAM_SAMPLE_RESOLUTION );
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID MAIN_VolumeControlTask ( VOID )
{
    static UINT16 timeMark = 0;
    static INT16 currVolume = AK4384_VOLUME_MIN;
    static UINT32 adcFiltered = 0;
    UINT16 adcVal;
    INT16 volume;

    if ( TIME_Passed1ms ( timeMark ) < MAIN_VOLUME_TASK_PERIOD )
    {
        return;
    }
    timeMark = TIME_Get1ms ();

    adcVal = SYSTEM_AD_MAX - SYSTEM_ADCRead ( SYSTEM_AD_VOLUME_POT );
    adcFiltered = ( adcFiltered * 3 + adcVal + 2 ) / 4;

    volume = ( adcFiltered * ( AK4384_VOLUME_MAX - AK4384_VOLUME_MIN + 1 )) / SYSTEM_AD_MAX;
    volume += AK4384_VOLUME_MIN;

    if ( volume != currVolume )
    {
        AFE_SetParameter ( AFE_PARAM_VOLUME, volume );
        currVolume = volume;
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID KEY_Handler ( UINT8 key, UINT8 event )
{
    switch ( key )
    {
        case KEY_ID_MUTE:
            ANDROID_ControlHandler ( CTRL_MUTE );
            break;

        case KEY_ID_PLAY:
            if ( event == KEY_EVENT_PRIMARY )
            {
                ANDROID_ControlHandler ( CTRL_PLAY_PAUSE );
            }
            else
            {
                ANDROID_ControlHandler ( CTRL_STOP );
            }
            break;

        case KEY_ID_PREV:
            if ( event == KEY_EVENT_PRIMARY )
            {
                ANDROID_ControlHandler ( CTRL_PREV_TRACK );
            }
            else
            {
                ANDROID_ControlHandler ( CTRL_REWIND );
            }
            break;

        case KEY_ID_NEXT:
            if ( event == KEY_EVENT_PRIMARY )
            {
                ANDROID_ControlHandler ( CTRL_NEXT_TRACK );
            }
            else
            {
                ANDROID_ControlHandler ( CTRL_FAST_FORWARD );
            }
            break;
    }
}

////////////////////////////////////////////////////////////////////////////////

BOOL ANDROID_CBHandler ( ANDROID_EVENT event, UINT32 data )
{
    switch ( event )
    {
        case ANDROID_EVENT_ATTACHED:
            SYSTEM_SetLedOn ( SYSTEM_LED_ATTACH );
            DISPLAY_Command ( DISPLAY_CMD_ATTACHED );
            break;

        case ANDROID_EVENT_CONNECTED:
            SYSTEM_SetLedOn ( SYSTEM_LED_CONNECT );
            DISPLAY_Command ( DISPLAY_CMD_CONNECTED );
            break;

        case ANDROID_EVENT_DETACHED:
            SYSTEM_SetLedOff ( SYSTEM_LED_ATTACH | SYSTEM_LED_CONNECT );
            DISPLAY_Command ( DISPLAY_CMD_DETACHED );
            break;
    }

    return ( TRUE );
}

////////////////////////////////////////////////////////////////////////////////
