/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        i2s.h
    Dependencies:    See Includes Section
    Processor:       PIC32

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
#ifndef I2S_H
#define I2S_H
////////////////////////////////////////////////////////////////////////////////

#include "system.h"
#include <plib.h>

////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    UINT8 *buffer;
    UINT16 size;
    UINT8 *head;
    UINT8 *tail;
    UINT16 count;
}
I2S_FIFO;

typedef struct
{
    UINT32 sampleRate;
    UINT32 referenceClock;
    INT16 tuningRange;
    UINT16 bufferLevel;
    UINT8 sampleResolution;
    UINT8 audioMode;
    UINT8 dmaChunk;

    union
    {
        UINT8 flags;
        struct
        {
            UINT8 clocking : 1;
            UINT8 sampleRateTuning : 1;
            UINT8 rxRunning : 1;
            UINT8 txRunning : 1;
            UINT8 txActive : 1;
        };
    };
}
I2S_STATE;

extern volatile I2S_STATE i2sState;

#define I2S_TASK_PERIOD         10 // ms

////////////////////////////////////////////////////////////////////////////////

BOOL I2S_Initialize ( VOID );
VOID I2S_Task ( VOID );
VOID I2S_StartClock ( VOID );
VOID I2S_StopClock ( VOID );
UINT8 I2S_SetSampleResolution ( UINT8 sampleResolution );
UINT32 I2S_SetSampleRate ( UINT32 sampleRate );
VOID I2S_SampleRateUpdate ( UINT32 sampleRate );
UINT32 I2S_SetReferenceClock ( UINT8 source, UINT32 clock, BOOL tuning );
INT16 I2S_GetBufferLevel ( VOID );

VOID I2S_TxStop ( VOID );
UINT16 I2S_TxWrite ( const UINT8 *data, UINT16 size );
UINT16 I2S_TxGetDataSize ( VOID );
UINT16 I2S_TxGetFreeSize ( VOID );
VOID I2S_FifoTxWrite ( const UINT8 *addr, UINT16 size );
VOID I2S_TxTransfer ( VOID );
VOID I2S_DMATxInterrupt ( VOID );

VOID I2S_RxStop ( VOID );
UINT16 I2S_RxRead ( UINT8 *data, UINT16 size );
VOID I2S_FifoRxRead ( UINT8 *addr, UINT16 size );
VOID I2S_RxTransfer ( VOID );
VOID I2S_DMARxInterrupt ( VOID );

UINT16 I2S_memcpy32to24 ( UINT8 *dest, const UINT8 *src, UINT16 size );
UINT16 I2S_memcpy24to32 ( UINT8 *dest, const UINT8 *src, UINT16 size );

////////////////////////////////////////////////////////////////////////////////
#endif
