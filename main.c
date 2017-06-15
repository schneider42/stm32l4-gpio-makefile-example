/**
  ******************************************************************************
  * Based on GPIO/GPIO_IOToggle/Src/main.c from MCD Application Team
  */

/* Includes ------------------------------------------------------------------*/
#include "clock.h"
#include "stm32l4xx_hal.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define LED3_PIN                           GPIO_PIN_3
#define LED3_GPIO_PORT                     GPIOB
#define LED3_GPIO_CLK_ENABLE()             __HAL_RCC_GPIOB_CLK_ENABLE()  
#define LED3_GPIO_CLK_DISABLE()            __HAL_RCC_GPIOB_CLK_DISABLE()  

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
    GPIO_InitTypeDef  GPIO_InitStruct;
    /* This sample code shows how to use GPIO HAL API to toggle LED3 IO
       in an infinite loop. */

    /* STM32L4xx HAL library initialization:
       - Configure the Flash prefetch
       - Systick timer is configured by default as source of time base, but user 
            can eventually implement his proper time base source (a general purpose 
            timer for example or other time source), keeping in mind that Time base 
            duration should be kept 1ms since PPP_TIMEOUT_VALUEs are defined and 
            handled in milliseconds basis.
       - Set NVIC Group Priority to 4
       - Low Level Initialization
       */
    HAL_Init();

    /* Configure the system clock to 80 MHz */
    SystemClock_Config();

    /* -1- Enable GPIO Clock (to be able to program the configuration registers) */
    LED3_GPIO_CLK_ENABLE();

    /* -2- Configure IO in output push-pull mode to drive external LEDs */
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull  = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;

    GPIO_InitStruct.Pin = LED3_PIN;
    HAL_GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);

    /* -3- Toggle IO in an infinite loop */
    while (1)
    {
        HAL_GPIO_TogglePin(LED3_GPIO_PORT, LED3_PIN);
        /* Insert delay 100 ms */
        HAL_Delay(100);
    }
}
