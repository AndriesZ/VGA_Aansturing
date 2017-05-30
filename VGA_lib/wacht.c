#include "wacht.h"
#include "stm32f4xx_tim.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32_ub_vga_screen.h"

/**
  * @brief  Wacht voor een ingevoerde tijd tot het volgende commando wordt uitgevoerd.
  * @param  msecs: het aantal milliseconde dat gewacht moet worden.
  * @retval None

  */
void wacht_ms(uint16_t msecs)
{
	long i;
	for(i=msecs*WAIT_X_MSECS;i>0;i--)
		asm("nop");
}
