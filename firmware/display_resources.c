/*****************************************************************************
 * FileName:        display_resources.c
 * Processor:       PIC32MX
 * Compiler:        MPLAB C32/XC32 (see release notes for tested revision)
 * Linker:          MPLAB LINK32/XC32
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright(c) 2012 Microchip Technology Inc.  All rights reserved.
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
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.29.06
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include "system.h"
#include "Graphics/Graphics.h"

/*****************************************************************************
 * SECTION:  Graphics Library Firmware Check
 *****************************************************************************/
#if(GRAPHICS_LIBRARY_VERSION != 0x0306)
#warning "It is suggested to use Graphics Library version 3.06 with this version of GRC."
#endif

/*****************************************************************************
 * SECTION:  Graphics Bitmap Padding Check
 *****************************************************************************/
#ifdef USE_BITMAP_NO_PADDING_LINE
#error These bitmap resources have been converted with padding of the horizontal lines, but USE_BITMAP_NO_PADDING_LINE is defined in GraphicsConfig.h.
#endif

/*****************************************************************************
 * Converted Resources
 * -------------------
 *
 * Bitmaps
 * -------
 * mchpLogo - 152x40 pixels, 4-bits per pixel
 *
 * Fonts
 * -----
 * RobotoSlab_Regular_18 - Height: 24 pixels, 1 bit per pixel, Range: ' ' to '~'
 * Arimo_Regular_12 - Height: 15 pixels, 1 bit per pixel, Range: ' ' to '~'
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * TTF Font File Structure
 * Label: Arimo_Regular_14
 * Description:  Height: 17 pixels, 1 bit per pixel, Range: ' ' to '~'
 ***********************************/

extern GFX_FONT_SPACE char _fontArimo14[] __attribute__((aligned(2)));

const FONT_FLASH fontArimo14 =
{
    (FLASH | COMP_NONE),
    (GFX_FONT_SPACE char *)_fontArimo14
};

