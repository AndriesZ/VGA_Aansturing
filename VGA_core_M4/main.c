//--------------------------------------------------------------
// File     : main.c
// Datum    : 30.03.2016
// Version  : 1.0
// Autor    : UB
// mods by	: J.F. van der Bent
// CPU      : STM32F4
// IDE      : CooCox CoIDE 1.7.x
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------

#include "main.h"
#include "stm32_ub_vga_screen.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	UART_init();
	UART_INT_init();
	LCD_init();

	int X_LinksBoven = 100;
	int X_RechtsOnder = 150;
	int Y_LinksBoven = 100;
	int Y_RechtsOnder = 150;
	int LijnDikte = 1;
	int Vol = 0;

	int X1 = 50;	//100;
	int Y1 = 20;	//150;
	int X2 = 80;	//50;
	int Y2 = 142;	//200;
	int Kleur = 128;
	//  uint32_t n;

	char greeting[] = "Hello/n";
	char *adress;
	adress = &greeting;
	char test = 'k';

	adress = &greeting;

	SystemInit(); // System speed to 168MHz

	UB_VGA_Screen_Init(); // Init VGA-Screen

	UB_VGA_FillScreen(VGA_COL_BLACK);
	int k;
	//Vierkant(X_LinksBoven, Y_LinksBoven, X_RechtsOnder, Y_RechtsOnder, LijnDikte, Vol);

	//Lijn(X1, Y1, X2, Y2, LijnDikte, Kleur);

	Driehoek(10,10,55,70,30,90,1,23);
	Driehoek(23,65,212,76,98,15,2,45);
	Driehoek(123,77,45,222,45,191,5,67);
	Driehoek(135-20,168,245-20,28,280-20,111,1,89);
	Driehoek(135-5,168,245-5,28,280-5,111,5,234);
	Driehoek(135+20,168,245+20,28,280+20,111,10,123);



	LED_init();
	//UART_putint(5);
	//UART_putchar('d');
	LCD_clear();

	//LCD_puts(adress);
	//LCD_putchar('k');

	//LCD_put("UAR");

	//LCD_put(adress);
	//UART_puts(adress);
	//UART_puts(greeting);


  while(1)
  {
//	  UART_gets(greeting);
//	  UART_puts(greeting);
  }
}




