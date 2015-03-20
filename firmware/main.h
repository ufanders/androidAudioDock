/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        main.h
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
#ifndef MAIN_H
#define MAIN_H

////////////////////////////////////////////////////////////////////////////////

#include "system.h"
#include "ped_i2c.h"
#include "main_usb.h"
#include "key.h"
#include "afe.h"
#include "display.h"
#include "android_audio.h"

////////////////////////////////////////////////////////////////////////////////

#define MAIN_DISPLAY_TASK_PERIOD        100 // ms
#define MAIN_USB_ATTACH_TASK_PERIOD     50  // ms
#define MAIN_VOLUME_TASK_PERIOD         50  // ms

INT main ( VOID );
VOID MAIN_Initialize ( VOID );
VOID MAIN_DisplayTask ( VOID );
VOID MAIN_USBAttachTask ( VOID );
VOID MAIN_VolumeControlTask ( VOID );
VOID KEY_Handler ( UINT8 key, UINT8 event );

////////////////////////////////////////////////////////////////////////////////
#endif
