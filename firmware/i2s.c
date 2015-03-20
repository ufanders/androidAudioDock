/*****************************************************************************
                     Microchip Technology Incorporated

    FileName:        i2s.c
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
#define     I2S_C
#include    "i2s.h"

////////////////////////////////////////////////////////////////////////////////

#ifdef AUDIO_PLAYBACK
volatile I2S_FIFO i2sTxFifo;
UINT8 i2sTxBuff[I2S_BUFFER_SIZE];
#endif

#ifdef AUDIO_RECORD
volatile I2S_FIFO i2sRxFifo;
UINT8 i2sRxBuff[I2S_BUFFER_SIZE];
#endif

volatile I2S_STATE i2sState;

////////////////////////////////////////////////////////////////////////////////
#ifdef I2S_TEST_200HZ
    const INT16 sine[240] =
    {
        0, 857, 1714, 2570, 3425, 4277, 5125, 5971,
        6812, 7649, 8480, 9306, 10125, 10938, 11742, 12539,
        13327, 14106, 14876, 15635, 16383, 17120, 17846, 18559,
        19260, 19947, 20621, 21280, 21925, 22555, 23170, 23768,
        24350, 24916, 25465, 25996, 26509, 27004, 27481, 27938,
        28377, 28796, 29196, 29575, 29934, 30273, 30591, 30888,
        31163, 31418, 31650, 31862, 32051, 32218, 32364, 32487,
        32587, 32666, 32722, 32756, 32767, 32756, 32722, 32666,
        32587, 32487, 32364, 32218, 32051, 31862, 31650, 31418,
        31163, 30888, 30591, 30273, 29934, 29575, 29196, 28796,
        28377, 27938, 27481, 27004, 26509, 25996, 25465, 24916,
        24350, 23768, 23170, 22555, 21925, 21280, 20621, 19947,
        19260, 18559, 17846, 17120, 16383, 15635, 14876, 14106,
        13327, 12539, 11742, 10938, 10125, 9306, 8480, 7649,
        6812, 5971, 5125, 4277, 3425, 2570, 1714, 857,
        0, -858, -1715, -2571, -3426, -4278, -5126, -5972,
        -6813, -7650, -8481, -9307, -10126, -10939, -11743, -12540,
        -13328, -14107, -14877, -15636, -16384, -17121, -17847, -18560,
        -19261, -19948, -20622, -21281, -21926, -22556, -23171, -23769,
        -24351, -24917, -25466, -25997, -26510, -27005, -27482, -27939,
        -28378, -28797, -29197, -29576, -29935, -30274, -30592, -30889,
        -31164, -31419, -31651, -31863, -32052, -32219, -32365, -32488,
        -32588, -32667, -32723, -32757, -32768, -32757, -32723, -32667,
        -32588, -32488, -32365, -32219, -32052, -31863, -31651, -31419,
        -31164, -30889, -30592, -30274, -29935, -29576, -29197, -28797,
        -28378, -27939, -27482, -27005, -26510, -25997, -25466, -24917,
        -24351, -23769, -23171, -22556, -21926, -21281, -20622, -19948,
        -19261, -18560, -17847, -17121, -16384, -15636, -14877, -14107,
        -13328, -12540, -11743, -10939, -10126, -9307, -8481, -7650,
        -6813, -5972, -5126, -4278, -3426, -2571, -1715, -858,
    };
    const INT32 sine24[240] = {
        219588,439026,658163,876848,1094933,1312267,1528702,1744090,1958282,
        2171132,2382493,2592222,2800175,3006208,3210181,3411954,3611389,
        3808348,4002698,4194304,4383036,4568763,4751360,4930700,5106661,
        5279122,5447965,5613074,5774337,5931642,6084881,6233951,6378748,
        6519173,6655130,6786526,6913272,7035279,7152464,7264748,7372052,
        7474304,7571434,7663375,7750063,7831440,7907450,7978040,8043163,
        8102773,8156830,8205297,8248140,8285330,8316842,8342654,8362749,
        8377112,8385733,8388607,8385733,8377112,8362749,8342654,8316842,
        8285330,8248140,8205297,8156830,8102773,8043163,7978040,7907450,
        7831440,7750063,7663375,7571434,7474304,7372052,7264748,7152464,
        7035279,6913272,6786526,6655130,6519173,6378748,6233951,6084881,
        5931642,5774337,5613074,5447965,5279122,5106661,4930700,4751360,
        4568763,4383036,4194304,4002698,3808348,3611389,3411954,3210181,
        3006208,2800175,2592222,2382493,2171132,1958282,1744090,1528702,
        1312267,1094933,876848,658163,439026,219588,0,-219588,-439026,
        -658163,-876848,-1094933,-1312267,-1528702,-1744090,-1958282,
        -2171132,-2382493,-2592222,-2800175,-3006208,-3210181,-3411954,
        -3611389,-3808348,-4002698,-4194304,-4383036,-4568763,-4751360,
        -4930700,-5106661,-5279122,-5447965,-5613074,-5774337,-5931642,
        -6084881,-6233951,-6378748,-6519173,-6655130,-6786526,-6913272,
        -7035279,-7152464,-7264748,-7372052,-7474304,-7571434,-7663375,
        -7750063,-7831440,-7907450,-7978040,-8043163,-8102773,-8156830,
        -8205297,-8248140,-8285330,-8316842,-8342654,-8362749,-8377112,
        -8385733,-8388608,-8385733,-8377112,-8362749,-8342654,-8316842,
        -8285330,-8248140,-8205297,-8156830,-8102773,-8043163,-7978040,
        -7907450,-7831440,-7750063,-7663375,-7571434,-7474304,-7372052,
        -7264748,-7152464,-7035279,-6913272,-6786526,-6655130,-6519173,
        -6378748,-6233951,-6084881,-5931642,-5774337,-5613074,-5447965,
        -5279122,-5106661,-4930700,-4751360,-4568763,-4383036,-4194304,
        -4002698,-3808348,-3611389,-3411954,-3210181,-3006208,-2800175,
        -2592222,-2382493,-2171132,-1958282,-1744090,-1528702,-1312267,
        -1094933,-876848,-658163,-439026,-219588,0
    };
#endif

////////////////////////////////////////////////////////////////////////////////

BOOL I2S_Initialize ( VOID )
{
    #ifdef AUDIO_PLAYBACK
    {
        DmaChnConfigure ( I2S_TX_DMA_CHANNEL, DMA_CHN_PRI0, DMA_CONFIG_DEFAULT );
        DmaChnSetEventControl ( I2S_TX_DMA_CHANNEL,
                                DMA_EV_START_IRQ_EN |
                                DMA_EV_START_IRQ ( I2S_TX_IRQ ) );

        DmaChnSetEvEnableFlags ( I2S_TX_DMA_CHANNEL, DMA_EV_BLOCK_DONE );

        INTSetVectorPriority ( I2S_TX_DMA_VECTOR, I2S_TX_DMA_INT_PRI );
        INTSetVectorSubPriority ( I2S_TX_DMA_VECTOR, I2S_TX_DMA_INT_SPRI );
        INTClearFlag ( I2S_TX_DMA_IRQ );
        INTEnable ( I2S_TX_DMA_IRQ, INT_ENABLED );

        i2sTxFifo.buffer = i2sTxBuff;
        i2sTxFifo.size = sizeof ( i2sTxBuff );
        i2sTxFifo.head = i2sTxBuff;
        i2sTxFifo.tail = i2sTxBuff;
    }
    #endif

    #ifdef AUDIO_RECORD
    {
        DmaChnConfigure ( I2S_RX_DMA_CHANNEL, DMA_CHN_PRI0, DMA_CONFIG_DEFAULT );
        DmaChnSetEventControl ( I2S_RX_DMA_CHANNEL,
                                DMA_EV_START_IRQ_EN |
                                DMA_EV_START_IRQ ( I2S_RX_IRQ ) );

        DmaChnSetEvEnableFlags ( I2S_RX_DMA_CHANNEL, DMA_EV_BLOCK_DONE );

        INTSetVectorPriority ( I2S_RX_DMA_VECTOR, I2S_RX_DMA_INT_PRI );
        INTSetVectorSubPriority ( I2S_RX_DMA_VECTOR, I2S_RX_DMA_INT_SPRI );
        INTClearFlag ( I2S_RX_DMA_IRQ );
        INTEnable ( I2S_RX_DMA_IRQ, INT_ENABLED );

        i2sRxFifo.buffer = i2sRxBuff;
        i2sRxFifo.size = sizeof ( i2sRxBuff );
        i2sRxFifo.head = i2sRxBuff;
        i2sRxFifo.tail = i2sRxBuff;
    }
    #endif

    SpiChnSetBrg ( I2S_MODULE, ( I2S_BICK_DIVIDER / 2 ) - 1 );
    

    REFOCON = 0;
    REFOTRIM = 0;
    REFOCONbits.OE = TRUE;

    I2S_StopClock ();
    I2S_SetReferenceClock ( I2S_INIT_ROSEL, I2S_INIT_REFERENCE_CLOCK, I2S_INIT_SAMPLERATE_TUNING );
    I2S_SetSampleRate ( AUDIO_INIT_SAMPLE_RATE );
    I2S_SetSampleResolution ( AUDIO_INIT_SAMPLE_RESOLUTION );
    
    #ifdef I2S_TEST_200HZ
    {
        UINT32 i, j, sample;

        I2S_StartClock ();
        I2S_TxStart ();

        i = 0;
        j = 0;
        while ( i < I2S_BUFFER_SIZE )
        {
            sample = sine24[j++] / 4;
            if ( j == 240 )
            {
                j = 0;
            }
            
            i2sTxBuff[i++] = sample & 0xFF; //LSB
            i2sTxBuff[i++] = (sample >> 8) & 0xFF;    //MSB
            i2sTxBuff[i++] = (sample >> 16) & 0xFF;
            i2sTxBuff[i++] = 0;
            
            i2sTxBuff[i++] = 0;
            i2sTxBuff[i++] = 0;
            i2sTxBuff[i++] = 0;
        }

        I2S_TxTransfer ();
    }
    #endif

    return ( TRUE );
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_Task ( VOID )
{
    static UINT16 timeMark = 0;

    if ( TIME_Passed1ms ( timeMark ) < I2S_TASK_PERIOD )
    {
        return;
    }
    timeMark = TIME_Get1ms ();

    if ( i2sState.sampleRateTuning )
    {
        INT32 diff;

        if ( i2sState.txRunning || i2sState.rxRunning )
        {
            diff = ( i2sState.bufferLevel - I2S_OPTIMAL_SIZE ) * I2S_TUNING_COEFF;
            if ( diff < -i2sState.tuningRange )
            {
                diff = -i2sState.tuningRange;
            }
            if ( diff > i2sState.tuningRange )
            {
                diff = i2sState.tuningRange;
            }

            I2S_SampleRateUpdate ( i2sState.sampleRate + diff );
        }
    }

    #ifdef AUDIO_PLAYBACK
        if ( i2sState.txRunning )
        {
            if ( I2S_TxGetDataSize () == 0 )
            {
                I2S_TxStop ();
                i2sState.txRunning = FALSE;
            }
        }
    #endif
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_StartClock ( VOID )
{
    SpiChnEnable ( I2S_MODULE, TRUE );
    DmaWriteGlobalFlags ( DMA_GFLG_ON );
    REFOCONbits.ON = TRUE;

    i2sState.bufferLevel = I2S_OPTIMAL_SIZE;
    i2sState.clocking = TRUE;
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_StopClock ( VOID )
{
    DmaClrGlobalFlags ( DMA_GFLG_ON );
    SpiChnEnable ( I2S_MODULE, FALSE );
    REFOCONbits.ON = FALSE;

    i2sState.flags = 0;
}

////////////////////////////////////////////////////////////////////////////////

UINT8 I2S_SetSampleResolution ( UINT8 sampleResolution )
{
    UINT32 config, config2;

    config = SPI_OPEN_MSTEN |
             SPI_OPEN_MCLKSEL |
             SPI_OPEN_CKP_HIGH |
             SPI_OPEN_SMP_END;

    config2 = SPI_OPEN2_SPISGNEXT |
              SPI_OPEN2_AUDEN |
              I2S_INIT_AUDIO_MODE |
              SPI_OPEN2_IGNROV |
              SPI_OPEN2_IGNTUR;

    if ( sampleResolution == 32 )
    {
        i2sState.sampleResolution = 32;
        i2sState.dmaChunk = 4;
        config |= SPI_OPEN_MODE32;
    }
    else if ( sampleResolution == 24 )
    {
        i2sState.sampleResolution = 24;
        i2sState.dmaChunk = 4;
        config |= SPI_OPEN_MODE16 | SPI_OPEN_MODE32;
    }
    else
    {
        config |= SPI_OPEN_MODE16;
        i2sState.sampleResolution = 16;
        i2sState.dmaChunk = 2;
    }

    SpiChnEnable ( I2S_MODULE, FALSE );
    SpiChnConfigureEx ( I2S_MODULE, config, config2 );
    SpiChnEnable ( I2S_MODULE, TRUE );

    return ( i2sState.sampleResolution );
}

////////////////////////////////////////////////////////////////////////////////

UINT32 I2S_SetSampleRate ( UINT32 sampleRate )
{
    if ( sampleRate < 8000 )
    {
        sampleRate = 8000;
    }
    else if (sampleRate > AUDIO_MAX_SAMPLE_RATE )
    {
        sampleRate = AUDIO_MAX_SAMPLE_RATE;
    }
    i2sState.sampleRate = sampleRate;
    i2sState.tuningRange = sampleRate / 32;
    I2S_SampleRateUpdate ( sampleRate );

    return ( sampleRate );
}

////////////////////////////////////////////////////////////////////////////////

UINT32 I2S_SetReferenceClock ( UINT8 source, UINT32 clock, BOOL tuning )
{
    REFOCONbits.ON = FALSE;
    while ( REFOCONbits.ACTIVE );

    REFOCONbits.ROSEL = source;
    i2sState.referenceClock = clock;
    
    if ( i2sState.clocking )
    {
        REFOCONbits.ON = TRUE;
    }

    i2sState.sampleRateTuning = tuning;

    return ( clock );
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_SampleRateUpdate ( UINT32 sampleRate )
{
    DWORD n, m;

    m = i2sState.referenceClock / sampleRate;
    n = m >> 9;
    m = ( m & 0x000001FF ) << 23;

    REFOCONbits.RODIV = n;
    REFOTRIM = m;
    REFOCONbits.DIVSWEN = 1;

}

////////////////////////////////////////////////////////////////////////////////

INT16 I2S_GetBufferLevel ( VOID )
{
    if ( i2sState.txRunning || i2sState.rxRunning )
    {
        return ( i2sState.bufferLevel - I2S_OPTIMAL_SIZE );
    }
    else
    {
        return ( 0 );
    }
}

////////////////////////////////////////////////////////////////////////////////
#ifdef AUDIO_PLAYBACK
////////////////////////////////////////////////////////////////////////////////

VOID I2S_TxStop ( VOID )
{
    DmaChnDisable ( I2S_TX_DMA_CHANNEL );
    i2sState.txRunning = FALSE;
    memset ( i2sTxFifo.buffer, 0, i2sTxFifo.size );
}

////////////////////////////////////////////////////////////////////////////////

UINT16 I2S_TxWrite ( const UINT8 *data, UINT16 size )
{
    UINT16 written = size;

    size = I2S_TxGetFreeSize ();

    if ( written > size )
    {
        written = size;
    }

    if ( size > 0 )
    {
        I2S_FifoTxWrite ( data, written );
        size = I2S_BUFFER_SIZE - size;
        i2sState.bufferLevel = ( i2sState.bufferLevel * 15 + size + 8 ) / 16;

        if ( i2sState.txRunning != TRUE )
        {
            i2sTxFifo.tail = i2sTxFifo.buffer;
            i2sTxFifo.head = i2sTxFifo.buffer + I2S_OPTIMAL_SIZE;
            i2sTxFifo.count = I2S_OPTIMAL_SIZE;
            I2S_TxTransfer ();
            i2sState.txRunning = TRUE;
        }
    }

    i2sState.txActive = TRUE;

    return ( written );
}

///////////////////////////////////////////////////////////////////////////////

UINT16 I2S_TxGetDataSize ( VOID )
{
    UINT16 size;

    SYSTEM_InterruptDisable ();
    {
        size = DmaChnGetSrcPnt ( I2S_TX_DMA_CHANNEL );
        if (( DmaChnGetEvFlags ( I2S_TX_DMA_CHANNEL ) & DMA_EV_BLOCK_DONE ) != 0 )
        {
            size = I2S_BUFFER_SIZE;
        }
        size = i2sTxFifo.count - size;

        if ( size > I2S_BUFFER_SIZE )
        {
            size = 0;
        }
    }
    SYSTEM_InterruptEnable ();

    return ( size );
}

///////////////////////////////////////////////////////////////////////////////

UINT16 I2S_TxGetFreeSize ( VOID )
{
    return ( I2S_BUFFER_SIZE - I2S_TxGetDataSize ());
}

///////////////////////////////////////////////////////////////////////////////

VOID I2S_FifoTxWrite ( const UINT8 *addr, UINT16 size )
{
    UINT16 written;

    if ( i2sState.sampleResolution == 24 )
    {
        if ( i2sTxFifo.head + (( size / 3 ) * 4 ) <= i2sTxFifo.buffer + I2S_BUFFER_SIZE )
        {
            written = I2S_memcpy24to32 ( i2sTxFifo.head, addr, size );

            SYSTEM_InterruptDisable ();
            {
                i2sTxFifo.count += written;
                i2sTxFifo.head += written;
                if ( i2sTxFifo.head == i2sTxFifo.buffer + I2S_BUFFER_SIZE )
                {
                    i2sTxFifo.head = i2sTxFifo.buffer;
                }
            }
            SYSTEM_InterruptEnable ();
        }
        else
        {
            written = size;
            
            size = (( i2sTxFifo.buffer + I2S_BUFFER_SIZE - i2sTxFifo.head ) / 4 ) * 3;
            I2S_memcpy24to32 ( i2sTxFifo.head, addr, size );
            addr += size;
            size = written - size;
            size = I2S_memcpy24to32 ( i2sTxFifo.buffer, addr, size );

            SYSTEM_InterruptDisable ();
            {
                i2sTxFifo.count += ( written / 3 ) * 4;
                i2sTxFifo.head = i2sTxFifo.buffer + size;
            }
            SYSTEM_InterruptEnable ();
        }
    }
    else
    {
        written = size;

        if ( i2sTxFifo.head + size <= i2sTxFifo.buffer + I2S_BUFFER_SIZE )
        {
            memcpy ( i2sTxFifo.head, addr, size );

            SYSTEM_InterruptDisable ();
            {
                i2sTxFifo.count += size;
                i2sTxFifo.head += size;
                if ( i2sTxFifo.head >= i2sTxFifo.buffer + I2S_BUFFER_SIZE )
                {
                    i2sTxFifo.head = i2sTxFifo.buffer;
                }
            }
            SYSTEM_InterruptEnable ();

        }
        else
        {
            size = i2sTxFifo.buffer + I2S_BUFFER_SIZE - i2sTxFifo.head;
            memcpy ( i2sTxFifo.head, addr, size );
            addr += size;
            size = written - size;
            memcpy ( i2sTxFifo.buffer, addr, size );

            SYSTEM_InterruptDisable ();
            {
                i2sTxFifo.count += written;
                i2sTxFifo.head = i2sTxFifo.buffer + size;
            }
            SYSTEM_InterruptEnable ();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_TxTransfer ( VOID )
{
    DmaChnClrEvFlags ( I2S_TX_DMA_CHANNEL, DMA_EV_BLOCK_DONE );
    DmaChnSetTxfer ( I2S_TX_DMA_CHANNEL,
                     (VOID*) i2sTxFifo.buffer,
                     (VOID*) ( &I2S_PORT ),
                     i2sTxFifo.size,
                     i2sState.dmaChunk,
                     i2sState.dmaChunk );
    DmaChnEnable ( I2S_TX_DMA_CHANNEL );
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_DMATxInterrupt ( VOID )
{
    I2S_TxTransfer ();
    i2sTxFifo.count -= i2sTxFifo.size;
}

////////////////////////////////////////////////////////////////////////////////

UINT16 I2S_memcpy24to32 ( UINT8 *dest, const UINT8 *src, UINT16 size )
{
    UINT16 written = 0;

    while ( size > 2 )
    {
        *dest++ = *src++;
        *dest++ = *src++;
        *dest++ = *src++;
        *dest++ = 0x00;

        size -= 3;
        written += 4;
    }

    return ( written );
}

////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
#ifdef AUDIO_RECORD
////////////////////////////////////////////////////////////////////////////////

VOID I2S_RxStop ( VOID )
{
    DmaChnDisable ( I2S_RX_DMA_CHANNEL );
    memset ( i2sRxFifo.buffer, 0, i2sRxFifo.size );
    i2sState.rxRunning = FALSE;
}

////////////////////////////////////////////////////////////////////////////////

BOOL I2S_RxRead ( UINT8 *data, UINT16 size )
{
    UINT16 dmaProgress;

    if ( i2sState.rxRunning != TRUE )
    {
        i2sRxFifo.tail = i2sRxFifo.buffer + I2S_OPTIMAL_SIZE;
        i2sRxFifo.head = i2sRxFifo.buffer;
        i2sRxFifo.count = I2S_OPTIMAL_SIZE;
        I2S_RxTransfer ();
        i2sState.rxRunning = TRUE;
    }

    I2S_FifoRxRead ( data, size );

    SYSTEM_InterruptDisable ();
    {
        dmaProgress = DmaChnGetDstPnt ( I2S_RX_DMA_CHANNEL );
        if ( INTGetFlag ( I2S_RX_DMA_IRQ ) != 0 )
        {
            dmaProgress = I2S_BUFFER_SIZE;
        }
        size = I2S_BUFFER_SIZE - ( i2sRxFifo.count + dmaProgress + size );
    }
    SYSTEM_InterruptEnable ();

    i2sState.bufferLevel = ( i2sState.bufferLevel * 15 + size + 8 ) / 16;

    return ( TRUE );
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_FifoRxRead ( UINT8 *addr, UINT16 size )
{
    UINT16 read;

    if ( i2sState.sampleResolution == 24 )
    {
        read = ( size / 3 ) * 4;

        if ( i2sRxFifo.tail + read < i2sRxFifo.buffer + I2S_BUFFER_SIZE )
        {
            I2S_memcpy32to24 ( addr, i2sRxFifo.tail, read );

            SYSTEM_InterruptDisable ();
            {
                i2sRxFifo.tail += read;
                i2sRxFifo.count -= read;
            }
            SYSTEM_InterruptEnable ();
        }
        else
        {
            size = i2sRxFifo.buffer + I2S_BUFFER_SIZE - i2sRxFifo.tail;
            addr += I2S_memcpy32to24 ( addr, i2sRxFifo.tail, size );
            size = read - size;
            I2S_memcpy32to24 ( addr, i2sRxFifo.buffer, size );

            SYSTEM_InterruptDisable ();
            {
                i2sRxFifo.tail = i2sRxFifo.buffer + size;
                i2sRxFifo.count -= read;
            }
            SYSTEM_InterruptEnable ();
        }
    }
    else
    {
        read = size;

        if ( i2sRxFifo.tail + read < i2sRxFifo.buffer + I2S_BUFFER_SIZE )
        {
            memcpy ( addr, i2sRxFifo.tail, size );

            SYSTEM_InterruptDisable ();
            {
                i2sRxFifo.tail += read;
                i2sRxFifo.count -= read;
            }
            SYSTEM_InterruptEnable ();
        }
        else
        {
            size = i2sRxFifo.buffer + I2S_BUFFER_SIZE - i2sRxFifo.tail;
            memcpy ( addr, i2sRxFifo.tail, size );
            addr += size;
            size = read - size;
            memcpy ( addr, i2sRxFifo.buffer, size );

            SYSTEM_InterruptDisable ();
            {
                i2sRxFifo.tail = i2sRxFifo.buffer + size;
                i2sRxFifo.count -= read;
            }
            SYSTEM_InterruptEnable ();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_RxTransfer ( VOID )
{
    DmaChnClrEvFlags ( I2S_RX_DMA_CHANNEL, DMA_EV_BLOCK_DONE );
    DmaChnSetTxfer ( I2S_RX_DMA_CHANNEL,
                     (VOID*) ( &I2S_PORT ),
                     (VOID*) i2sRxFifo.buffer,
                     i2sState.dmaChunk,
                     i2sRxFifo.size,
                     i2sState.dmaChunk );

    DmaChnEnable ( I2S_RX_DMA_CHANNEL );
}

////////////////////////////////////////////////////////////////////////////////

VOID I2S_DMARxInterrupt ( VOID )
{
    I2S_RxTransfer ();
    i2sRxFifo.count += i2sRxFifo.size;
}

////////////////////////////////////////////////////////////////////////////////

UINT16 I2S_memcpy32to24 ( UINT8 *dest, const UINT8 *src, UINT16 size )
{
    UINT16 written = 0;

    while ( size > 3 )
    {
        *dest++ = *src++;
        *dest++ = *src++;
        *dest++ = *src++;
        *src++;

        size -= 4;
        written += 3;
    }

    return ( written );
}

///////////////////////////////////////////////////////////////////////////////
#endif
///////////////////////////////////////////////////////////////////////////////