const char _fontArimo14[] __attribute__((aligned(2))) =
{
/****************************************
 * Font header
 ****************************************/
    0x00,           // Font ID
    0x00,           // Font information:  1 bit per pixel, Characters zero degress rotation
    0x20, 0x00,     // First Character
    0x7E, 0x00,     // Last Character
    0x11, 0x00,     // Height
/****************************************
 * Font Glyph Table
 ****************************************/
    0x04,              // width of the glyph
    0x84, 0x01, 0x00,       // Character - 32, offset (0x00000184)
    0x05,              // width of the glyph
    0x95, 0x01, 0x00,       // Character - 33, offset (0x00000195)
    0x05,              // width of the glyph
    0xA6, 0x01, 0x00,       // Character - 34, offset (0x000001A6)
    0x08,              // width of the glyph
    0xB7, 0x01, 0x00,       // Character - 35, offset (0x000001B7)
    0x08,              // width of the glyph
    0xC8, 0x01, 0x00,       // Character - 36, offset (0x000001C8)
    0x0C,              // width of the glyph
    0xD9, 0x01, 0x00,       // Character - 37, offset (0x000001D9)
    0x09,              // width of the glyph
    0xFB, 0x01, 0x00,       // Character - 38, offset (0x000001FB)
    0x03,              // width of the glyph
    0x1D, 0x02, 0x00,       // Character - 39, offset (0x0000021D)
    0x05,              // width of the glyph
    0x2E, 0x02, 0x00,       // Character - 40, offset (0x0000022E)
    0x05,              // width of the glyph
    0x3F, 0x02, 0x00,       // Character - 41, offset (0x0000023F)
    0x05,              // width of the glyph
    0x50, 0x02, 0x00,       // Character - 42, offset (0x00000250)
    0x08,              // width of the glyph
    0x61, 0x02, 0x00,       // Character - 43, offset (0x00000261)
    0x04,              // width of the glyph
    0x72, 0x02, 0x00,       // Character - 44, offset (0x00000272)
    0x05,              // width of the glyph
    0x83, 0x02, 0x00,       // Character - 45, offset (0x00000283)
    0x04,              // width of the glyph
    0x94, 0x02, 0x00,       // Character - 46, offset (0x00000294)
    0x04,              // width of the glyph
    0xA5, 0x02, 0x00,       // Character - 47, offset (0x000002A5)
    0x08,              // width of the glyph
    0xB6, 0x02, 0x00,       // Character - 48, offset (0x000002B6)
    0x08,              // width of the glyph
    0xC7, 0x02, 0x00,       // Character - 49, offset (0x000002C7)
    0x08,              // width of the glyph
    0xD8, 0x02, 0x00,       // Character - 50, offset (0x000002D8)
    0x08,              // width of the glyph
    0xE9, 0x02, 0x00,       // Character - 51, offset (0x000002E9)
    0x08,              // width of the glyph
    0xFA, 0x02, 0x00,       // Character - 52, offset (0x000002FA)
    0x08,              // width of the glyph
    0x0B, 0x03, 0x00,       // Character - 53, offset (0x0000030B)
    0x08,              // width of the glyph
    0x1C, 0x03, 0x00,       // Character - 54, offset (0x0000031C)
    0x08,              // width of the glyph
    0x2D, 0x03, 0x00,       // Character - 55, offset (0x0000032D)
    0x08,              // width of the glyph
    0x3E, 0x03, 0x00,       // Character - 56, offset (0x0000033E)
    0x08,              // width of the glyph
    0x4F, 0x03, 0x00,       // Character - 57, offset (0x0000034F)
    0x04,              // width of the glyph
    0x60, 0x03, 0x00,       // Character - 58, offset (0x00000360)
    0x04,              // width of the glyph
    0x71, 0x03, 0x00,       // Character - 59, offset (0x00000371)
    0x08,              // width of the glyph
    0x82, 0x03, 0x00,       // Character - 60, offset (0x00000382)
    0x08,              // width of the glyph
    0x93, 0x03, 0x00,       // Character - 61, offset (0x00000393)
    0x08,              // width of the glyph
    0xA4, 0x03, 0x00,       // Character - 62, offset (0x000003A4)
    0x08,              // width of the glyph
    0xB5, 0x03, 0x00,       // Character - 63, offset (0x000003B5)
    0x0E,              // width of the glyph
    0xC6, 0x03, 0x00,       // Character - 64, offset (0x000003C6)
    0x09,              // width of the glyph
    0xE8, 0x03, 0x00,       // Character - 65, offset (0x000003E8)
    0x09,              // width of the glyph
    0x0A, 0x04, 0x00,       // Character - 66, offset (0x0000040A)
    0x0A,              // width of the glyph
    0x2C, 0x04, 0x00,       // Character - 67, offset (0x0000042C)
    0x0A,              // width of the glyph
    0x4E, 0x04, 0x00,       // Character - 68, offset (0x0000044E)
    0x09,              // width of the glyph
    0x70, 0x04, 0x00,       // Character - 69, offset (0x00000470)
    0x09,              // width of the glyph
    0x92, 0x04, 0x00,       // Character - 70, offset (0x00000492)
    0x0B,              // width of the glyph
    0xB4, 0x04, 0x00,       // Character - 71, offset (0x000004B4)
    0x09,              // width of the glyph
    0xD6, 0x04, 0x00,       // Character - 72, offset (0x000004D6)
    0x03,              // width of the glyph
    0xF8, 0x04, 0x00,       // Character - 73, offset (0x000004F8)
    0x06,              // width of the glyph
    0x09, 0x05, 0x00,       // Character - 74, offset (0x00000509)
    0x09,              // width of the glyph
    0x1A, 0x05, 0x00,       // Character - 75, offset (0x0000051A)
    0x08,              // width of the glyph
    0x3C, 0x05, 0x00,       // Character - 76, offset (0x0000053C)
    0x0B,              // width of the glyph
    0x4D, 0x05, 0x00,       // Character - 77, offset (0x0000054D)
    0x09,              // width of the glyph
    0x6F, 0x05, 0x00,       // Character - 78, offset (0x0000056F)
    0x0B,              // width of the glyph
    0x91, 0x05, 0x00,       // Character - 79, offset (0x00000591)
    0x09,              // width of the glyph
    0xB3, 0x05, 0x00,       // Character - 80, offset (0x000005B3)
    0x0B,              // width of the glyph
    0xD5, 0x05, 0x00,       // Character - 81, offset (0x000005D5)
    0x0A,              // width of the glyph
    0xF7, 0x05, 0x00,       // Character - 82, offset (0x000005F7)
    0x09,              // width of the glyph
    0x19, 0x06, 0x00,       // Character - 83, offset (0x00000619)
    0x09,              // width of the glyph
    0x3B, 0x06, 0x00,       // Character - 84, offset (0x0000063B)
    0x09,              // width of the glyph
    0x5D, 0x06, 0x00,       // Character - 85, offset (0x0000065D)
    0x09,              // width of the glyph
    0x7F, 0x06, 0x00,       // Character - 86, offset (0x0000067F)
    0x0D,              // width of the glyph
    0xA1, 0x06, 0x00,       // Character - 87, offset (0x000006A1)
    0x08,              // width of the glyph
    0xC3, 0x06, 0x00,       // Character - 88, offset (0x000006C3)
    0x09,              // width of the glyph
    0xD4, 0x06, 0x00,       // Character - 89, offset (0x000006D4)
    0x08,              // width of the glyph
    0xF6, 0x06, 0x00,       // Character - 90, offset (0x000006F6)
    0x04,              // width of the glyph
    0x07, 0x07, 0x00,       // Character - 91, offset (0x00000707)
    0x04,              // width of the glyph
    0x18, 0x07, 0x00,       // Character - 92, offset (0x00000718)
    0x04,              // width of the glyph
    0x29, 0x07, 0x00,       // Character - 93, offset (0x00000729)
    0x05,              // width of the glyph
    0x3A, 0x07, 0x00,       // Character - 94, offset (0x0000073A)
    0x08,              // width of the glyph
    0x4B, 0x07, 0x00,       // Character - 95, offset (0x0000074B)
    0x05,              // width of the glyph
    0x5C, 0x07, 0x00,       // Character - 96, offset (0x0000075C)
    0x08,              // width of the glyph
    0x6D, 0x07, 0x00,       // Character - 97, offset (0x0000076D)
    0x08,              // width of the glyph
    0x7E, 0x07, 0x00,       // Character - 98, offset (0x0000077E)
    0x07,              // width of the glyph
    0x8F, 0x07, 0x00,       // Character - 99, offset (0x0000078F)
    0x08,              // width of the glyph
    0xA0, 0x07, 0x00,       // Character - 100, offset (0x000007A0)
    0x08,              // width of the glyph
    0xB1, 0x07, 0x00,       // Character - 101, offset (0x000007B1)
    0x04,              // width of the glyph
    0xC2, 0x07, 0x00,       // Character - 102, offset (0x000007C2)
    0x08,              // width of the glyph
    0xD3, 0x07, 0x00,       // Character - 103, offset (0x000007D3)
    0x08,              // width of the glyph
    0xE4, 0x07, 0x00,       // Character - 104, offset (0x000007E4)
    0x03,              // width of the glyph
    0xF5, 0x07, 0x00,       // Character - 105, offset (0x000007F5)
    0x03,              // width of the glyph
    0x06, 0x08, 0x00,       // Character - 106, offset (0x00000806)
    0x07,              // width of the glyph
    0x17, 0x08, 0x00,       // Character - 107, offset (0x00000817)
    0x03,              // width of the glyph
    0x28, 0x08, 0x00,       // Character - 108, offset (0x00000828)
    0x0B,              // width of the glyph
    0x39, 0x08, 0x00,       // Character - 109, offset (0x00000839)
    0x08,              // width of the glyph
    0x5B, 0x08, 0x00,       // Character - 110, offset (0x0000085B)
    0x08,              // width of the glyph
    0x6C, 0x08, 0x00,       // Character - 111, offset (0x0000086C)
    0x08,              // width of the glyph
    0x7D, 0x08, 0x00,       // Character - 112, offset (0x0000087D)
    0x08,              // width of the glyph
    0x8E, 0x08, 0x00,       // Character - 113, offset (0x0000088E)
    0x05,              // width of the glyph
    0x9F, 0x08, 0x00,       // Character - 114, offset (0x0000089F)
    0x07,              // width of the glyph
    0xB0, 0x08, 0x00,       // Character - 115, offset (0x000008B0)
    0x04,              // width of the glyph
    0xC1, 0x08, 0x00,       // Character - 116, offset (0x000008C1)
    0x08,              // width of the glyph
    0xD2, 0x08, 0x00,       // Character - 117, offset (0x000008D2)
    0x07,              // width of the glyph
    0xE3, 0x08, 0x00,       // Character - 118, offset (0x000008E3)
    0x09,              // width of the glyph
    0xF4, 0x08, 0x00,       // Character - 119, offset (0x000008F4)
    0x06,              // width of the glyph
    0x16, 0x09, 0x00,       // Character - 120, offset (0x00000916)
    0x07,              // width of the glyph
    0x27, 0x09, 0x00,       // Character - 121, offset (0x00000927)
    0x06,              // width of the glyph
    0x38, 0x09, 0x00,       // Character - 122, offset (0x00000938)
    0x05,              // width of the glyph
    0x49, 0x09, 0x00,       // Character - 123, offset (0x00000949)
    0x03,              // width of the glyph
    0x5A, 0x09, 0x00,       // Character - 124, offset (0x0000095A)
    0x05,              // width of the glyph
    0x6B, 0x09, 0x00,       // Character - 125, offset (0x0000096B)
    0x08,              // width of the glyph
    0x7C, 0x09, 0x00,       // Character - 126, offset (0x0000097C)
/***********************************
 * Font Characters
 ***********************************/
/***********************************
 * Character - 32
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 33
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x00,         //
    0x00,         //
    0x04,         //   *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 34
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x0A,         //  * *
    0x0A,         //  * *
    0x0A,         //  * *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 35
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x48,         //    *  *
    0x48,         //    *  *
    0x44,         //   *   *
    0xFF,         // ********
    0x24,         //   *  *
    0x24,         //   *  *
    0xFF,         // ********
    0x22,         //  *   *
    0x12,         //  *  *
    0x12,         //  *  *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 36
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x52,         //  *  * *
    0x12,         //  *  *
    0x12,         //  *  *
    0x1C,         //   ***
    0x70,         //     ***
    0xD0,         //     * **
    0x90,         //     *  *
    0x53,         // **  * *
    0x3E,         //  *****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 37
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x0E, 0x01,         //  ***    *
    0x0A, 0x01,         //  * *    *
    0x92, 0x00,         //  *  *  *
    0x52, 0x00,         //  *  * *
    0x4A, 0x07,         //  * *  * ***
    0x2E, 0x05,         //  *** *  * *
    0xA0, 0x04,         //      * *  *
    0x90, 0x04,         //     *  *  *
    0x08, 0x05,         //    *    * *
    0x08, 0x07,         //    *    ***
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 38
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x38, 0x00,         //    ***
    0x44, 0x00,         //   *   *
    0x44, 0x00,         //   *   *
    0x3C, 0x00,         //   ****
    0x1C, 0x00,         //   ***
    0x8E, 0x00,         //  ***   *
    0x92, 0x00,         //  *  *  *
    0x63, 0x00,         // **   **
    0x62, 0x00,         //  *   **
    0xDC, 0x01,         //   *** ***
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 39
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 40
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x08,         //    *
    0x0C,         //   **
    0x04,         //   *
    0x06,         //  **
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x06,         //  **
    0x04,         //   *
    0x0C,         //   **
    0x08,         //    *

/***********************************
 * Character - 41
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x06,         //  **
    0x04,         //   *
    0x0C,         //   **
    0x08,         //    *
    0x08,         //    *
    0x08,         //    *
    0x08,         //    *
    0x08,         //    *
    0x0C,         //   **
    0x04,         //   *
    0x06,         //  **
    0x02,         //  *

/***********************************
 * Character - 42
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x04,         //   *
    0x15,         // * * *
    0x0E,         //  ***
    0x0A,         //  * *
    0x0A,         //  * *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 43
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x18,         //    **
    0x18,         //    **
    0x18,         //    **
    0x7E,         //  ******
    0x18,         //    **
    0x18,         //    **
    0x18,         //    **
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 44
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x04,         //   *
    0x02,         //  *
    0x00,         //

/***********************************
 * Character - 45
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x0E,         //  ***
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 46
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 47
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x08,         //    *
    0x0C,         //   **
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x03,         // **
    0x01,         // *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 48
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x66,         //  **  **
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x66,         //  **  **
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 49
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x18,         //    **
    0x14,         //   * *
    0x12,         //  *  *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x7E,         //  ******
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 50
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x66,         //  **  **
    0x42,         //  *    *
    0x40,         //       *
    0x20,         //      *
    0x30,         //     **
    0x08,         //    *
    0x04,         //   *
    0x02,         //  *
    0x7E,         //  ******
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 51
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x62,         //  *   **
    0x42,         //  *    *
    0x60,         //      **
    0x18,         //    **
    0x60,         //      **
    0x40,         //       *
    0x42,         //  *    *
    0x42,         //  *    *
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 52
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x20,         //      *
    0x30,         //     **
    0x28,         //    * *
    0x28,         //    * *
    0x24,         //   *  *
    0x22,         //  *   *
    0x22,         //  *   *
    0xFF,         // ********
    0x20,         //      *
    0x20,         //      *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 53
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x7E,         //  ******
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x3E,         //  *****
    0x42,         //  *    *
    0x40,         //       *
    0x40,         //       *
    0x62,         //  *   **
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 54
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x38,         //    ***
    0x44,         //   *   *
    0x02,         //  *
    0x02,         //  *
    0x3A,         //  * ***
    0x46,         //  **   *
    0x42,         //  *    *
    0x42,         //  *    *
    0x46,         //  **   *
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 55
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x7E,         //  ******
    0x40,         //       *
    0x20,         //      *
    0x20,         //      *
    0x10,         //     *
    0x10,         //     *
    0x08,         //    *
    0x08,         //    *
    0x08,         //    *
    0x08,         //    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 56
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x42,         //  *    *
    0x42,         //  *    *
    0x46,         //  **   *
    0x38,         //    ***
    0x46,         //  **   *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 57
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x66,         //  **  **
    0x42,         //  *    *
    0x42,         //  *    *
    0x66,         //  **  **
    0x5C,         //   *** *
    0x40,         //       *
    0x40,         //       *
    0x22,         //  *   *
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 58
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 59
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x04,         //   *
    0x02,         //  *
    0x00,         //

/***********************************
 * Character - 60
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x40,         //       *
    0x30,         //     **
    0x0E,         //  ***
    0x02,         //  *
    0x0E,         //  ***
    0x30,         //     **
    0x40,         //       *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 61
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x7E,         //  ******
    0x00,         //
    0x00,         //
    0x7E,         //  ******
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 62
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x0C,         //   **
    0x70,         //     ***
    0x40,         //       *
    0x70,         //     ***
    0x0C,         //   **
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 63
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x46,         //  **   *
    0x42,         //  *    *
    0x40,         //       *
    0x60,         //      **
    0x10,         //     *
    0x08,         //    *
    0x00,         //
    0x00,         //
    0x08,         //    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 64
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xE0, 0x03,         //      *****
    0x18, 0x0C,         //    **     **
    0x0C, 0x08,         //   **       *
    0xE4, 0x12,         //   *  *** *  *
    0x32, 0x13,         //  *  **  **  *
    0x12, 0x12,         //  *  *    *  *
    0x12, 0x11,         //  *  *   *   *
    0x92, 0x09,         //  *  *  **  *
    0x72, 0x06,         //  *  ***  **
    0x04, 0x00,         //   *
    0x0C, 0x06,         //   **     **
    0xF0, 0x01,         //     *****
    0x00, 0x00,         //

/***********************************
 * Character - 65
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x10, 0x00,         //     *
    0x28, 0x00,         //    * *
    0x28, 0x00,         //    * *
    0x6C, 0x00,         //   ** **
    0x44, 0x00,         //   *   *
    0x44, 0x00,         //   *   *
    0xFE, 0x00,         //  *******
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x83, 0x01,         // **     **
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 66
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x7E, 0x00,         //  ******
    0xC2, 0x00,         //  *    **
    0xC2, 0x00,         //  *    **
    0x42, 0x00,         //  *    *
    0x3E, 0x00,         //  *****
    0xC2, 0x00,         //  *    **
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0xC2, 0x00,         //  *    **
    0x7E, 0x00,         //  ******
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 67
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xF8, 0x00,         //    *****
    0x8C, 0x01,         //   **   **
    0x06, 0x01,         //  **     *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x06, 0x01,         //  **     *
    0x8C, 0x01,         //   **   **
    0xF8, 0x00,         //    *****
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 68
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x7E, 0x00,         //  ******
    0xC2, 0x00,         //  *    **
    0x82, 0x01,         //  *     **
    0x02, 0x01,         //  *      *
    0x02, 0x01,         //  *      *
    0x02, 0x01,         //  *      *
    0x02, 0x01,         //  *      *
    0x82, 0x01,         //  *     **
    0xC2, 0x00,         //  *    **
    0x7E, 0x00,         //  ******
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 69
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xFE, 0x00,         //  *******
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0xFE, 0x00,         //  *******
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0xFE, 0x00,         //  *******
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 70
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xFE, 0x00,         //  *******
    0x06, 0x00,         //  **
    0x06, 0x00,         //  **
    0x06, 0x00,         //  **
    0xFE, 0x00,         //  *******
    0x06, 0x00,         //  **
    0x06, 0x00,         //  **
    0x06, 0x00,         //  **
    0x06, 0x00,         //  **
    0x06, 0x00,         //  **
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 71
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xF8, 0x00,         //    *****
    0x8C, 0x01,         //   **   **
    0x06, 0x03,         //  **     **
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0xC2, 0x03,         //  *    ****
    0x02, 0x02,         //  *       *
    0x06, 0x02,         //  **      *
    0x0C, 0x03,         //   **    **
    0xF8, 0x00,         //    *****
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 72
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0xFE, 0x00,         //  *******
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 73
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 74
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x1C,         //   ***
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x10,         //     *
    0x13,         // **  *
    0x1A,         //  * **
    0x0E,         //  ***
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 75
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xC2, 0x00,         //  *    **
    0x62, 0x00,         //  *   **
    0x22, 0x00,         //  *   *
    0x12, 0x00,         //  *  *
    0x0A, 0x00,         //  * *
    0x16, 0x00,         //  ** *
    0x22, 0x00,         //  *   *
    0x62, 0x00,         //  *   **
    0xC2, 0x00,         //  *    **
    0x82, 0x00,         //  *     *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 76
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0xFE,         //  *******
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 77
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x06, 0x03,         //  **     **
    0x06, 0x03,         //  **     **
    0x8A, 0x02,         //  * *   * *
    0x8A, 0x02,         //  * *   * *
    0x8A, 0x02,         //  * *   * *
    0x52, 0x02,         //  *  * *  *
    0x52, 0x02,         //  *  * *  *
    0x52, 0x02,         //  *  * *  *
    0x22, 0x02,         //  *   *   *
    0x22, 0x02,         //  *   *   *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 78
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x86, 0x00,         //  **    *
    0x86, 0x00,         //  **    *
    0x8A, 0x00,         //  * *   *
    0x8A, 0x00,         //  * *   *
    0x92, 0x00,         //  *  *  *
    0x92, 0x00,         //  *  *  *
    0xA2, 0x00,         //  *   * *
    0xA2, 0x00,         //  *   * *
    0xC2, 0x00,         //  *    **
    0xC2, 0x00,         //  *    **
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 79
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xF8, 0x00,         //    *****
    0x8C, 0x01,         //   **   **
    0x06, 0x03,         //  **     **
    0x02, 0x02,         //  *       *
    0x02, 0x02,         //  *       *
    0x02, 0x02,         //  *       *
    0x02, 0x02,         //  *       *
    0x06, 0x03,         //  **     **
    0x8C, 0x01,         //   **   **
    0xF8, 0x00,         //    *****
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 80
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x7E, 0x00,         //  ******
    0xC2, 0x00,         //  *    **
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0xC2, 0x00,         //  *    **
    0x7E, 0x00,         //  ******
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x02, 0x00,         //  *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 81
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xF8, 0x00,         //    *****
    0x8C, 0x01,         //   **   **
    0x06, 0x03,         //  **     **
    0x02, 0x02,         //  *       *
    0x02, 0x02,         //  *       *
    0x02, 0x02,         //  *       *
    0x02, 0x02,         //  *       *
    0x06, 0x03,         //  **     **
    0x8C, 0x01,         //   **   **
    0xF8, 0x00,         //    *****
    0x60, 0x00,         //      **
    0x40, 0x00,         //       *
    0xC0, 0x01,         //       ***

/***********************************
 * Character - 82
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xFE, 0x00,         //  *******
    0x82, 0x01,         //  *     **
    0x02, 0x01,         //  *      *
    0x02, 0x01,         //  *      *
    0x82, 0x01,         //  *     **
    0xFE, 0x00,         //  *******
    0x42, 0x00,         //  *    *
    0xC2, 0x00,         //  *    **
    0x82, 0x00,         //  *     *
    0x02, 0x01,         //  *      *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 83
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x7C, 0x00,         //   *****
    0xC6, 0x00,         //  **   **
    0x02, 0x00,         //  *
    0x06, 0x00,         //  **
    0x3C, 0x00,         //   ****
    0xE0, 0x00,         //      ***
    0x80, 0x00,         //        *
    0x80, 0x00,         //        *
    0xC2, 0x00,         //  *    **
    0x7C, 0x00,         //   *****
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 84
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xFF, 0x01,         // *********
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 85
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0x44, 0x00,         //   *   *
    0x38, 0x00,         //    ***
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 86
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x83, 0x01,         // **     **
    0x82, 0x00,         //  *     *
    0x82, 0x00,         //  *     *
    0xC6, 0x00,         //  **   **
    0x44, 0x00,         //   *   *
    0x44, 0x00,         //   *   *
    0x28, 0x00,         //    * *
    0x28, 0x00,         //    * *
    0x28, 0x00,         //    * *
    0x10, 0x00,         //     *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 87
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x43, 0x18,         // **    *    **
    0xE3, 0x18,         // **   ***   **
    0xA2, 0x08,         //  *   * *   *
    0xA2, 0x08,         //  *   * *   *
    0xA6, 0x0C,         //  **  * *  **
    0xB4, 0x05,         //   * ** ** *
    0x14, 0x05,         //   * *   * *
    0x14, 0x05,         //   * *   * *
    0x1C, 0x07,         //   ***   ***
    0x18, 0x03,         //    **   **
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 88
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x42,         //  *    *
    0x66,         //  **  **
    0x24,         //   *  *
    0x18,         //    **
    0x18,         //    **
    0x18,         //    **
    0x3C,         //   ****
    0x24,         //   *  *
    0x46,         //  **   *
    0x42,         //  *    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 89
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x83, 0x01,         // **     **
    0x82, 0x00,         //  *     *
    0x44, 0x00,         //   *   *
    0x6C, 0x00,         //   ** **
    0x28, 0x00,         //    * *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x10, 0x00,         //     *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 90
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x7E,         //  ******
    0x60,         //      **
    0x20,         //      *
    0x30,         //     **
    0x18,         //    **
    0x08,         //    *
    0x0C,         //   **
    0x06,         //  **
    0x02,         //  *
    0xFF,         // ********
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 91
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x0E,         //  ***
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x0E,         //  ***

/***********************************
 * Character - 92
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x01,         // *
    0x03,         // **
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x0C,         //   **
    0x08,         //    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 93
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x07,         // ***
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x07,         // ***

/***********************************
 * Character - 94
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x04,         //   *
    0x0A,         //  * *
    0x0A,         //  * *
    0x0A,         //  * *
    0x11,         // *   *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 95
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0xFF,         // ********

/***********************************
 * Character - 96
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x06,         //  **
    0x08,         //    *
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 97
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x62,         //  *   **
    0x40,         //       *
    0x7C,         //   *****
    0x42,         //  *    *
    0x62,         //  *   **
    0xDE,         //  **** **
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 98
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x3A,         //  * ***
    0x46,         //  **   *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x46,         //  **   *
    0x3A,         //  * ***
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 99
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x22,         //  *   *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x62,         //  *   **
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 100
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x40,         //       *
    0x40,         //       *
    0x40,         //       *
    0x5C,         //   *** *
    0x62,         //  *   **
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x62,         //  *   **
    0x5C,         //   *** *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 101
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x66,         //  **  **
    0x42,         //  *    *
    0x7E,         //  ******
    0x02,         //  *
    0x42,         //  *    *
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 102
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x0C,         //   **
    0x06,         //  **
    0x06,         //  **
    0x0F,         // ****
    0x06,         //  **
    0x06,         //  **
    0x06,         //  **
    0x06,         //  **
    0x06,         //  **
    0x06,         //  **
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 103
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x5C,         //   *** *
    0x62,         //  *   **
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x62,         //  *   **
    0x5C,         //   *** *
    0x40,         //       *
    0x62,         //  *   **
    0x3C,         //   ****

/***********************************
 * Character - 104
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x3A,         //  * ***
    0x46,         //  **   *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 105
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 106
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x03,         // **

/***********************************
 * Character - 107
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x22,         //  *   *
    0x12,         //  *  *
    0x0A,         //  * *
    0x0E,         //  ***
    0x12,         //  *  *
    0x32,         //  *  **
    0x62,         //  *   **
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 108
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 109
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0xBA, 0x03,         //  * *** ***
    0x66, 0x02,         //  **  **  *
    0x22, 0x02,         //  *   *   *
    0x22, 0x02,         //  *   *   *
    0x22, 0x02,         //  *   *   *
    0x22, 0x02,         //  *   *   *
    0x22, 0x02,         //  *   *   *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 110
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3A,         //  * ***
    0x46,         //  **   *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 111
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3C,         //   ****
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x66,         //  **  **
    0x3C,         //   ****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 112
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3A,         //  * ***
    0x46,         //  **   *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x46,         //  **   *
    0x3A,         //  * ***
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *

/***********************************
 * Character - 113
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x5C,         //   *** *
    0x62,         //  *   **
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x62,         //  *   **
    0x5C,         //   *** *
    0x40,         //       *
    0x40,         //       *
    0x40,         //       *

/***********************************
 * Character - 114
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x1A,         //  * **
    0x06,         //  **
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 115
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x3E,         //  *****
    0x22,         //  *   *
    0x02,         //  *
    0x3C,         //   ****
    0x20,         //      *
    0x22,         //  *   *
    0x3E,         //  *****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 116
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x0F,         // ****
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x0E,         //  ***
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 117
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x42,         //  *    *
    0x62,         //  *   **
    0x5C,         //   *** *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 118
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x63,         // **   **
    0x22,         //  *   *
    0x22,         //  *   *
    0x36,         //  ** **
    0x14,         //   * *
    0x14,         //   * *
    0x08,         //    *
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 119
 ***********************************/
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x11, 0x01,         // *   *   *
    0xAB, 0x01,         // ** * * **
    0xAA, 0x00,         //  * * * *
    0xAA, 0x00,         //  * * * *
    0xAA, 0x00,         //  * * * *
    0xAA, 0x00,         //  * * * *
    0x44, 0x00,         //   *   *
    0x00, 0x00,         //
    0x00, 0x00,         //
    0x00, 0x00,         //

/***********************************
 * Character - 120
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x12,         //  *  *
    0x12,         //  *  *
    0x0C,         //   **
    0x0C,         //   **
    0x0C,         //   **
    0x12,         //  *  *
    0x33,         // **  **
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 121
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x63,         // **   **
    0x22,         //  *   *
    0x22,         //  *   *
    0x34,         //   * **
    0x14,         //   * *
    0x1C,         //   ***
    0x08,         //    *
    0x08,         //    *
    0x04,         //   *
    0x07,         // ***

/***********************************
 * Character - 122
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x1E,         //  ****
    0x18,         //    **
    0x08,         //    *
    0x0C,         //   **
    0x06,         //  **
    0x02,         //  *
    0x1F,         // *****
    0x00,         //
    0x00,         //
    0x00,         //

/***********************************
 * Character - 123
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x1C,         //   ***
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x06,         //  **
    0x03,         // **
    0x06,         //  **
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x1C,         //   ***

/***********************************
 * Character - 124
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *
    0x02,         //  *

/***********************************
 * Character - 125
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x07,         // ***
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x18,         //    **
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x04,         //   *
    0x07,         // ***

/***********************************
 * Character - 126
 ***********************************/
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x0E,         //  ***
    0x5A,         //  * ** *
    0x60,         //      **
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //
    0x00,         //

};


