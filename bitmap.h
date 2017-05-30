#include "main.h"
#include "stm32_ub_vga_screen.h"
#include "stm32f4xx_flash.h" // flash memory

#ifndef SIZE_OF_BUFFER
#define SIZE_OF_BUFFER 1681
#endif

// De SIZE_OF_BUFFER moet minimaal zo groot zijn als lengte x breedte
// van de te plaatsen bitmap. Nu is gekozen voor de max. afmetingen
// van 41 bij 41 pixels.

struct bmp_file{
	uint16_t* hoogte;
	uint16_t* breedte;
	uint8_t* bmp_data;
};

/*Alleen definitie van variabelen hier in headerfile*********************/
extern uint8_t achtergrondkleur;

extern struct bmp_file voorbeeld;

extern struct bmp_file pijl_links;
extern struct bmp_file pijl_rechts;
extern struct bmp_file pijl_boven;
extern struct bmp_file pijl_onder;

extern struct bmp_file smiley_boos;
extern struct bmp_file smiley_blij;

extern const uint8_t figuur_voorbeeld[];
extern const uint16_t hoogte_bmp_voorbeeld;
extern const uint16_t breedte_bmp_voorbeeld;

extern const uint8_t figuur_boven[];
extern const uint16_t hoogte_bmp_boven;
extern const uint16_t breedte_bmp_boven;

extern const uint8_t figuur_onder[];
extern const uint16_t hoogte_bmp_onder;
extern const uint16_t breedte_bmp_onder;

extern const uint8_t figuur_links[];
extern const uint16_t hoogte_bmp_links;
extern const uint16_t breedte_bmp_links;

extern const uint8_t figuur_rechts[];
extern const uint16_t hoogte_bmp_rechts;
extern const uint16_t breedte_bmp_rechts;

extern const uint8_t figuur_boos[];
extern const uint16_t hoogte_bmp_boos;
extern const uint16_t breedte_bmp_boos;

extern const uint8_t figuur_blij[];
extern const uint16_t hoogte_bmp_blij;
extern const uint16_t breedte_bmp_blij;

/*Functies declareren voor bitmaps***************************************/
extern void init_bmp();
extern void vga_place_bmp(uint16_t xp, uint16_t yp, struct bmp_file *bmp);
