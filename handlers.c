/*
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2010, Roel Verdult
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holders nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

// Declare a weak alias macro as described in the GCC manual[1][2]
#define WEAK_ALIAS(f) __attribute__ ((weak, alias (#f)));
#define SECTION(s) __attribute__ ((section(s)))

/******************************************************************************
 * Forward undefined IRQ handlers to an infinite loop function. The Handlers
 * are weakly aliased which means that (re)definitions will overide these.
 *****************************************************************************/

void irq_undefined() {
  // Do nothing when occured interrupt is not defined, just keep looping
  while(1);
}

void WWDG_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void PVD_PVM_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TAMP_STAMP_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void RTC_WKUP_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void FLASH_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void RCC_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI0_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI2_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI3_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI4_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel2_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel3_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel4_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel5_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel6_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA1_Channel7_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void ADC1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void CAN1_TX_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void CAN1_RX0_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void CAN1_RX1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void CAN1_SCE_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI9_5_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM1_BRK_TIM15_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM1_UP_TIM16_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM1_TRG_COM_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM1_CC_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM2_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void I2C1_EV_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void I2C1_ER_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void SPI1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void USART1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void USART2_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void EXTI15_10_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void RTC_Alarm_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void SPI3_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM6_DAC_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TIM7_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel2_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel3_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel4_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel5_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void COMP_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void LPTIM1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void LPTIM2_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void USB_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel6_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void DMA2_Channel7_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void LPUART1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void QUADSPI_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void I2C3_EV_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void I2C3_ER_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void SAI1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void SWPMI1_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void TSC_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void RNG_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void FPU_IRQHandler(void)      WEAK_ALIAS(irq_undefined)
void CRS_IRQHandler(void)      WEAK_ALIAS(irq_undefined)

/*****************************************************************************
 * Forward undefined fault handlers to an infinite loop function. The Handlers
 * are weakly aliased which means that (re)definitions will overide these.
 ****************************************************************************/

void fault_undefined() {
  // Do nothing when occured interrupt is not defined, just keep looping
  while(1);
}

void empty() {}

void NMI_Handler(void)          WEAK_ALIAS(fault_undefined)
void HardFault_Handler(void)    WEAK_ALIAS(fault_undefined)
void MemManage_Handler(void)    WEAK_ALIAS(fault_undefined)
void BusFault_Handler(void)     WEAK_ALIAS(fault_undefined)
void UsageFault_Handler(void)   WEAK_ALIAS(fault_undefined)
void SVCall_Handler(void)       WEAK_ALIAS(fault_undefined)
void DebugMon_Handler(void)     WEAK_ALIAS(fault_undefined)
void PendSV_Handler(void)       WEAK_ALIAS(fault_undefined)
void SysTick_Handler(void)      WEAK_ALIAS(empty)

/******************************************************************************
 * Forward undefined IRQ handlers to an infinite loop function. The Handlers
 * are weakly aliased which means that (re)definitions will overide these.
 *****************************************************************************/

// Prototype the entry values, which are handled by the linker script
extern void* stack_entry;
extern void boot_entry(void);