/*********************************
 * TTF Font File Structure
 * Label: RobotoSlab_Regular_18
 * Description:  Height: 24 pixels, 1 bit per pixel, Range: ' ' to '~'
 * Comment Block:
 *  
 *                                  Apache License 
 *                            Version 2.0, January 2004 
 *                         http://www.apache.org/licenses/ 
 *  
 *    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION 
 *  
 *    1. Definitions. 
 *  
 *       "License" shall mean the terms and conditions for use, reproduction, 
 *       and distribution as defined by Sections 1 through 9 of this document. 
 *  
 *       "Licensor" shall mean the copyright owner or entity authorized by 
 *       the copyright owner that is granting the License. 
 *  
 *       "Legal Entity" shall mean the union of the acting entity and all 
 *       other entities that control, are controlled by, or are under common 
 *       control with that entity. For the purposes of this definition, 
 *       "control" means (i) the power, direct or indirect, to cause the 
 *       direction or management of such entity, whether by contract or 
 *       otherwise, or (ii) ownership of fifty percent (50%) or more of the 
 *       outstanding shares, or (iii) beneficial ownership of such entity. 
 *  
 *       "You" (or "Your") shall mean an individual or Legal Entity 
 *       exercising permissions granted by this License. 
 *  
 *       "Source" form shall mean the preferred form for making modifications, 
 *       including but not limited to software source code, documentation 
 *       source, and configuration files. 
 *  
 *       "Object" form shall mean any form resulting from mechanical 
 *       transformation or translation of a Source form, including but 
 *       not limited to compiled object code, generated documentation, 
 *       and conversions to other media types. 
 *  
 *       "Work" shall mean the work of authorship, whether in Source or 
 *       Object form, made available under the License, as indicated by a 
 *       copyright notice that is included in or attached to the work 
 *       (an example is provided in the Appendix below). 
 *  
 *       "Derivative Works" shall mean any work, whether in Source or Object 
 *       form, that is based on (or derived from) the Work and for which the 
 *       editorial revisions, annotations, elaborations, or other modifications 
 *       represent, as a whole, an original work of authorship. For the purposes 
 *       of this License, Derivative Works shall not include works that remain 
 *       separable from, or merely link (or bind by name) to the interfaces of, 
 *       the Work and Derivative Works thereof. 
 *  
 *       "Contribution" shall mean any work of authorship, including 
 *       the original version of the Work and any modifications or additions 
 *       to that Work or Derivative Works thereof, that is intentionally 
 *       submitted to Licensor for inclusion in the Work by the copyright owner 
 *       or by an individual or Legal Entity authorized to submit on behalf of 
 *       the copyright owner. For the purposes of this definition, "submitted" 
 *       means any form of electronic, verbal, or written communication sent 
 *       to the Licensor or its representatives, including but not limited to 
 *       communication on electronic mailing lists, source code control systems, 
 *       and issue tracking systems that are managed by, or on behalf of, the 
 *       Licensor for the purpose of discussing and improving the Work, but 
 *       excluding communication that is conspicuously marked or otherwise 
 *       designated in writing by the copyright owner as "Not a Contribution." 
 *  
 *       "Contributor" shall mean Licensor and any individual or Legal Entity 
 *       on behalf of whom a Contribution has been received by Licensor and 
 *       subsequently incorporated within the Work. 
 *  
 *    2. Grant of Copyright License. Subject to the terms and conditions of 
 *       this License, each Contributor hereby grants to You a perpetual, 
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable 
 *       copyright license to reproduce, prepare Derivative Works of, 
 *       publicly display, publicly perform, sublicense, and distribute the 
 *       Work and such Derivative Works in Source or Object form. 
 *  
 *    3. Grant of Patent License. Subject to the terms and conditions of 
 *       this License, each Contributor hereby grants to You a perpetual, 
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable 
 *       (except as stated in this section) patent license to make, have made, 
 *       use, offer to sell, sell, import, and otherwise transfer the Work, 
 *       where such license applies only to those patent claims licensable 
 *       by such Contributor that are necessarily infringed by their 
 *       Contribution(s) alone or by combination of their Contribution(s) 
 *       with the Work to which such Contribution(s) was submitted. If You 
 *       institute patent litigation against any entity (including a 
 *       cross-claim or counterclaim in a lawsuit) alleging that the Work 
 *       or a Contribution incorporated within the Work constitutes direct 
 *       or contributory patent infringement, then any patent licenses 
 *       granted to You under this License for that Work shall terminate 
 *       as of the date such litigation is filed. 
 *  
 *    4. Redistribution. You may reproduce and distribute copies of the 
 *       Work or Derivative Works thereof in any medium, with or without 
 *       modifications, and in Source or Object form, provided that You 
 *       meet the following conditions: 
 *  
 *       (a) You must give any other recipients of the Work or 
 *           Derivative Works a copy of this License; and 
 *  
 *       (b) You must cause any modified files to carry prominent notices 
 *           stating that You changed the files; and 
 *  
 *       (c) You must retain, in the Source form of any Derivative Works 
 *           that You distribute, all copyright, patent, trademark, and 
 *           attribution notices from the Source form of the Work, 
 *           excluding those notices that do not pertain to any part of 
 *           the Derivative Works; and 
 *  
 *       (d) If the Work includes a "NOTICE" text file as part of its 
 *           distribution, then any Derivative Works that You distribute must 
 *           include a readable copy of the attribution notices contained 
 *           within such NOTICE file, excluding those notices that do not 
 *           pertain to any part of the Derivative Works, in at least one 
 *           of the following places: within a NOTICE text file distributed 
 *           as part of the Derivative Works; within the Source form or 
 *           documentation, if provided along with the Derivative Works; or, 
 *           within a display generated by the Derivative Works, if and 
 *           wherever such third-party notices normally appear. The contents 
 *           of the NOTICE file are for informational purposes only and 
 *           do not modify the License. You may add Your own attribution 
 *           notices within Derivative Works that You distribute, alongside 
 *           or as an addendum to the NOTICE text from the Work, provided 
 *           that such additional attribution notices cannot be construed 
 *           as modifying the License. 
 *  
 *       You may add Your own copyright statement to Your modifications and 
 *       may provide additional or different license terms and conditions 
 *       for use, reproduction, or distribution of Your modifications, or 
 *       for any such Derivative Works as a whole, provided Your use, 
 *       reproduction, and distribution of the Work otherwise complies with 
 *       the conditions stated in this License. 
 *  
 *    5. Submission of Contributions. Unless You explicitly state otherwise, 
 *       any Contribution intentionally submitted for inclusion in the Work 
 *       by You to the Licensor shall be under the terms and conditions of 
 *       this License, without any additional terms or conditions. 
 *       Notwithstanding the above, nothing herein shall supersede or modify 
 *       the terms of any separate license agreement you may have executed 
 *       with Licensor regarding such Contributions. 
 *  
 *    6. Trademarks. This License does not grant permission to use the trade 
 *       names, trademarks, service marks, or product names of the Licensor, 
 *       except as required for reasonable and customary use in describing the 
 *       origin of the Work and reproducing the content of the NOTICE file. 
 *  
 *    7. Disclaimer of Warranty. Unless required by applicable law or 
 *       agreed to in writing, Licensor provides the Work (and each 
 *       Contributor provides its Contributions) on an "AS IS" BASIS, 
 *       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 *       implied, including, without limitation, any warranties or conditions 
 *       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A 
 *       PARTICULAR PURPOSE. You are solely responsible for determining the 
 *       appropriateness of using or redistributing the Work and assume any 
 *       risks associated with Your exercise of permissions under this License. 
 *  
 *    8. Limitation of Liability. In no event and under no legal theory, 
 *       whether in tort (including negligence), contract, or otherwise, 
 *       unless required by applicable law (such as deliberate and grossly 
 *       negligent acts) or agreed to in writing, shall any Contributor be 
 *       liable to You for damages, including any direct, indirect, special, 
 *       incidental, or consequential damages of any character arising as a 
 *       result of this License or out of the use or inability to use the 
 *       Work (including but not limited to damages for loss of goodwill, 
 *       work stoppage, computer failure or malfunction, or any and all 
 *       other commercial damages or losses), even if such Contributor 
 *       has been advised of the possibility of such damages. 
 *  
 *    9. Accepting Warranty or Additional Liability. While redistributing 
 *       the Work or Derivative Works thereof, You may choose to offer, 
 *       and charge a fee for, acceptance of support, warranty, indemnity, 
 *       or other liability obligations and/or rights consistent with this 
 *       License. However, in accepting such obligations, You may act only 
 *       on Your own behalf and on Your sole responsibility, not on behalf 
 *       of any other Contributor, and only if You agree to indemnify, 
 *       defend, and hold each Contributor harmless for any liability 
 *       incurred by, or claims asserted against, such Contributor by reason 
 *       of your accepting any such warranty or additional liability. 
 *  
 *    END OF TERMS AND CONDITIONS 
 *  
 *    APPENDIX: How to apply the Apache License to your work. 
 *  
 *       To apply the Apache License to your work, attach the following 
 *       boilerplate notice, with the fields enclosed by brackets "[]" 
 *       replaced with your own identifying information. (Don't include 
 *       the brackets!)  The text should be enclosed in the appropriate 
 *       comment syntax for the file format. We also recommend that a 
 *       file or class name and description of purpose be included on the 
 *       same "printed page" as the copyright notice for easier 
 *       identification within third-party archives. 
 *  
 *    Copyright [yyyy] [name of copyright owner] 
 *  
 *    Licensed under the Apache License, Version 2.0 (the "License"); 
 *    you may not use this file except in compliance with the License. 
 *    You may obtain a copy of the License at 
 *  
 *        http://www.apache.org/licenses/LICENSE-2.0 
 *  
 *    Unless required by applicable law or agreed to in writing, software 
 *    distributed under the License is distributed on an "AS IS" BASIS, 
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 *    See the License for the specific language governing permissions and 
 *    limitations under the License. 
 ***********************************/

