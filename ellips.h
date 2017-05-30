//#include "main.h"
//#include "stm32_ub_vga_screen.h"
#include "stm32f4xx.h"
#include "math.h"

typedef enum
{
	NO_ERROR,
	ERROR_OUT_OF_BOUNDARIES,
	ERROR_INVALID_INPUT
} errors;

extern void place_ellips(uint16_t xp,
						 uint16_t yp,
						 uint16_t radius_x,
						 uint16_t radius_y,
						 uint16_t lijndikte,
						 uint8_t line_color,
						 uint8_t fill_color);