// Defined irq vectors using simple c code following the description in a white
// paper from ARM[3] and code example from Simonsson Fun Technologies[4].
// These vectors are placed at the memory location defined in the linker script
const void *vectors[] SECTION(".irq-vectors") =
{
  // Stack and program reset entry point
  &stack_entry,          // The initial stack pointer
  boot_entry,            // The reset handler

  // Various fault handlers
  NMI_Handler,           // The NMI handler
  HardFault_Handler,     // The hard fault handler
  MemManage_Handler,     // The MPU fault handler
  BusFault_Handler,      // The bus fault handler
  UsageFault_Handler,    // The usage fault handler
  0,                     // Reserved
  0,                     // Reserved
  0,                     // Reserved
  0,                     // Reserved
  SVCall_Handler,        // SVCall handler
  DebugMon_Handler,      // Debug monitor handler
  0,                     // Reserved
  PendSV_Handler,        // The PendSV handler
  SysTick_Handler,       // The SysTick handler

  /* External Interrupts */
  WWDG_IRQHandler,                   /* Window WatchDog              */
  PVD_PVM_IRQHandler,                    /* PVD through EXTI Line detection */
  TAMP_STAMP_IRQHandler,             /* Tamper and TimeStamps through the EXTI line */
  RTC_WKUP_IRQHandler,               /* RTC Wakeup through the EXTI line */
  FLASH_IRQHandler,                  /* FLASH                        */
  RCC_IRQHandler,                    /* RCC                          */
  EXTI0_IRQHandler,                  /* EXTI Line0                   */
  EXTI1_IRQHandler,                  /* EXTI Line1                   */
  EXTI2_IRQHandler,                  /* EXTI Line2                   */
  EXTI3_IRQHandler,                  /* EXTI Line3                   */
  EXTI4_IRQHandler,                  /* EXTI Line4                   */
  DMA1_Channel1_IRQHandler,          /* DMA1 Channel 0                */
  DMA1_Channel2_IRQHandler,          /* DMA1 Channel 1                */
  DMA1_Channel3_IRQHandler,          /* DMA1 Channel 2                */
  DMA1_Channel4_IRQHandler,          /* DMA1 Channel 3                */
  DMA1_Channel5_IRQHandler,          /* DMA1 Channel 4                */
  DMA1_Channel6_IRQHandler,          /* DMA1 Channel 5                */
  DMA1_Channel7_IRQHandler,          /* DMA1 Channel 6                */
  ADC1_IRQHandler,                   /* ADC1, ADC2 and ADC3s         */
  CAN1_TX_IRQHandler,                /* CAN1 TX                      */
  CAN1_RX0_IRQHandler,               /* CAN1 RX0                     */
  CAN1_RX1_IRQHandler,               /* CAN1 RX1                     */
  CAN1_SCE_IRQHandler,               /* CAN1 SCE                     */
  EXTI9_5_IRQHandler,                /* External Line[9:5]s          */
  TIM1_BRK_TIM15_IRQHandler,         /* TIM1 Break and TIM15          */
  TIM1_UP_TIM16_IRQHandler,          /* TIM1 Update and TIM16        */
  TIM1_TRG_COM_IRQHandler,           /* TIM1 Trigger and Commutation*/
  TIM1_CC_IRQHandler,                /* TIM1 Capture Compare         */
  TIM2_IRQHandler,                   /* TIM2                         */
  0,
  0,
  I2C1_EV_IRQHandler,                /* I2C1 Event                   */
  I2C1_ER_IRQHandler,                /* I2C1 Error                   */
  0,
  0,
  SPI1_IRQHandler,                   /* SPI1                         */
  0,
  USART1_IRQHandler,                 /* USART1                       */
  USART2_IRQHandler,                 /* USART2                       */
  0,
  EXTI15_10_IRQHandler,              /* External Line[15:10]s        */
  RTC_Alarm_IRQHandler,              /* RTC Alarm (A and B) through EXTI Line */
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  SPI3_IRQHandler,                   /* SPI3                         */
  0,
  0,
  TIM6_DAC_IRQHandler,               /* TIM6 and DAC1&2 underrun errors */
  TIM7_IRQHandler,                   /* TIM7                         */
  DMA2_Channel1_IRQHandler,          /* DMA2 Channel 0                */
  DMA2_Channel2_IRQHandler,          /* DMA2 Channel 1                */
  DMA2_Channel3_IRQHandler,          /* DMA2 Channel 2                */
  DMA2_Channel4_IRQHandler,          /* DMA2 Channel 3                */
  DMA2_Channel5_IRQHandler,          /* DMA2 Channel 4                */
  0,
  0,
  0,
  COMP_IRQHandler,
  LPTIM1_IRQHandler,
  LPTIM2_IRQHandler,
  USB_IRQHandler,
  DMA2_Channel6_IRQHandler,          /* DMA2 Channel 5                */
  DMA2_Channel7_IRQHandler,          /* DMA2 Channel 6                */
  LPUART1_IRQHandler,
  QUADSPI_IRQHandler,
  I2C3_EV_IRQHandler,                /* I2C3 event                   */
  I2C3_ER_IRQHandler,                /* I2C3 error                   */
  SAI1_IRQHandler,
  0,
  SWPMI1_IRQHandler,
  TSC_IRQHandler,
  0,
  0,
  RNG_IRQHandler,
  FPU_IRQHandler,                    /* FPU                          */
  CRS_IRQHandler
};

/******************************************************************************
 * References
 *  [1] http://gcc.gnu.org/onlinedocs/gcc/Function-Attributes.html
 *  [2] http://gcc.gnu.org/onlinedocs/gcc/Variable-Attributes.html
 *  [3] http://www.arm.com/files/pdf/Cortex-M3_programming_for_ARM7_developers.pdf
 *  [4] http://fun-tech.se/stm32/OlimexBlinky/mini.php
 *****************************************************************************/

