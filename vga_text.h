#include "stm32f4xx.h"
#include "stm32_ub_vga_screen.h"

typedef enum style{
	normal = 1,
	bold = 2,
	italic = 4 // in machten van 2, zodat ook combinaties mogelijk zijn
} font_style;

typedef enum font{
	standard,
	comic_sans
} text_font;

typedef struct text_bmp{
	uint8_t* bmp_data;
	uint16_t hoogte;
	uint16_t breedte;
} FONT;

extern font_style styles;
extern text_font font;

extern FONT lettertype_1;
extern const uint8_t font1[];
extern const uint16_t hoogte_font1;
extern const uint16_t breedte_font1;

extern FONT lettertype_2;
extern const uint8_t font2[];
extern const uint16_t hoogte_font2;
extern const uint16_t breedte_font2;

extern void init_fonts();
extern void vga_place_text(uint16_t xp, uint16_t yp, char* text, uint8_t kleur, FONT fontx, font_style style);