extern GFX_FONT_SPACE char _fontRobotoSlab18[] __attribute__((aligned(2)));

const FONT_FLASH fontRobotoSlab18 =
{
    (FLASH | COMP_NONE),
    (GFX_FONT_SPACE char *)_fontRobotoSlab18
};

const char _fontRobotoSlab18[] __attribute__((aligned(2))) =
{
/****************************************
 * Font header
 ****************************************/
    0x00,           // Font ID
    0x00,           // Font information:  1 bit per pixel, Characters zero degress rotation
    0x20, 0x00,     // First Character
    0x7E, 0x00,     // Last Character
    0x18, 0x00,     // Height
/****************************************
 * Font Glyph Table
 ****************************************/
    0x04,              // width of the glyph
    0x84, 0x01, 0x00,       // Character - 32, offset (0x00000184)
    0x04,              // width of the glyph
    0x9C, 0x01, 0x00,       // Character - 33, offset (0x0000019C)
    0x07,              // width of the glyph
    0xB4, 0x01, 0x00,       // Character - 34, offset (0x000001B4)
    0x0B,              // width of the glyph
    0xCC, 0x01, 0x00,       // Character - 35, offset (0x000001CC)
    0x0A,              // width of the glyph
    0xFC, 0x01, 0x00,       // Character - 36, offset (0x000001FC)
    0x0D,              // width of the glyph
    0x2C, 0x02, 0x00,       // Character - 37, offset (0x0000022C)
    0x0B,              // width of the glyph
    0x5C, 0x02, 0x00,       // Character - 38, offset (0x0000025C)
    0x04,              // width of the glyph
    0x8C, 0x02, 0x00,       // Character - 39, offset (0x0000028C)
    0x06,              // width of the glyph
    0xA4, 0x02, 0x00,       // Character - 40, offset (0x000002A4)
    0x06,              // width of the glyph
    0xBC, 0x02, 0x00,       // Character - 41, offset (0x000002BC)
    0x08,              // width of the glyph
    0xD4, 0x02, 0x00,       // Character - 42, offset (0x000002D4)
    0x0A,              // width of the glyph
    0xEC, 0x02, 0x00,       // Character - 43, offset (0x000002EC)
    0x04,              // width of the glyph
    0x1C, 0x03, 0x00,       // Character - 44, offset (0x0000031C)
    0x07,              // width of the glyph
    0x34, 0x03, 0x00,       // Character - 45, offset (0x00000334)
    0x04,              // width of the glyph
    0x4C, 0x03, 0x00,       // Character - 46, offset (0x0000034C)
    0x07,              // width of the glyph
    0x64, 0x03, 0x00,       // Character - 47, offset (0x00000364)
    0x0A,              // width of the glyph
    0x7C, 0x03, 0x00,       // Character - 48, offset (0x0000037C)
    0x07,              // width of the glyph
    0xAC, 0x03, 0x00,       // Character - 49, offset (0x000003AC)
    0x0A,              // width of the glyph
    0xC4, 0x03, 0x00,       // Character - 50, offset (0x000003C4)
    0x0A,              // width of the glyph
    0xF4, 0x03, 0x00,       // Character - 51, offset (0x000003F4)
    0x0A,              // width of the glyph
    0x24, 0x04, 0x00,       // Character - 52, offset (0x00000424)
    0x0A,              // width of the glyph
    0x54, 0x04, 0x00,       // Character - 53, offset (0x00000454)
    0x0A,              // width of the glyph
    0x84, 0x04, 0x00,       // Character - 54, offset (0x00000484)
    0x0A,              // width of the glyph
    0xB4, 0x04, 0x00,       // Character - 55, offset (0x000004B4)
    0x0A,              // width of the glyph
    0xE4, 0x04, 0x00,       // Character - 56, offset (0x000004E4)
    0x0A,              // width of the glyph
    0x14, 0x05, 0x00,       // Character - 57, offset (0x00000514)
    0x04,              // width of the glyph
    0x44, 0x05, 0x00,       // Character - 58, offset (0x00000544)
    0x04,              // width of the glyph
    0x5C, 0x05, 0x00,       // Character - 59, offset (0x0000055C)
    0x09,              // width of the glyph
    0x74, 0x05, 0x00,       // Character - 60, offset (0x00000574)
    0x0A,              // width of the glyph
    0xA4, 0x05, 0x00,       // Character - 61, offset (0x000005A4)
    0x09,              // width of the glyph
    0xD4, 0x05, 0x00,       // Character - 62, offset (0x000005D4)
    0x08,              // width of the glyph
    0x04, 0x06, 0x00,       // Character - 63, offset (0x00000604)
    0x10,              // width of the glyph
    0x1C, 0x06, 0x00,       // Character - 64, offset (0x0000061C)
    0x0D,              // width of the glyph
    0x4C, 0x06, 0x00,       // Character - 65, offset (0x0000064C)
    0x0C,              // width of the glyph
    0x7C, 0x06, 0x00,       // Character - 66, offset (0x0000067C)
    0x0C,              // width of the glyph
    0xAC, 0x06, 0x00,       // Character - 67, offset (0x000006AC)
    0x0C,              // width of the glyph
    0xDC, 0x06, 0x00,       // Character - 68, offset (0x000006DC)
    0x0B,              // width of the glyph
    0x0C, 0x07, 0x00,       // Character - 69, offset (0x0000070C)
    0x0B,              // width of the glyph
    0x3C, 0x07, 0x00,       // Character - 70, offset (0x0000073C)
    0x0C,              // width of the glyph
    0x6C, 0x07, 0x00,       // Character - 71, offset (0x0000076C)
    0x0E,              // width of the glyph
    0x9C, 0x07, 0x00,       // Character - 72, offset (0x0000079C)
    0x06,              // width of the glyph
    0xCC, 0x07, 0x00,       // Character - 73, offset (0x000007CC)
    0x0A,              // width of the glyph
    0xE4, 0x07, 0x00,       // Character - 74, offset (0x000007E4)
    0x0D,              // width of the glyph
    0x14, 0x08, 0x00,       // Character - 75, offset (0x00000814)
    0x0B,              // width of the glyph
    0x44, 0x08, 0x00,       // Character - 76, offset (0x00000844)
    0x11,              // width of the glyph
    0x74, 0x08, 0x00,       // Character - 77, offset (0x00000874)
    0x0E,              // width of the glyph
    0xBC, 0x08, 0x00,       // Character - 78, offset (0x000008BC)
    0x0D,              // width of the glyph
    0xEC, 0x08, 0x00,       // Character - 79, offset (0x000008EC)
    0x0B,              // width of the glyph
    0x1C, 0x09, 0x00,       // Character - 80, offset (0x0000091C)
    0x0D,              // width of the glyph
    0x4C, 0x09, 0x00,       // Character - 81, offset (0x0000094C)
    0x0C,              // width of the glyph
    0x7C, 0x09, 0x00,       // Character - 82, offset (0x0000097C)
    0x0B,              // width of the glyph
    0xAC, 0x09, 0x00,       // Character - 83, offset (0x000009AC)
    0x0B,              // width of the glyph
    0xDC, 0x09, 0x00,       // Character - 84, offset (0x000009DC)
    0x0E,              // width of the glyph
    0x0C, 0x0A, 0x00,       // Character - 85, offset (0x00000A0C)
    0x0D,              // width of the glyph
    0x3C, 0x0A, 0x00,       // Character - 86, offset (0x00000A3C)
    0x11,              // width of the glyph
    0x6C, 0x0A, 0x00,       // Character - 87, offset (0x00000A6C)
    0x0C,              // width of the glyph
    0xB4, 0x0A, 0x00,       // Character - 88, offset (0x00000AB4)
    0x0C,              // width of the glyph
    0xE4, 0x0A, 0x00,       // Character - 89, offset (0x00000AE4)
    0x0B,              // width of the glyph
    0x14, 0x0B, 0x00,       // Character - 90, offset (0x00000B14)
    0x05,              // width of the glyph
    0x44, 0x0B, 0x00,       // Character - 91, offset (0x00000B44)
    0x07,              // width of the glyph
    0x5C, 0x0B, 0x00,       // Character - 92, offset (0x00000B5C)
    0x05,              // width of the glyph
    0x74, 0x0B, 0x00,       // Character - 93, offset (0x00000B74)
    0x08,              // width of the glyph
    0x8C, 0x0B, 0x00,       // Character - 94, offset (0x00000B8C)
    0x0A,              // width of the glyph
    0xA4, 0x0B, 0x00,       // Character - 95, offset (0x00000BA4)
    0x05,              // width of the glyph
    0xD4, 0x0B, 0x00,       // Character - 96, offset (0x00000BD4)
    0x0A,              // width of the glyph
    0xEC, 0x0B, 0x00,       // Character - 97, offset (0x00000BEC)
    0x0A,              // width of the glyph
    0x1C, 0x0C, 0x00,       // Character - 98, offset (0x00000C1C)
    0x0A,              // width of the glyph
    0x4C, 0x0C, 0x00,       // Character - 99, offset (0x00000C4C)
    0x0B,              // width of the glyph
    0x7C, 0x0C, 0x00,       // Character - 100, offset (0x00000C7C)
    0x0A,              // width of the glyph
    0xAC, 0x0C, 0x00,       // Character - 101, offset (0x00000CAC)
    0x06,              // width of the glyph
    0xDC, 0x0C, 0x00,       // Character - 102, offset (0x00000CDC)
    0x0A,              // width of the glyph
    0xF4, 0x0C, 0x00,       // Character - 103, offset (0x00000CF4)
    0x0C,              // width of the glyph
    0x24, 0x0D, 0x00,       // Character - 104, offset (0x00000D24)
    0x06,              // width of the glyph
    0x54, 0x0D, 0x00,       // Character - 105, offset (0x00000D54)
    0x05,              // width of the glyph
    0x6C, 0x0D, 0x00,       // Character - 106, offset (0x00000D6C)
    0x0B,              // width of the glyph
    0x84, 0x0D, 0x00,       // Character - 107, offset (0x00000D84)
    0x06,              // width of the glyph
    0xB4, 0x0D, 0x00,       // Character - 108, offset (0x00000DB4)
    0x11,              // width of the glyph
    0xCC, 0x0D, 0x00,       // Character - 109, offset (0x00000DCC)
    0x0C,              // width of the glyph
    0x14, 0x0E, 0x00,       // Character - 110, offset (0x00000E14)
    0x0A,              // width of the glyph
    0x44, 0x0E, 0x00,       // Character - 111, offset (0x00000E44)
    0x0B,              // width of the glyph
    0x74, 0x0E, 0x00,       // Character - 112, offset (0x00000E74)
    0x0A,              // width of the glyph
    0xA4, 0x0E, 0x00,       // Character - 113, offset (0x00000EA4)
    0x07,              // width of the glyph
    0xD4, 0x0E, 0x00,       // Character - 114, offset (0x00000ED4)
    0x09,              // width of the glyph
    0xEC, 0x0E, 0x00,       // Character - 115, offset (0x00000EEC)
    0x07,              // width of the glyph
    0x1C, 0x0F, 0x00,       // Character - 116, offset (0x00000F1C)
    0x0B,              // width of the glyph
    0x34, 0x0F, 0x00,       // Character - 117, offset (0x00000F34)
    0x0A,              // width of the glyph
    0x64, 0x0F, 0x00,       // Character - 118, offset (0x00000F64)
    0x0F,              // width of the glyph
    0x94, 0x0F, 0x00,       // Character - 119, offset (0x00000F94)
    0x0A,              // width of the glyph
    0xC4, 0x0F, 0x00,       // Character - 120, offset (0x00000FC4)
    0x0A,              // width of the glyph
    0xF4, 0x0F, 0x00,       // Character - 121, offset (0x00000FF4)
    0x0A,              // width of the glyph
    0x24, 0x10, 0x00,       // Character - 122, offset (0x00001024)
    0x06,              // width of the glyph
    0x54, 0x10, 0x00,       // Character - 123, offset (0x00001054)
    0x04,              // width of the glyph
    0x6C, 0x10, 0x00,       // Character - 124, offset (0x0000106C)
    0x06,              // width of the glyph
    0x84, 0x10, 0x00,       // Character - 125, offset (0x00001084)
    0x0C,              // width of the glyph
    0x9C, 0x10, 0x00,       // Character - 126, offset (0x0000109C)
/***********************************
 * Font Characters
 ***********************************/
/***********************************
 * Character - 32
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 33
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 34
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x36,         //  ** **  
    0x36,         //  ** **  
    0x36,         //  ** **  
    0x16,         //  ** *   
    0x12,         //  *  *   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 35
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x30, 0x01,         //     **  *       
    0x10, 0x01,         //     *   *       
    0x90, 0x01,         //     *  **       
    0xFE, 0x03,         //  *********      
    0x98, 0x00,         //    **  *        
    0x98, 0x00,         //    **  *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0xFE, 0x03,         //  *********      
    0x48, 0x00,         //    *  *         
    0x4C, 0x00,         //   **  *         
    0x4C, 0x00,         //   **  *         
    0x64, 0x00,         //   *  **         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 36
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x7C, 0x00,         //   *****         
    0xC4, 0x00,         //   *   **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x06, 0x00,         //  **             
    0x1C, 0x00,         //   ***           
    0x78, 0x00,         //    ****         
    0xE0, 0x00,         //      ***        
    0x80, 0x01,         //        **       
    0x82, 0x01,         //  *     **       
    0x86, 0x01,         //  **    **       
    0xC6, 0x00,         //  **   **        
    0xFC, 0x00,         //   ******        
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 37
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1C, 0x00,         //   ***           
    0x36, 0x00,         //  ** **          
    0x22, 0x02,         //  *   *   *      
    0x32, 0x01,         //  *  **  *       
    0x9E, 0x01,         //  ****  **       
    0x80, 0x00,         //        *        
    0x40, 0x00,         //       *         
    0x60, 0x07,         //      ** ***     
    0xA0, 0x0D,         //      * ** **    
    0x90, 0x08,         //     *  *   *    
    0x98, 0x08,         //    **  *   *    
    0x88, 0x0D,         //    *   ** **    
    0x00, 0x07,         //         ***     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 38
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0xCC, 0x00,         //   **  **        
    0xCC, 0x00,         //   **  **        
    0x6C, 0x00,         //   ** **         
    0x38, 0x00,         //    ***          
    0x3C, 0x00,         //   ****          
    0x3E, 0x06,         //  *****   **     
    0x66, 0x02,         //  **  **  *      
    0xC2, 0x03,         //  *    ****      
    0x86, 0x01,         //  **    **       
    0xCE, 0x03,         //  ***  ****      
    0x78, 0x06,         //    ****  **     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 39
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 40
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x0C,         //   **    
    0x0C,         //   **    
    0x04,         //   *     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x04,         //   *     
    0x0C,         //   **    
    0x0C,         //   **    
    0x08,         //    *    
    0x10,         //     *   
    0x20,         //      *  
    0x00,         //         

/***********************************
 * Character - 41
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x03,         // **      
    0x06,         //  **     
    0x04,         //   *     
    0x0C,         //   **    
    0x08,         //    *    
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x08,         //    *    
    0x0C,         //   **    
    0x04,         //   *     
    0x06,         //  **     
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         

/***********************************
 * Character - 42
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x10,         //     *   
    0x10,         //     *   
    0x92,         //  *  *  *
    0xFE,         //  *******
    0x18,         //    **   
    0x3C,         //   ****  
    0x66,         //  **  ** 
    0x24,         //   *  *  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 43
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0xFE, 0x01,         //  ********       
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 44
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x03,         // **      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 45
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3E,         //  *****  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 46
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 47
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x60,         //      ** 
    0x20,         //      *  
    0x30,         //     **  
    0x30,         //     **  
    0x10,         //     *   
    0x18,         //    **   
    0x08,         //    *    
    0x08,         //    *    
    0x0C,         //   **    
    0x04,         //   *     
    0x06,         //  **     
    0x06,         //  **     
    0x02,         //  *      
    0x03,         // **      
    0x01,         // *       
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 48
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 49
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x1E,         //  ****   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x18,         //    **   
    0x7E,         //  ****** 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 50
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCE, 0x00,         //  ***  **        
    0x86, 0x01,         //  **    **       
    0x82, 0x01,         //  *     **       
    0x80, 0x01,         //        **       
    0xC0, 0x00,         //       **        
    0xC0, 0x00,         //       **        
    0x60, 0x00,         //      **         
    0x30, 0x00,         //     **          
    0x18, 0x00,         //    **           
    0x0C, 0x01,         //   **    *       
    0x06, 0x01,         //  **     *       
    0xFE, 0x01,         //  ********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 51
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x7C, 0x00,         //   *****         
    0xCE, 0x00,         //  ***  **        
    0x86, 0x00,         //  **    *        
    0x80, 0x01,         //        **       
    0xC0, 0x00,         //       **        
    0x78, 0x00,         //    ****         
    0xC0, 0x00,         //       **        
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0x82, 0x01,         //  *     **       
    0x86, 0x00,         //  **    *        
    0xEE, 0x00,         //  *** ***        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 52
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0xE0, 0x00,         //      ***        
    0xE0, 0x00,         //      ***        
    0xF0, 0x00,         //     ****        
    0xD8, 0x00,         //    ** **        
    0xD8, 0x00,         //    ** **        
    0xCC, 0x00,         //   **  **        
    0xC4, 0x00,         //   *   **        
    0xC6, 0x00,         //  **   **        
    0xFE, 0x03,         //  *********      
    0xC0, 0x00,         //       **        
    0xC0, 0x00,         //       **        
    0xE0, 0x01,         //      ****       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 53
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFC, 0x01,         //   *******       
    0x84, 0x01,         //   *    **       
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0x7E, 0x00,         //  ******         
    0xC6, 0x00,         //  **   **        
    0xC6, 0x00,         //  **   **        
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0x82, 0x01,         //  *     **       
    0xC6, 0x00,         //  **   **        
    0xEE, 0x00,         //  *** ***        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 54
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x00,         //     ****        
    0x9C, 0x00,         //   ***  *        
    0x0C, 0x00,         //   **            
    0x06, 0x00,         //  **             
    0xFE, 0x00,         //  *******        
    0xCE, 0x01,         //  ***  ***       
    0x86, 0x01,         //  **    **       
    0x06, 0x01,         //  **     *       
    0x06, 0x01,         //  **     *       
    0x06, 0x01,         //  **     *       
    0x84, 0x01,         //   *    **       
    0xDC, 0x00,         //   *** **        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 55
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x02, 0x01,         //  *      *       
    0x82, 0x00,         //  *     *        
    0xC0, 0x00,         //       **        
    0x40, 0x00,         //       *         
    0x60, 0x00,         //      **         
    0x20, 0x00,         //      *          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x10, 0x00,         //     *           
    0x18, 0x00,         //    **           
    0x18, 0x00,         //    **           
    0x18, 0x00,         //    **           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 56
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 57
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x82, 0x01,         //  *     **       
    0x86, 0x01,         //  **    **       
    0xC6, 0x01,         //  **   ***       
    0xFC, 0x01,         //   *******       
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0xC0, 0x00,         //       **        
    0xE4, 0x00,         //   *  ***        
    0x7C, 0x00,         //   *****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 58
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 59
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x03,         // **      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 60
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0xF0, 0x00,         //     ****        
    0x3C, 0x00,         //   ****          
    0x0E, 0x00,         //  ***            
    0x0E, 0x00,         //  ***            
    0x38, 0x00,         //    ***          
    0xE0, 0x00,         //      ***        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 61
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 62
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x02, 0x00,         //  *              
    0x0E, 0x00,         //  ***            
    0x78, 0x00,         //    ****         
    0xE0, 0x01,         //      ****       
    0xC0, 0x01,         //       ***       
    0x78, 0x00,         //    ****         
    0x1E, 0x00,         //  ****           
    0x06, 0x00,         //  **             
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 63
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x66,         //  **  ** 
    0xC2,         //  *    **
    0xC0,         //       **
    0xC0,         //       **
    0x60,         //      ** 
    0x70,         //     *** 
    0x30,         //     **  
    0x18,         //    **   
    0x18,         //    **   
    0x00,         //         
    0x00,         //         
    0x18,         //    **   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 64
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC0, 0x07,         //       *****     
    0x70, 0x1C,         //     ***   ***   
    0x18, 0x30,         //    **       **  
    0x0C, 0x20,         //   **         *  
    0x84, 0x63,         //   *    ***   ** 
    0xC6, 0x46,         //  **   ** **   * 
    0x62, 0x46,         //  *   **  **   * 
    0x22, 0x46,         //  *   *   **   * 
    0x22, 0x46,         //  *   *   **   * 
    0x32, 0x46,         //  *  **   **   * 
    0x22, 0x62,         //  *   *   *   ** 
    0x62, 0x37,         //  *   ** *** **  
    0xE6, 0x1C,         //  **  ***  ***   
    0x04, 0x00,         //   *             
    0x0C, 0x00,         //   **            
    0x38, 0x06,         //    ***   **     
    0xE0, 0x03,         //      *****      
    0x00, 0x00,         //                 

/***********************************
 * Character - 65
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0xE0, 0x00,         //      ***        
    0xE0, 0x00,         //      ***        
    0xA0, 0x01,         //      * **       
    0xB0, 0x01,         //     ** **       
    0x10, 0x01,         //     *   *       
    0x18, 0x03,         //    **   **      
    0x18, 0x03,         //    **   **      
    0xF8, 0x07,         //    ********     
    0xFC, 0x07,         //   *********     
    0x0C, 0x04,         //   **      *     
    0x04, 0x0C,         //   *       **    
    0x0F, 0x1E,         // ****     ****   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 66
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x8C, 0x03,         //   **   ***      
    0x0C, 0x02,         //   **     *      
    0x0C, 0x06,         //   **     **     
    0x0C, 0x02,         //   **     *      
    0x0C, 0x03,         //   **    **      
    0xFC, 0x01,         //   *******       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x03,         //   **    **      
    0xFE, 0x01,         //  ********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 67
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x01,         //     *****       
    0xB8, 0x03,         //    *** ***      
    0x0C, 0x06,         //   **     **     
    0x06, 0x06,         //  **      **     
    0x06, 0x00,         //  **             
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x06, 0x00,         //  **             
    0x06, 0x06,         //  **      **     
    0x0C, 0x06,         //   **     **     
    0x98, 0x03,         //    **  ***      
    0xF0, 0x01,         //     *****       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 68
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0x8C, 0x03,         //   **   ***      
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x04,         //   **      *     
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x04,         //   **      *     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x8C, 0x03,         //   **   ***      
    0xFE, 0x00,         //  *******        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 69
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x03,         //  *********      
    0x0C, 0x02,         //   **     *      
    0x0C, 0x02,         //   **     *      
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0xFC, 0x01,         //   *******       
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0xFE, 0x07,         //  **********     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 70
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x07,         //  **********     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0xFC, 0x01,         //   *******       
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x1E, 0x00,         //  ****           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 71
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x01,         //     *****       
    0x1C, 0x03,         //   ***   **      
    0x0C, 0x06,         //   **     **     
    0x06, 0x06,         //  **      **     
    0x02, 0x00,         //  *              
    0x02, 0x00,         //  *              
    0x03, 0x00,         // **              
    0x82, 0x07,         //  *     ****     
    0x02, 0x06,         //  *       **     
    0x06, 0x06,         //  **      **     
    0x0C, 0x06,         //   **     **     
    0x1C, 0x07,         //   ***   ***     
    0xF0, 0x01,         //     *****       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 72
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1E, 0x1E,         //  ****    ****   
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0xFC, 0x0F,         //   **********    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x1E, 0x1E,         //  ****    ****   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 73
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 74
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xE0, 0x03,         //      *****      
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x82, 0x00,         //  *     *        
    0xC2, 0x00,         //  *    **        
    0xEE, 0x00,         //  *** ***        
    0x7C, 0x00,         //   *****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 75
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1E, 0x0F,         //  ****   ****    
    0x0C, 0x06,         //   **     **     
    0x0C, 0x03,         //   **    **      
    0x8C, 0x01,         //   **   **       
    0xCC, 0x00,         //   **  **        
    0x6C, 0x00,         //   ** **         
    0x7C, 0x00,         //   *****         
    0xEC, 0x00,         //   ** ***        
    0xCC, 0x00,         //   **  **        
    0x8C, 0x01,         //   **   **       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x06,         //   **     **     
    0x1E, 0x0F,         //  ****   ****    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 76
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1E, 0x00,         //  ****           
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0xFE, 0x03,         //  *********      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 77
 ***********************************/
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x0E, 0xF0, 0x00,         //  ***        ****        
    0x1C, 0x70, 0x00,         //   ***       ***         
    0x1C, 0x70, 0x00,         //   ***       ***         
    0x3C, 0x78, 0x00,         //   ****     ****         
    0x3C, 0x68, 0x00,         //   ****     * **         
    0x2C, 0x6C, 0x00,         //   ** *    ** **         
    0x6C, 0x6C, 0x00,         //   ** **   ** **         
    0x4C, 0x64, 0x00,         //   **  *   *  **         
    0xCC, 0x66, 0x00,         //   **  ** **  **         
    0xCC, 0x62, 0x00,         //   **  ** *   **         
    0x8C, 0x63, 0x00,         //   **   ***   **         
    0x8C, 0x63, 0x00,         //   **   ***   **         
    0x1E, 0xF1, 0x00,         //  ****   *   ****        
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         

/***********************************
 * Character - 78
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x0E, 0x1E,         //  ***     ****   
    0x1C, 0x0C,         //   ***     **    
    0x1C, 0x0C,         //   ***     **    
    0x3C, 0x0C,         //   ****    **    
    0x6C, 0x0C,         //   ** **   **    
    0x6C, 0x0C,         //   ** **   **    
    0xCC, 0x0C,         //   **  **  **    
    0x8C, 0x0C,         //   **   *  **    
    0x8C, 0x0D,         //   **   ** **    
    0x0C, 0x0F,         //   **    ****    
    0x0C, 0x0F,         //   **    ****    
    0x0C, 0x0E,         //   **     ***    
    0x1E, 0x0C,         //  ****     **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 79
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x01,         //     *****       
    0x98, 0x03,         //    **  ***      
    0x0C, 0x06,         //   **     **     
    0x06, 0x04,         //  **       *     
    0x06, 0x0C,         //  **       **    
    0x02, 0x0C,         //  *        **    
    0x02, 0x0C,         //  *        **    
    0x02, 0x0C,         //  *        **    
    0x06, 0x0C,         //  **       **    
    0x06, 0x04,         //  **       *     
    0x0C, 0x06,         //   **     **     
    0x98, 0x03,         //    **  ***      
    0xF0, 0x01,         //     *****       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 80
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x8C, 0x03,         //   **   ***      
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x03,         //   **    **      
    0xFC, 0x01,         //   *******       
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x1E, 0x00,         //  ****           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 81
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x01,         //     *****       
    0x98, 0x03,         //    **  ***      
    0x0C, 0x06,         //   **     **     
    0x06, 0x04,         //  **       *     
    0x06, 0x0C,         //  **       **    
    0x02, 0x0C,         //  *        **    
    0x02, 0x0C,         //  *        **    
    0x02, 0x0C,         //  *        **    
    0x06, 0x0C,         //  **       **    
    0x06, 0x04,         //  **       *     
    0x0C, 0x06,         //   **     **     
    0x98, 0x03,         //    **  ***      
    0xF0, 0x03,         //     ******      
    0x00, 0x0E,         //          ***    
    0x00, 0x04,         //           *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 82
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x8C, 0x03,         //   **   ***      
    0x0C, 0x02,         //   **     *      
    0x0C, 0x06,         //   **     **     
    0x0C, 0x02,         //   **     *      
    0x0C, 0x03,         //   **    **      
    0xFC, 0x01,         //   *******       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x02,         //   **     *      
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x1E, 0x0E,         //  ****    ***    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 83
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF8, 0x00,         //    *****        
    0x9C, 0x03,         //   ***  ***      
    0x06, 0x03,         //  **     **      
    0x06, 0x02,         //  **      *      
    0x06, 0x00,         //  **             
    0x1C, 0x00,         //   ***           
    0xF8, 0x00,         //    *****        
    0x80, 0x01,         //        **       
    0x00, 0x03,         //         **      
    0x02, 0x03,         //  *      **      
    0x06, 0x03,         //  **     **      
    0x8E, 0x01,         //  ***   **       
    0xF8, 0x00,         //    *****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 84
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFF, 0x07,         // ***********     
    0x63, 0x06,         // **   **  **     
    0x63, 0x06,         // **   **  **     
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0xF8, 0x00,         //    *****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 85
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1E, 0x1F,         //  ****   *****   
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x0C,         //   **      **    
    0x0C, 0x06,         //   **     **     
    0x38, 0x07,         //    ***  ***     
    0xF0, 0x01,         //     *****       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 86
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x0F, 0x1F,         // ****    *****   
    0x06, 0x04,         //  **       *     
    0x0C, 0x06,         //   **     **     
    0x0C, 0x06,         //   **     **     
    0x08, 0x02,         //    *     *      
    0x18, 0x03,         //    **   **      
    0x18, 0x03,         //    **   **      
    0x10, 0x01,         //     *   *       
    0xB0, 0x01,         //     ** **       
    0xB0, 0x01,         //     ** **       
    0xA0, 0x00,         //      * *        
    0xE0, 0x00,         //      ***        
    0x40, 0x00,         //       *         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 87
 ***********************************/
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x8F, 0xF1, 0x01,         // ****   **   *****       
    0x86, 0x43, 0x00,         //  **    ***    *         
    0x84, 0x43, 0x00,         //   *    ***    *         
    0x8C, 0x62, 0x00,         //   **   * *   **         
    0xCC, 0x62, 0x00,         //   **  ** *   **         
    0xCC, 0x66, 0x00,         //   **  ** **  **         
    0x48, 0x26, 0x00,         //    *  *  **  *          
    0x48, 0x34, 0x00,         //    *  *   * **          
    0x78, 0x3C, 0x00,         //    ****   ****          
    0x78, 0x3C, 0x00,         //    ****   ****          
    0x38, 0x1C, 0x00,         //    ***    ***           
    0x30, 0x18, 0x00,         //     **     **           
    0x30, 0x18, 0x00,         //     **     **           
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         

/***********************************
 * Character - 88
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x1F, 0x0F,         // *****   ****    
    0x0C, 0x06,         //   **     **     
    0x0C, 0x03,         //   **    **      
    0x98, 0x01,         //    **  **       
    0xB0, 0x01,         //     ** **       
    0xE0, 0x00,         //      ***        
    0x60, 0x00,         //      **         
    0xF0, 0x00,         //     ****        
    0xB0, 0x01,         //     ** **       
    0x98, 0x01,         //    **  **       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x06,         //   **     **     
    0x1F, 0x0F,         // *****   ****    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 89
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x9F, 0x0F,         // *****  *****    
    0x0C, 0x06,         //   **     **     
    0x0C, 0x03,         //   **    **      
    0x18, 0x03,         //    **   **      
    0x98, 0x01,         //    **  **       
    0xB0, 0x01,         //     ** **       
    0xF0, 0x00,         //     ****        
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0x60, 0x00,         //      **         
    0xF0, 0x00,         //     ****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 90
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x03,         //  *********      
    0x02, 0x01,         //  *      *       
    0x82, 0x01,         //  *     **       
    0xC0, 0x00,         //       **        
    0x40, 0x00,         //       *         
    0x60, 0x00,         //      **         
    0x30, 0x00,         //     **          
    0x10, 0x00,         //     *           
    0x18, 0x00,         //    **           
    0x0C, 0x00,         //   **            
    0x04, 0x03,         //   *     **      
    0x06, 0x03,         //  **     **      
    0xFE, 0x03,         //  *********      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 91
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 92
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x06,         //  **     
    0x06,         //  **     
    0x04,         //   *     
    0x0C,         //   **    
    0x0C,         //   **    
    0x08,         //    *    
    0x18,         //    **   
    0x18,         //    **   
    0x10,         //     *   
    0x30,         //     **  
    0x20,         //      *  
    0x60,         //      ** 
    0x60,         //      ** 
    0x40,         //       * 
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 93
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 94
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x18,         //    **   
    0x18,         //    **   
    0x1C,         //   ***   
    0x34,         //   * **  
    0x26,         //  **  *  
    0x66,         //  **  ** 
    0x62,         //  *   ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 95
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x01,         //  ********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 96
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0C,         //   **    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 97
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x7C, 0x00,         //   *****         
    0xCE, 0x00,         //  ***  **        
    0x86, 0x00,         //  **    *        
    0x80, 0x01,         //        **       
    0xFC, 0x01,         //   *******       
    0x8E, 0x01,         //  ***   **       
    0x86, 0x01,         //  **    **       
    0xC6, 0x01,         //  **   ***       
    0xE6, 0x01,         //  **  ****       
    0xBC, 0x01,         //   **** **       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 98
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x07, 0x00,         // ***             
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0xF6, 0x00,         //  ** ****        
    0xDE, 0x01,         //  **** ***       
    0x86, 0x01,         //  **    **       
    0x06, 0x01,         //  **     *       
    0x06, 0x01,         //  **     *       
    0x06, 0x01,         //  **     *       
    0x06, 0x01,         //  **     *       
    0x86, 0x01,         //  **    **       
    0xDE, 0x01,         //  **** ***       
    0xF6, 0x00,         //  ** ****        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 99
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x01,         //   **  ***       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0x86, 0x01,         //  **    **       
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 100
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC0, 0x01,         //       ***       
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0xB8, 0x01,         //    *** **       
    0xCC, 0x01,         //   **  ***       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x01,         //   **  ***       
    0xB8, 0x03,         //    *** ***      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 101
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xFE, 0x01,         //  ********       
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0x06, 0x00,         //  **             
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 102
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x38,         //    ***  
    0x1C,         //   ***   
    0x0C,         //   **    
    0x0C,         //   **    
    0x3E,         //  *****  
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 103
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xB8, 0x01,         //    *** **       
    0xCC, 0x01,         //   **  ***       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x01,         //   **  ***       
    0xB8, 0x01,         //    *** **       
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0xCC, 0x00,         //   **  **        
    0x7C, 0x00,         //   *****         
    0x00, 0x00,         //                 

/***********************************
 * Character - 104
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x0E, 0x00,         //  ***            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0xEC, 0x00,         //   ** ***        
    0x9C, 0x01,         //   ***  **       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x9E, 0x07,         //  ****  ****     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 105
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 106
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x07,         // ***     
    0x07,         // ***     
    0x00,         //         

/***********************************
 * Character - 107
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x0E, 0x00,         //  ***            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0xCC, 0x03,         //   **  ****      
    0x8C, 0x01,         //   **   **       
    0xCC, 0x00,         //   **  **        
    0x6C, 0x00,         //   ** **         
    0x3C, 0x00,         //   ****          
    0x6C, 0x00,         //   ** **         
    0xCC, 0x00,         //   **  **        
    0xCC, 0x01,         //   **  ***       
    0x8C, 0x01,         //   **   **       
    0xDE, 0x03,         //  **** ****      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 108
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 109
 ***********************************/
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0xE7, 0x3C, 0x00,         // ***  ***  ****          
    0xDE, 0x77, 0x00,         //  **** ***** ***         
    0x8C, 0x63, 0x00,         //   **   ***   **         
    0x0C, 0x61, 0x00,         //   **    *    **         
    0x0C, 0x61, 0x00,         //   **    *    **         
    0x0C, 0x61, 0x00,         //   **    *    **         
    0x0C, 0x61, 0x00,         //   **    *    **         
    0x0C, 0x61, 0x00,         //   **    *    **         
    0x0C, 0x61, 0x00,         //   **    *    **         
    0xDF, 0xF7, 0x01,         // ***** ***** *****       
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         
    0x00, 0x00, 0x00,         //                         

/***********************************
 * Character - 110
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xEE, 0x00,         //  *** ***        
    0x9C, 0x01,         //   ***  **       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x9E, 0x07,         //  ****  ****     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 111
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x06, 0x01,         //  **     *       
    0x06, 0x01,         //  **     *       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 112
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xEE, 0x00,         //  *** ***        
    0x9E, 0x01,         //  ****  **       
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x0C, 0x03,         //   **    **      
    0x9C, 0x01,         //   ***  **       
    0xEC, 0x00,         //   ** ***        
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x0C, 0x00,         //   **            
    0x1E, 0x00,         //  ****           
    0x00, 0x00,         //                 

/***********************************
 * Character - 113
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xB8, 0x01,         //    *** **       
    0xCC, 0x01,         //   **  ***       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0x86, 0x01,         //  **    **       
    0xCC, 0x01,         //   **  ***       
    0xB8, 0x01,         //    *** **       
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0x80, 0x01,         //        **       
    0xC0, 0x03,         //       ****      
    0x00, 0x00,         //                 

/***********************************
 * Character - 114
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x6E,         //  *** ** 
    0x1C,         //   ***   
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 115
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x78, 0x00,         //    ****         
    0xEE, 0x00,         //  *** ***        
    0x86, 0x00,         //  **    *        
    0x06, 0x00,         //  **             
    0x3C, 0x00,         //   ****          
    0xF0, 0x00,         //     ****        
    0xC0, 0x00,         //       **        
    0x86, 0x00,         //  **    *        
    0xCE, 0x00,         //  ***  **        
    0x7C, 0x00,         //   *****         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 116
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x3E,         //  *****  
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x3C,         //   ****  
    0x38,         //    ***  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 117
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC7, 0x01,         // ***   ***       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x84, 0x01,         //   *    **       
    0xCC, 0x01,         //   **  ***       
    0x78, 0x03,         //    **** **      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 118
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xCF, 0x03,         // ****  ****      
    0x86, 0x01,         //  **    **       
    0x84, 0x00,         //   *    *        
    0xCC, 0x00,         //   **  **        
    0xCC, 0x00,         //   **  **        
    0x48, 0x00,         //    *  *         
    0x78, 0x00,         //    ****         
    0x78, 0x00,         //    ****         
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 119
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x8E, 0x38,         //  ***   *   ***  
    0xC6, 0x11,         //  **   ***   *   
    0xC4, 0x19,         //   *   ***  **   
    0x4C, 0x19,         //   **  * *  **   
    0x6C, 0x19,         //   ** ** *  **   
    0x68, 0x0B,         //    * ** ** *    
    0x28, 0x0A,         //    * *   * *    
    0x28, 0x0E,         //    * *   ***    
    0x38, 0x06,         //    ***   **     
    0x10, 0x06,         //     *    **     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 120
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xCE, 0x03,         //  ***  ****      
    0x8C, 0x01,         //   **   **       
    0xCC, 0x00,         //   **  **        
    0x78, 0x00,         //    ****         
    0x70, 0x00,         //     ***         
    0x70, 0x00,         //     ***         
    0x78, 0x00,         //    ****         
    0xCC, 0x00,         //   **  **        
    0x8C, 0x01,         //   **   **       
    0xCE, 0x03,         //  ***  ****      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 121
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xCF, 0x03,         // ****  ****      
    0x86, 0x01,         //  **    **       
    0x84, 0x01,         //   *    **       
    0xCC, 0x00,         //   **  **        
    0xCC, 0x00,         //   **  **        
    0x48, 0x00,         //    *  *         
    0x78, 0x00,         //    ****         
    0x78, 0x00,         //    ****         
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x30, 0x00,         //     **          
    0x10, 0x00,         //     *           
    0x1C, 0x00,         //   ***           
    0x0E, 0x00,         //  ***            
    0x00, 0x00,         //                 

/***********************************
 * Character - 122
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xFE, 0x00,         //  *******        
    0xC6, 0x00,         //  **   **        
    0x66, 0x00,         //  **  **         
    0x60, 0x00,         //      **         
    0x30, 0x00,         //     **          
    0x18, 0x00,         //    **           
    0x18, 0x00,         //    **           
    0x8C, 0x01,         //   **   **       
    0x86, 0x01,         //  **    **       
    0xFE, 0x01,         //  ********       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

/***********************************
 * Character - 123
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x30,         //     **  
    0x18,         //    **   
    0x08,         //    *    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x06,         //  **     
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x08,         //    *    
    0x18,         //    **   
    0x30,         //     **  
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 124
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 125
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x06,         //  **     
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x38,         //    ***  
    0x18,         //    **   
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x06,         //  **     
    0x03,         // **      
    0x00,         //         
    0x00,         //         

/***********************************
 * Character - 126
 ***********************************/
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x3C, 0x04,         //   ****    *     
    0x66, 0x06,         //  **  **  **     
    0xC2, 0x03,         //  *    ****      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

};

