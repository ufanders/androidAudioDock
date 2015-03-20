/******************************************************************************
                     Microchip Technology, Inc.

File Name:      afe.h
Abstracts:      Analog Front End abstraction layer header
Dependencies:   see include section, system.h for additional definitions
Processor:      PIC24-dsPIC/PIC32
Compiler:       XC16/XC32

Copyright © 2009-2013 Microchip Technology Inc.  All rights reserved.

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
#ifndef AFE_H
#define AFE_H
////////////////////////////////////////////////////////////////////////////////

#include "system.h"
#include "ak4384.h"
#include "i2s.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    UINT32 sampleRate;
    INT16 volume;
    UINT8 sampleResolution;

    union
    {
        struct
        {
            UINT8 mute      :1;
            UINT8 bassBoost :1;
        };
        UINT8 flags;
    };
}
AFE_STATE;

////////////////////////////////////////////////////////////////////////////////

#define AFE_PARAM_SAMPLE_RATE           0x10
#define AFE_PARAM_MUTE                  0x20
#define AFE_PARAM_VOLUME                0x21
#define AFE_PARAM_BALANCE               0x22
#define AFE_PARAM_FADE                  0x23
#define AFE_PARAM_BASS_BOOST            0x30
#define AFE_PARAM_BASS                  0x31
#define AFE_PARAM_MID                   0x32
#define AFE_PARAM_TREBLE                0x33
#define AFE_PARAM_SAMPLE_RESOLUTION     0x40
#define AFE_PARAM_BUFFER_STATE          0xF0

////////////////////////////////////////////////////////////////////////////////

VOID AFE_Initialize ( VOID );
VOID AFE_Task ( VOID );
UINT16 AFE_Write ( UINT8 *addr, UINT16 size );
UINT32 AFE_SetParameter ( UINT8 param, UINT32 value );
UINT32 AFE_GetParameter ( UINT8 param );
VOID AFE_PlayStart ( VOID );
VOID AFE_PlayStop ( VOID );

////////////////////////////////////////////////////////////////////////////////
#endif
