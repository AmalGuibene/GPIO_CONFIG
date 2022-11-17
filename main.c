/**
  ******************************************************************************
  * @file    main.c
  * @author  Guibene Amal
  * @brief   GPIO DRIVER
  * @version V1.0.0
  * @date    17-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/


#include "gpio.h"    
/* Private define ------------------------------------------------------------*/
   
int main()
{
 // GPIO_Clock_Enable( (uint32_t*) 0x40020401);
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config (GPIOD, PIN12, OUTPUT, OUTPUT_PUSH_PULL);
  
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/