/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: glyph_play_pause
 * Description:  16x9 pixels, 1-bits per pixel
 ***********************************/

extern FLASH_BYTE __glyphPlayPause[];

const IMAGE_FLASH glyphPlayPause =
{
    (FLASH | IMAGE_MBITMAP | COMP_NONE),
    (FLASH_BYTE *)__glyphPlayPause
};

FLASH_BYTE __glyphPlayPause[] =
{
/****************************************
 * Bitmap header
 ****************************************/
    0x00,           // Compresssion
    0x01,           // Color Depth
    0x09, 0x00,     // Height
    0x10, 0x00,     // Width
/***********************************
 * Color Palette for the image
 **********************************/
    0x00, 0x00,
    0xFF, 0xFF,
/********************************
 * Bitmap Image Body
 *********************************/
    0x18, 0xFF, 0x18, 0xFC, 0x18, 0xF0, 0x18, 0xC0, 0x18, 0x00, 0x18, 0xC0, 0x18, 0xF0, 0x18, 0xFC,
    0x18, 0xFF,
};


/*********************************
 * Bitmap Structure
 * Label: glyph_reverse
 * Description:  13x9 pixels, 1-bits per pixel
 ***********************************/

extern FLASH_BYTE __glyphReverse[];

const IMAGE_FLASH glyphReverse =
{
    (FLASH | IMAGE_MBITMAP | COMP_NONE),
    (FLASH_BYTE *)__glyphReverse
};

