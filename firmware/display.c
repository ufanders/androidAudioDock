/*****************************************************************************
 * FileName:        display.c
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

/*****************************************************************************
 * SECTION: Includes
 *****************************************************************************/
#define DISPLAY_C
#include "display.h"

/*****************************************************************************
 * SECTION: Defines
 *****************************************************************************/
#define LINE_START              (mchpLogo_HEIGHT + 2)
#define GetLinePosition(line)   (((line) * GetTextHeight((VOID *)&fontRobotoSlab18)) + LINE_START)

UINT16 dispMsgPosition;

// *****************************************************************************
// *****************************************************************************
// Section: Functions
// *****************************************************************************
// *****************************************************************************
VOID DISPLAY_ClearLine(uint8_t line)
{
    SetColor ( WHITE );
    Bar ( 0,
          GetLinePosition ( line ),
          GetMaxX (),
          GetLinePosition ( line + 1 ) - 1 );
}
// *****************************************************************************
// VOID DISPLAY_Initialization(VOID)
// *****************************************************************************
VOID DISPLAY_Initialize ( VOID )
{
    InitGraph ();
    SetColor ( WHITE );
    ClearDevice ();
    PutImage (( GetMaxX() - mchpLogo_WIDTH ) / 2,
                0,
                (VOID *)&mchpLogo,
                IMAGE_NORMAL );

    DISPLAY_UnconnectedScreen ();
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_UnconnectedScreen(VOID)
{
    SetColor ( WHITE );
    Bar ( 0,
          GetLinePosition ( 0 ),
          GetMaxX (),
          GetMaxY ());
    SetFont ((VOID *)&fontRobotoSlab18 );
    SetColor ( BLUE );
    OutTextXY (( GetMaxX () - GetTextWidth((XCHAR *)"Universal Audio Dock", (VOID *)&fontRobotoSlab18 )) / 2,
                 GetLinePosition ( 1 ),
                 (XCHAR *)"Universal Audio Dock");
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_Command ( DISPLAY_CMD cmd )
{
    SetFont ((VOID *)&fontArimo14 );
    SetColor ( BLUE );

    switch ( cmd )
    {
        case DISPLAY_CMD_ATTACHED:
            OutTextXY ( DISPLAY_EDGE_MARGIN, GetLinePosition ( 2 ), DISPLAY_STR_ANDROID_DEVICE );
            dispMsgPosition = DISPLAY_EDGE_MARGIN + GetTextWidth ((XCHAR*) DISPLAY_STR_ANDROID_DEVICE, (VOID*) &fontArimo14 ) + DISPLAY_MESSAGE_CLEARANCE;
            DISPLAY_Message ( "Attached" );
            break;
        case DISPLAY_CMD_CONNECTED:
            DISPLAY_Message ( "Connected" );
            DISPLAY_StreamStatus ();
            DISPLAY_Controls ();
            break;
        case DISPLAY_CMD_DETACHED:
            DISPLAY_UnconnectedScreen ();
            break;
    }
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_StreamStatus ( VOID )
{
    DISPLAY_ClearLine ( 3 );

    SetFont ((VOID *) &fontArimo14 );
    SetColor ( GRAY128 );

    MoveTo ( DISPLAY_EDGE_MARGIN, GetLinePosition ( 3 ));
    DISPLAY_PrintInteger ( AFE_GetParameter ( AFE_PARAM_SAMPLE_RATE ), 6, FALSE );
    OutText ( " Hz / " );
    DISPLAY_PrintInteger ( AFE_GetParameter ( AFE_PARAM_SAMPLE_RESOLUTION ), 2, FALSE );
    OutText ( " bit" );
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_Controls ( VOID )
{
    DISPLAY_Button ( DISPLAY_CTRL_BUTTON_LEFT, GetMaxY () - DISPLAY_CTRL_BUTTON_HEIGHT + 1, &glyphReverse );
    DISPLAY_Button ( GetMaxX () / 2, GetMaxY () - DISPLAY_CTRL_BUTTON_HEIGHT + 1, &glyphPlayPause );
    DISPLAY_Button ( GetMaxX () - DISPLAY_CTRL_BUTTON_LEFT, GetMaxY () - DISPLAY_CTRL_BUTTON_HEIGHT + 1, &glyphForward );
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_Button ( UINT16 leftCenter, UINT16 top, const VOID *glyph )
{
    SetColor ( BLACK );
    Bar ( leftCenter - DISPLAY_CTRL_BUTTON_WIDTH / 2, top, leftCenter + DISPLAY_CTRL_BUTTON_WIDTH / 2, top + DISPLAY_CTRL_BUTTON_HEIGHT );
    SetColor ( WHITE );
    Bar ( leftCenter - DISPLAY_CTRL_BUTTON_WIDTH / 2 + 1, top + 1, leftCenter + DISPLAY_CTRL_BUTTON_WIDTH / 2 - 1, top + DISPLAY_CTRL_BUTTON_HEIGHT - 1 );
    PutImage ( leftCenter - GetImageWidth ((VOID*) glyph ) / 2, top + 3, (VOID*) glyph, IMAGE_NORMAL );
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_Message ( char* str )
{
    UINT16 msgPos;

    msgPos = GetMaxX() - GetTextWidth ((XCHAR*) str, (VOID*) &fontArimo14 ) - DISPLAY_EDGE_MARGIN;
    if ( msgPos < dispMsgPosition )
    {
        msgPos = dispMsgPosition;
    }

    SetColor ( WHITE );
    Bar ( dispMsgPosition,
          GetLinePosition ( 2 ),
          GetMaxX (),
          GetLinePosition ( 3 ) - 1 );

    SetFont ((VOID *) &fontArimo14 );
    SetColor ( BLACK );
    OutTextXY ( msgPos, GetLinePosition ( 2 ), str );
}
////////////////////////////////////////////////////////////////////////////////
VOID DISPLAY_PrintInteger ( INT32 val, UINT8 digits, BOOL zero )
{
    INT32 base, dig;
    UINT8 i;

    if ( val < 0 )
    {
        OutChar ( '-' );
        val = -val;
    }

    base = 1;
    for ( i = 0; i < digits - 1; i ++ )
    {
        base *= 10;
    }

    dig = val / base;

    if ( dig > 9 )
    {
        for ( i = 0; i < digits; i ++ )
        {
            OutChar ( '9' );
        }
    }
    else
    {
        for ( i = 0; i < digits; i ++ )
        {
            dig = val / base;
            val -= dig * base;
            base /= 10;
            if ( dig != 0 )
            {
                zero = TRUE;
            }

            if (( zero == TRUE ) || ( i == digits - 1 ))
            {
                OutChar ( dig + '0' );
            }
        }
    }
}
////////////////////////////////////////////////////////////////////////////////
