#include "stm32f4xx.h"

#define WAIT_X_MSECS (168/4*500) // 4 klokslagen per statement, pwm 50%

extern void wacht(uint16_t msecs);