FLASH_BYTE __glyphReverse[] =
{
/****************************************
 * Bitmap header
 ****************************************/
    0x00,           // Compresssion
    0x01,           // Color Depth
    0x09, 0x00,     // Height
    0x0D, 0x00,     // Width
/***********************************
 * Color Palette for the image
 **********************************/
    0x00, 0x00,
    0xFF, 0xFF,
/********************************
 * Bitmap Image Body
 *********************************/
    0x8F, 0x03, 0xC7, 0x11, 0xE3, 0x18, 0x71, 0x1C, 0x38, 0x1E, 0x71, 0x1C, 0xE3, 0x18, 0xC7, 0x11,
    0x8F, 0x03,
};
/*********************************
 * Bitmap Structure
 * Label: glyph_forward
 * Description:  13x9 pixels, 1-bits per pixel
 ***********************************/

extern FLASH_BYTE __glyphForward[];

const IMAGE_FLASH glyphForward =
{
    (FLASH | IMAGE_MBITMAP | COMP_NONE),
    (FLASH_BYTE *)__glyphForward
};

FLASH_BYTE __glyphForward[] =
{
/****************************************
 * Bitmap header
 ****************************************/
    0x00,           // Compresssion
    0x01,           // Color Depth
    0x09, 0x00,     // Height
    0x0D, 0x00,     // Width
/***********************************
 * Color Palette for the image
 **********************************/
    0x00, 0x00,
    0xFF, 0xFF,
/********************************
 * Bitmap Image Body
 *********************************/
    0x38, 0x1E, 0x71, 0x1C, 0xE3, 0x18, 0xC7, 0x11, 0x8F, 0x03, 0xC7, 0x11, 0xE3, 0x18, 0x71, 0x1C,
    0x38, 0x1E,
};

