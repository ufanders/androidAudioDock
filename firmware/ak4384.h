/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        ak4366.h
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
#ifndef AK4384_H
#define AK4384_H
////////////////////////////////////////////////////////////////////////////////

#include "system.h"
#include "time.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    UINT8   state;
    UINT16  stateTimer;

    INT16  volume;
    BOOL    mute;
}
AK_STATE;

////////////////////////////////////////////////////////////////////////////////

#define AK_STATE_IDLE           0x00
#define AK_STATE_START          0x10
#define AK_STATE_RUNNING        0x20
#define AK_STATE_STOP           0x30
#define AK_STATE_STOPPED        0x40

#define AK4384_CONTROL2_VALUE   0b10000010  // DZFE=1, DZFM=0, SLOW=0, DFS=00(ignored by ACKS), DEM=00, SMUTE=0

#define AK4384_VOLUME_MAX       0   // dB
#define AK4384_VOLUME_MIN       -47 // dB
#define AK4384_VOLUME_INIT      -12 // dB

#define AK4384_TASK_PERIOD      10 // ms

////////////////////////////////////////////////////////////////////////////////

VOID AK4384_WriteRegister ( UINT8 reg, UINT8 value );
VOID AK4384_WriteByte ( UINT8 value );
VOID AK4384_Initialize ( VOID );
VOID AK4384_Task ( VOID );
VOID AK4384_Start ( VOID );
VOID AK4384_Stop ( VOID );
INT16 AK4384_VolumeSet ( INT16 volume );
BOOL AK4384_MuteSet ( BOOL mute );

////////////////////////////////////////////////////////////////////////////////
#endif
