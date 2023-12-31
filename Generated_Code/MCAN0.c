/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : MCAN0.c
**     Project     : Boson_VCU_MPC5775B_Z7_0
**     Processor   : MPC5775B_416
**     Component   : mcan
**     Version     : Component SDK_S32_PA_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32_PA_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2023-01-19, 15:59, # CodeGen: 0
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file MCAN0.c
** @version 01.00
*/         
/*!
**  @addtogroup MCAN0_module MCAN0 module documentation
**  @{
*/         

/* MODULE MCAN0.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variable will be used in other source file that user initialize
 * to use this module.
 */

/* MODULE MCAN0. */

#include "MCAN0.h"

/*! MCAN0 configuration structure */

 mcan_state_t MCAN0_State; 

const mcan_id_table_t MCAN0_mcan_id_table_t0_0 = {
    .filterType = FILTER_TYPE_RANGE_ID,
    .filterConfig = FILTER_CONF_DISABLE,
    .isExtendedFrame = false,
    .id1 = 0u,
    .id2 = 0u
};
const mcan_id_table_t * MCAN0_mcan_id_table_t0[] = {
    &MCAN0_mcan_id_table_t0_0,
};


const mcan_user_config_t MCAN0_mcan_user_config_t0 = {
    
    .rx_num_mb = 30u,
    .tx_num_mb = 2u,
    .num_id_filters = 0u,
    .rx_fifo_needed = MCAN_RXFIFO_DISABLED,
    .mcanMode = MCAN_NORMAL_MODE,
    .payload = MCAN_PAYLOAD_SIZE_8,
    .fd_enable = false,
    .bitrate = {
        .propSeg = 119u,
        .phaseSeg1 = 19u,
        .phaseSeg2 = 19u,
        .preDivider = 0u,
        .rJumpwidth = 1u
    },
    .bitrate_cbt = {
        .propSeg = 0u,
        .phaseSeg1 = 0u,
        .phaseSeg2 = 0u,
        .preDivider = 0u,
        .rJumpwidth = 1u
    },
    .fifoConfigs = NULL,
    .filterConfigs = NULL
};


/* END MCAN0. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/

