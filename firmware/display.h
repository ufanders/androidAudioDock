/*****************************************************************************
 * FileName:        display.h
 * Dependencies:    See Includes Section
 * Processor:       PIC24, PIC32
 * Compiler:       	MPLAB C30 V3.00, MPLAB C32
 * Linker:          MPLAB LINK30, MPLAB LINK32
 * Company:         Microchip Technology Incorporated
 *
 *
 * Copyright � 2012 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).  
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS� WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *****************************************************************************/
#ifndef DISPLAY_H
#define DISPLAY_H
////////////////////////////////////////////////////////////////////////////////
#include "system.h"
#include <stdint.h>
#include "Graphics/Graphics.h"
#include "display_resources.h"
#include "afe.h"
////////////////////////////////////////////////////////////////////////////////

#define DISPLAY_EDGE_MARGIN             4
#define DISPLAY_MESSAGE_CLEARANCE       10

#define DISPLAY_CTRL_BUTTON_HEIGHT      13
#define DISPLAY_CTRL_BUTTON_WIDTH       22
#define DISPLAY_CTRL_BUTTON_LEFT        20

#define DISPLAY_STR_ANDROID_DEVICE      "Android Device"

typedef enum
{
    DISPLAY_CMD_ATTACHED,
    DISPLAY_CMD_CONNECTED,
    DISPLAY_CMD_DETACHED
}
DISPLAY_CMD;

VOID DISPLAY_Initialize(VOID);
VOID DISPLAY_UnconnectedScreen(VOID);
VOID DISPLAY_ConnectedScreen(VOID);
VOID DISPLAY_Controls ( VOID );
VOID DISPLAY_Button ( UINT16 left, UINT16 top, const VOID *glyph );

VOID DISPLAY_Message(char* str);
VOID DISPLAY_StreamStatus ();
VOID DISPLAY_Command ( DISPLAY_CMD connStatus );
VOID DISPLAY_PrintInteger ( INT32 val, UINT8 digits, BOOL zero );

////////////////////////////////////////////////////////////////////////////////
#endif