/*********************************
 * Bitmap Structure
 * Label: mchpLogo
 * Description:  152x40 pixels, 4-bits per pixel
 ***********************************/

extern FLASH_BYTE __mchpLogo[];

const IMAGE_FLASH mchpLogo =
{
    (FLASH | IMAGE_MBITMAP | COMP_NONE),
    (FLASH_BYTE *)__mchpLogo
};

FLASH_BYTE __mchpLogo[] =
{
/****************************************
 * Bitmap header
 ****************************************/
    0x00,           // Compresssion
    0x04,           // Color Depth
    0x28, 0x00,     // Height
    0x98, 0x00,     // Width
/***********************************
 * Color Palette for the image
 **********************************/
    0x00, 0x00,
    0x00, 0x80,
    0x00, 0x04,
    0x00, 0x84,
    0x10, 0x00,
    0x10, 0x80,
    0x10, 0x04,
    0x10, 0x84,
    0x18, 0xC6,
    0x00, 0xF8,
    0xE0, 0x07,
    0xE0, 0xFF,
    0x1F, 0x00,
    0x1F, 0xF8,
    0xFF, 0x07,
    0xFF, 0xFF,
/********************************
 * Bitmap Image Body
 *********************************/
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0x99, 0x89, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xFF, 0x7F, 0x70, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x98, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xF9, 0x7F, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x99, 
    0x99, 0x99, 0x99, 0x99, 0x99, 0x89, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 
    0x99, 0x99, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xF9, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x89, 0x7F, 0x99, 
    0x99, 0x99, 0x99, 0x99, 0xFF, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0x99, 0x99, 0xF8, 0xFF, 0x99, 0x99, 0x99, 0x99, 0xF9, 
    0xFF, 0x98, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x0F, 
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0xF8, 0xFF, 0x9F, 0x99, 0x89, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF7, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x99, 0x99, 0x99, 
    0xF9, 0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x0F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x08, 0x00, 0xFF, 0x7F, 0x00, 
    0x00, 0x00, 0x00, 0xF7, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x77, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 
    0x87, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x70, 0x8F, 0x00, 0xF7, 0xFF, 0xFF, 0x07, 0x70, 0x7F, 
    0x00, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x70, 0xF8, 0x9F, 0x99, 0x99, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 
    0x99, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
    0x70, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0xFF, 0x08, 0x00, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 
    0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x8F, 0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x80, 0x98, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0xF8, 0xFF, 
    0xFF, 0xFF, 0x9F, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00, 
    0x00, 0x00, 0xF8, 0x08, 0x00, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x88, 0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x99, 0x99, 0x99, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 0x7F, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 
    0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0xF8, 0x08, 
    0x00, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0xF0, 0xFF, 
    0xFF, 0x07, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x99, 0x99, 0x99, 
    0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0xF8, 0xFF, 0xFF, 
    0xFF, 0x08, 0x00, 0x07, 0x00, 0xF7, 0x07, 0x00, 0x07, 0x00, 0xF8, 0x08, 0x00, 0x7F, 0x00, 0x80, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 
    0x00, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x70, 0x0F, 
    0x00, 0xF7, 0x00, 0xF0, 0xFF, 0xFF, 0x08, 0x00, 0x99, 0x99, 0x89, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x98, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x0F, 
    0x00, 0xF0, 0x00, 0x00, 0x0F, 0x00, 0xF7, 0x08, 0x00, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x0F, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0x00, 0x70, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0x00, 0x70, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0xF0, 
    0xFF, 0xFF, 0x0F, 0x00, 0x99, 0x99, 0xF9, 0x9F, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0xF9, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x7F, 0x00, 0x70, 0x00, 0x70, 
    0x0F, 0x00, 0xF7, 0x08, 0x00, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x88, 0x88, 
    0x78, 0x00, 0xF0, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0xF0, 0xFF, 0xFF, 0x08, 0x00, 
    0x99, 0x99, 0xFF, 0x8F, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x98, 0x99, 0xF8, 0xFF, 0xFF, 0x07, 0x00, 0x8F, 0x00, 0x00, 0x00, 0x80, 0x0F, 0x00, 0xF0, 0x08, 
    0x00, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0x00, 
    0x70, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x89, 0xFF, 0xFF, 
    0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0xF9, 0xFF, 
    0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0x7F, 0x00, 0xF0, 0x08, 0x00, 0x7F, 0x00, 0xF0, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 
    0x00, 0xF0, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0F, 
    0x00, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0xF7, 0xFF, 0xFF, 0x9F, 0x99, 0xF8, 0xFF, 
    0xFF, 0xFF, 0x9F, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0x8F, 0x99, 0x89, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 
    0x07, 0x00, 0x00, 0xF7, 0x7F, 0x00, 0xF0, 0x08, 0x00, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0x00, 0x70, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0x00, 0x70, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x80, 0x99, 0xFF, 0xFF, 0xFF, 0x8F, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 
    0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0xF9, 0xFF, 0xFF, 0x00, 0x70, 0xFF, 0x0F, 0x00, 0x00, 0xF8, 
    0x7F, 0x00, 0xF0, 0x08, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0F, 0x00, 0x77, 0x77, 
    0x77, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x88, 0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0x70, 0x77, 0x77, 0x77, 0xF8, 
    0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0xFF, 0xFF, 0xFF, 
    0xFF, 0x9F, 0xF9, 0xFF, 0xFF, 0x00, 0x70, 0xFF, 0x7F, 0x00, 0x70, 0xFF, 0x7F, 0x00, 0xF0, 0x08, 
    0x00, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0F, 0x00, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0xF0, 0xFF, 
    0xFF, 0x07, 0x70, 0x0F, 0x00, 0xF7, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x8F, 0x99, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0x8F, 0xF8, 0xFF, 
    0xFF, 0x00, 0x70, 0xFF, 0xFF, 0x00, 0x80, 0xFF, 0x8F, 0x00, 0x80, 0x08, 0x00, 0xFF, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x70, 0x0F, 0x00, 0xFF, 0xFF, 0x8F, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0xF0, 0xFF, 0xFF, 0x07, 0x70, 0x0F, 
    0x00, 0xF7, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0x99, 0xF9, 
    0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x80, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x80, 0x08, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xF7, 
    0x0F, 0x00, 0xFF, 0xFF, 0x8F, 0x00, 0xF7, 0x8F, 0x07, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x8F, 0x07, 
    0x00, 0x00, 0x00, 0x70, 0x8F, 0x00, 0xF7, 0xFF, 0xFF, 0x07, 0x70, 0x7F, 0x00, 0xF7, 0x00, 0xF0, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0x99, 
    0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0xF9, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 
    0x99, 0x99, 0x99, 0x99, 0xF9, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 
    0x89, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x99, 0x99, 
    0x99, 0x99, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xF9, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x99, 0x99, 0x99, 0x99, 
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 
    0x99, 0x99, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xF8, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x8F, 0x99, 0x99, 0x99, 0x99, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
};
