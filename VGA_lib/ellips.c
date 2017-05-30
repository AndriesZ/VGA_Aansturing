#include "ellips.h"

void place_ellips(uint16_t xp, uint16_t yp, uint16_t radius_x,
				  uint16_t radius_y, uint16_t lijndikte, uint8_t line_color,
				  /*bool fill_shape*/ uint8_t fill_color)
{
	int i, j, k; // count for loop
	int y1, y2; // upper and lower boundaries of ellips

	// input checken:
	if( (xp < 0) || (yp < 0) || (radius_x <= 0) || (radius_y <= 0) )
	{
		//return ERROR_OUT_OF_BOUNDARIES;
	}

	// omlijning
	for(k = 0; k < lijndikte; k++)
	{
		for(i=(-1 * radius_x); i < radius_x + 1; i++)
		{
			y1 =      sqrt( radius_y * radius_y - (radius_y * radius_y * i * i)/(radius_x * radius_x) ) + k;
			y2 = -1 * sqrt( radius_y * radius_y - (radius_y * radius_y * i * i)/(radius_x * radius_x) ) - k;
			UB_VGA_SetPixel(i + xp + radius_x, y1 + yp + radius_y, line_color);
			UB_VGA_SetPixel(i + xp + radius_x, y2 + yp + radius_y, line_color);
		}
	}

	// opvulling:
//	if(fill_shape == TRUE)
//	{
		for(i = (-1 * radius_x); i < radius_x; i++)
		{
			for(j = (-1 * radius_y); j < radius_y; j++)
			{
				y1 =    sqrt( radius_y * radius_y - (radius_y * radius_y * i * i)/(radius_x * radius_x) );
				y2 = -1*sqrt( radius_y * radius_y - (radius_y * radius_y * i * i)/(radius_x * radius_x) );
				if((j < y1) && (j > y2))
				{
					UB_VGA_SetPixel(i + xp + radius_x, j + yp + radius_y, fill_color);
				}
			}
		}
//	}
} // end of function ellips
