/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PWM_PAL0.h
**     Project     : Boson_VCU_MPC5775B_Z7_0
**     Processor   : MPC5775B_416
**     Component   : pwm_pal
**     Version     : Component SDK_S32_PA_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32_PA_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2023-08-25, 11:46, # CodeGen: 53
**     Contents    :
**         PWM_Init                    - status_t PWM_Init(const pwm_instance_t * const instance,pwm_global_config_t *...
**         PWM_UpdateDuty              - status_t PWM_UpdateDuty(const pwm_instance_t * const instance,uint8_t...
**         PWM_UpdatePeriod            - status_t PWM_UpdatePeriod(const pwm_instance_t * const instance,uint8_t...
**         PWM_OverwriteOutputChannels - status_t PWM_OverwriteOutputChannels(const pwm_instance_t * const...
**         PWM_Deinit                  - status_t PWM_Deinit(const pwm_instance_t * const instance);
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
** @file PWM_PAL0.h
** @version 01.00
*/         
/*!
**  @addtogroup PWM_PAL0_module PWM_PAL0 module documentation
**  @{
*/         
#ifndef PWM_PAL0_H
#define PWM_PAL0_H

/* MODULE PWM_PAL0. includes */

/* Include inherited beans */
#include "clockMan1.h"
#include "Cpu.h"
#include "pwm_pal.h"


/*! @brief Device instance configuration structure */
extern pwm_instance_t PWM_PAL0Instance;

/*! @brief Declarations */
extern pwm_global_config_t PWM_PAL0Configs;


  
#endif
/* ifndef PWM_PAL0_H */
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

