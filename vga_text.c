/*
 *  Externe bron: http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */

#include "vga_text.h"

#define CHARS_IN_FONT 26

// declareer fonts:
FONT lettertype_1;

const uint8_t font1[] = {
		255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,182,146,146,109,255,255,255,255,255,255,255,255,255,255,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,182,146,255,255,255,255,255,182,0,0,0,0,36,36,146,255,255,255,255,255,255,255,255,255,255,219,219,219,255,255,255,255,109,109,182,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,219,255,255,255,255,255,73,36,0,0,0,0,0,0,182,255,255,255,255,255,255,182,36,0,0,0,109,255,255,255,255,219,255,255,255,255,255,255,255,255,255,255,255,255,255,219,146,146,255,255,255,255,255,255,255,255,219,219,219,219,219,219,219,255,255,255,219,73,219,255,255,255,255,0,146,255,255,255,219,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,36,73,109,109,146,219,255,255,255,255,255,255,255,255,182,182,255,255,255,255,255,255,255,219,146,109,109,109,182,255,255,255,255,255,255,255,109,0,0,36,109,182,255,255,255,255,255,255,219,182,146,109,73,36,36,36,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,255,255,255,255,219,146,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,0,219,255,255,255,255,0,73,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,182,73,0,0,0,255,255,255,255,255,109,0,0,0,0,0,0,0,0,219,255,255,255,255,255,182,36,0,0,0,0,182,255,255,219,0,0,0,0,146,255,255,255,255,255,255,255,255,146,109,36,0,0,0,0,73,255,255,255,219,0,0,0,0,0,0,0,0,109,255,255,255,255,255,73,0,0,0,0,0,0,255,255,109,0,73,255,255,255,255,109,36,109,255,255,255,219,73,0,0,0,0,182,255,255,255,255,255,255,182,0,0,0,0,0,0,0,219,255,255,109,0,219,255,255,255,146,0,0,219,255,219,0,0,219,255,255,255,255,255,255,255,255,255,146,0,146,255,255,255,73,73,255,255,255,255,255,255,146,146,255,255,255,73,146,255,255,255,255,255,255,255,146,109,146,255,255,255,255,255,255,219,0,0,0,0,0,0,109,255,255,255,255,255,219,36,0,0,0,182,255,255,255,255,255,146,0,0,0,0,0,0,182,255,255,255,255,219,0,0,0,0,0,0,73,255,255,255,255,146,0,0,0,0,0,0,0,0,255,255,255,255,182,109,146,255,255,219,146,182,255,255,255,219,73,255,255,255,255,255,182,0,73,255,255,255,36,219,255,255,255,255,255,182,0,255,255,255,255,109,109,255,255,255,146,36,219,255,255,255,146,0,109,255,255,255,182,0,73,255,255,255,109,0,0,0,0,0,0,0,73,255,255
		,255,255,182,0,36,255,73,0,182,255,255,255,255,109,0,146,255,255,255,219,0,0,0,255,255,255,255,73,0,0,0,0,0,0,109,255,255,219,0,0,0,0,0,0,146,255,255,255,255,255,219,0,0,0,0,0,0,0,0,255,255,255,219,0,0,0,0,0,0,36,109,219,255,255,255,255,36,0,0,0,0,0,0,0,255,255,73,0,73,255,255,255,255,109,0,73,255,255,255,219,0,0,0,0,146,219,255,255,255,255,255,255,182,0,0,0,0,0,0,0,219,255,255,146,0,219,255,255,255,0,0,73,255,255,255,0,0,219,255,255,255,255,255,255,255,255,255,109,0,73,255,255,255,0,36,255,255,255,255,255,146,0,0,255,255,255,0,73,255,255,255,255,255,182,0,0,0,0,36,219,255,255,255,255,219,0,0,109,146,109,0,0,146,255,255,255,219,0,0,73,73,0,36,255,255,255,255,255,146,0,109,255,219,146,36,0,182,255,255,255,146,0,146,255,182,73,0,146,255,255,255,255,146,0,0,0,0,0,0,36,109,255,255,255,255,73,0,73,255,255,109,0,36,255,255,255,182,0,146,255,255,255,255,73,0,109,255,255,255,0,182,255,109,36,255,255,146,36,255,255,255,255,36,0,219,255,255,0,0,146,255,255,255,182,0,0,255,255,255,73,0,219,255,255,255,73,0,0,0,0,0,0,0,109,255,255
		,255,255,109,0,255,255,182,0,109,255,255,255,255,146,0,182,255,255,255,255,182,0,0,146,255,255,182,0,0,0,0,0,0,0,73,255,255,219,0,36,219,109,0,0,0,73,255,255,255,255,219,0,0,0,0,0,0,36,73,255,255,255,219,0,73,146,219,255,255,255,255,255,255,255,255,73,0,0,73,182,255,255,146,36,255,255,36,0,109,255,255,255,255,109,0,73,255,255,255,255,255,219,0,36,255,255,255,255,255,255,255,255,219,36,73,73,0,36,146,146,255,255,255,182,0,219,255,255,36,0,73,255,255,255,255,0,0,219,255,255,255,255,255,255,255,255,255,73,0,36,255,255,255,0,0,255,255,255,255,255,109,0,0,219,255,255,73,73,255,255,255,255,219,0,0,182,219,73,0,73,255,255,255,255,219,0,73,255,255,255,109,0,73,255,255,255,73,0,146,255,255,73,0,146,255,255,255,255,182,0,146,255,255,255,255,0,36,255,255,255,146,36,255,255,255,255,255,255,255,255,255,255,146,0,0,73,0,73,255,255,255,255,255,255,255,36,0,146,255,255,182,0,0,255,255,255,255,36,0,255,255,255,255,0,0,182,255,255,255,0,182,255,36,0,182,255,109,73,255,255,255,255,219,0,73,255,73,0,146,255,255,255,255,255,73,0,146,255,255,0,146,255,255,255,255,146,73,109,182,219,255,146,0,219,255,255
		,255,255,36,73,255,255,219,0,73,255,255,255,255,146,0,182,255,255,255,255,182,0,0,146,255,255,109,0,36,182,219,255,255,255,255,255,255,219,0,73,255,255,255,109,0,0,36,255,255,255,219,0,73,146,182,219,255,255,255,255,255,255,219,0,146,255,255,255,255,255,255,255,255,255,219,0,0,182,255,255,255,255,255,255,255,255,73,0,146,255,255,255,255,146,0,73,255,255,255,255,255,255,0,36,255,255,255,255,255,255,255,255,255,255,255,182,0,73,255,255,255,255,255,219,0,219,255,146,0,109,255,255,255,255,255,36,0,219,255,255,255,255,255,255,255,255,255,73,0,0,255,255,182,0,0,255,255,255,255,255,109,0,0,73,255,255,109,73,255,255,255,255,73,0,146,255,255,255,0,0,182,255,255,255,219,0,73,255,255,255,182,0,36,255,255,255,36,73,255,255,255,219,0,36,255,255,255,255,219,0,146,255,255,255,255,36,0,255,255,255,146,36,255,255,255,255,255,255,255,255,255,255,255,146,255,255,0,36,255,255,255,255,255,255,255,0,0,219,255,255,255,0,0,219,255,255,255,219,0,109,255,255,182,0,0,255,255,255,255,0,182,255,0,0,73,255,73,146,255,255,255,255,255,146,0,182,0,73,255,255,255,255,255,255,255,36,36,255,146,36,255,255,255,255,255,255,255,255,255,255,219,0,109,255,255,255
		,255,255,0,146,255,255,255,0,0,255,255,255,255,146,0,146,255,255,255,255,73,0,36,255,255,255,36,36,255,255,255,255,255,255,255,255,255,219,0,36,255,255,255,255,146,0,0,146,255,255,219,0,182,255,255,255,255,255,255,255,255,255,219,0,146,255,255,255,219,255,255,255,255,255,109,0,219,255,255,255,255,255,255,255,255,255,73,0,182,255,255,255,255,182,0,73,255,255,255,255,255,255,0,36,255,255,255,255,255,255,255,255,255,255,255,182,0,36,255,255,255,255,255,219,0,219,219,0,146,255,255,255,255,255,255,36,0,219,255,255,255,255,255,255,255,255,255,73,0,0,219,255,146,0,0,219,255,255,255,255,109,0,0,0,255,255,146,73,255,255,255,255,36,36,255,255,255,255,109,0,109,255,255,255,219,0,73,255,255,255,146,0,109,255,255,255,0,182,255,255,255,255,109,0,255,255,255,255,255,0,146,255,255,255,219,0,36,255,255,255,146,36,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0,0,255,255,255,255,255,255,219,0,0,255,255,255,255,73,0,219,255,255,255,255,36,73,255,255,109,0,36,255,255,255,255,0,182,255,0,36,36,255,36,219,255,255,255,255,255,255,36,0,0,255,255,255,255,255,255,255,255,146,0,109,36,109,255,255,255,255,255,255,255,255,255,255,73,0,255,255,255,255
		,255,182,0,182,255,255,255,36,0,219,255,255,255,146,0,146,255,255,219,73,0,36,219,255,255,255,36,109,255,255,255,255,255,255,255,255,255,219,0,36,255,255,255,255,255,0,0,109,255,255,219,0,109,182,182,146,109,182,255,255,255,255,219,0,36,36,0,0,0,73,255,255,255,255,36,109,255,255,255,255,255,255,255,255,255,255,73,0,109,182,182,219,255,182,0,73,255,255,255,255,255,219,0,36,255,255,255,255,255,255,255,255,255,255,255,182,0,0,255,255,255,255,255,219,0,182,36,36,73,255,255,255,255,255,255,73,0,219,255,255,255,255,255,255,255,255,255,73,0,36,182,255,73,0,36,219,255,255,255,255,109,36,36,0,146,255,182,73,255,255,255,255,0,109,255,255,255,255,146,0,73,255,255,255,255,0,73,255,255,219,0,0,219,255,255,219,0,219,255,255,255,255,146,0,255,255,255,255,255,0,146,255,255,255,73,0,146,255,255,255,219,0,73,146,109,109,146,146,255,255,255,255,255,255,255,255,0,0,255,255,255,255,255,255,182,0,73,255,255,255,255,182,0,219,255,255,255,255,146,0,255,255,73,0,146,255,255,255,255,0,182,182,0,109,0,255,36,219,255,255,255,255,255,255,182,0,109,255,255,255,255,255,255,255,255,255,0,0,0,219,255,255,255,255,255,255,255,255,255,146,0,182,255,255,255,255
		,255,146,0,219,255,255,255,36,0,146,255,255,255,182,0,73,146,73,0,0,36,255,255,255,255,255,36,146,255,255,255,255,255,255,255,255,255,219,0,0,255,255,255,255,255,0,0,146,255,255,219,0,0,0,0,0,0,36,255,255,255,255,219,0,0,0,0,0,0,0,255,255,255,255,0,219,255,255,219,109,73,73,73,146,255,255,73,0,0,0,0,0,0,0,0,36,255,255,255,255,255,219,0,0,255,255,255,255,255,255,255,255,255,255,255,182,0,0,255,255,255,255,255,219,0,0,109,182,0,219,255,255,255,255,255,109,0,219,255,255,255,255,255,255,255,255,255,73,36,146,73,255,0,36,73,182,255,255,255,255,109,36,146,0,36,255,182,73,255,255,255,255,0,182,255,255,255,255,146,0,73,255,255,255,255,0,73,219,109,0,36,219,255,255,255,219,0,255,255,255,255,255,146,0,255,255,255,255,255,0,146,255,255,73,0,109,255,255,255,255,255,109,0,0,0,0,0,0,73,255,255,255,255,255,255,255,0,0,255,255,255,255,255,255,182,0,109,255,255,255,255,219,0,219,255,255,255,255,255,0,146,255,0,0,219,255,255,255,255,0,146,146,73,146,0,182,0,219,255,255,255,255,255,255,73,0,109,255,255,255,255,255,255,255,255,255,146,0,36,255,255,255,255,255,255,255,255,255,219,0,73,255,255,255,255,255
		,255,73,0,255,255,219,182,0,0,109,255,255,255,182,0,0,0,0,0,0,0,0,146,255,255,255,36,109,255,255,255,255,255,255,255,255,255,219,0,0,255,255,255,255,182,0,0,255,255,255,219,0,0,0,0,0,0,0,255,255,255,255,219,0,0,0,0,36,36,109,255,255,255,255,0,255,255,255,73,0,0,0,0,109,255,255,73,0,0,0,0,0,0,0,0,0,255,255,255,255,255,219,0,0,255,255,255,255,255,255,255,255,255,255,255,182,0,0,255,255,255,255,255,219,0,73,255,219,0,73,255,255,255,255,255,146,0,219,255,255,255,255,255,255,255,255,255,73,36,219,0,255,0,73,109,109,255,255,255,255,109,36,255,0,0,182,182,73,255,255,255,255,0,182,255,255,255,255,182,0,73,255,255,255,255,0,0,0,36,182,255,255,255,255,255,219,0,255,255,255,255,255,146,0,255,255,255,255,255,0,36,36,0,0,182,255,255,255,255,255,255,255,182,73,36,36,0,0,36,255,255,255,255,255,255,255,0,0,255,255,255,255,255,255,182,0,146,255,255,255,255,255,0,219,255,255,255,255,255,109,36,146,0,0,255,255,255,255,255,0,146,146,146,219,0,146,0,255,255,255,255,255,255,219,0,0,0,255,255,255,255,255,255,255,255,255,255,0,109,255,255,255,255,255,255,255,255,255,36,0,219,255,255,255,255,255
		,255,36,0,0,0,0,0,0,0,36,255,255,255,182,0,36,146,182,182,182,73,0,0,73,255,255,36,73,255,255,255,255,255,255,255,255,255,219,0,0,255,255,255,255,36,0,182,255,255,255,219,0,109,219,219,219,255,255,255,255,255,255,219,0,182,255,255,255,255,255,255,255,255,255,0,255,255,255,73,0,0,0,0,109,255,255,73,0,146,182,219,219,255,182,0,0,255,255,255,255,255,219,0,0,219,255,255,255,255,255,255,182,219,255,255,182,0,0,255,255,255,255,255,219,0,109,255,255,0,0,219,255,255,255,255,146,0,219,255,255,255,255,219,219,255,255,255,73,73,255,36,219,0,146,146,73,255,255,255,255,109,36,255,182,0,73,182,73,255,255,255,255,0,182,255,255,255,255,146,0,73,255,255,255,255,0,0,182,255,255,255,255,255,255,255,255,0,219,255,255,255,109,109,0,255,255,255,255,255,0,0,0,109,0,109,255,255,255,255,255,255,255,255,255,255,255,36,0,73,255,255,255,255,255,255,255,0,0,219,255,255,255,255,255,182,0,146,255,255,255,255,219,0,219,255,255,255,255,255,182,0,0,0,109,255,255,255,255,255,0,146,36,182,255,0,73,0,255,255,255,255,255,255,109,0,182,0,182,255,255,255,255,255,255,255,255,255,0,182,255,255,255,255,255,255,255,255,146,0,146,255,255,255,255,255,255
		,255,0,0,36,36,36,36,0,0,0,255,255,255,219,0,36,255,255,255,255,255,73,0,0,255,255,73,0,255,255,255,255,255,219,255,255,255,219,0,0,219,255,255,36,0,146,255,255,255,255,219,0,146,255,255,255,255,255,255,255,255,255,219,0,182,255,255,255,255,255,255,255,255,255,0,255,255,255,255,255,255,182,0,109,255,255,73,0,219,255,255,255,255,146,0,0,255,255,255,255,255,219,0,0,182,255,255,255,255,255,109,0,219,255,255,182,0,0,255,255,255,255,255,219,0,109,255,255,73,0,73,255,255,255,255,182,0,146,255,182,109,36,0,109,255,255,255,73,73,255,36,109,0,219,182,36,255,255,255,255,109,36,255,255,36,0,146,73,255,255,255,255,36,109,255,255,255,255,109,0,109,255,255,255,255,0,36,255,255,255,255,255,255,255,255,255,36,146,255,255,146,0,0,36,255,255,255,255,255,0,0,255,255,146,0,219,255,255,255,255,255,255,255,255,255,255,0,0,146,255,255,255,255,255,255,255,0,0,182,255,255,255,255,255,219,0,73,255,255,255,255,146,0,255,255,255,255,255,255,182,0,0,0,219,255,255,255,255,255,0,73,0,219,255,73,0,0,255,255,255,255,255,219,0,36,255,36,0,255,255,255,255,255,255,255,255,182,0,255,255,255,255,255,255,255,255,219,0,36,255,255,255,255,219,219,255
		,219,0,0,255,255,255,255,109,0,0,182,255,255,255,0,0,255,255,255,255,255,73,0,0,255,255,109,0,146,255,255,255,146,0,146,255,255,219,0,0,219,219,36,0,146,255,255,255,255,255,219,0,109,255,255,255,255,255,255,255,255,255,219,0,146,255,255,255,255,255,255,255,255,255,0,219,255,255,255,255,255,182,0,109,255,255,73,0,219,255,255,255,255,146,0,0,255,255,255,255,255,255,0,0,146,255,255,255,255,255,146,0,146,255,255,182,0,0,255,255,255,255,255,219,0,73,255,255,109,0,0,255,255,255,255,182,0,0,0,0,0,0,0,0,255,255,255,73,73,255,73,0,0,255,182,0,255,255,255,255,109,36,255,255,219,0,36,73,255,255,255,255,73,36,255,255,255,255,36,0,182,255,255,255,255,36,36,255,255,255,255,255,255,255,255,255,73,36,255,255,219,0,0,73,255,255,255,255,255,0,0,255,255,219,0,73,255,255,255,255,255,255,219,36,109,255,0,0,219,255,255,255,255,255,255,255,0,0,146,255,255,255,255,255,255,36,0,146,255,255,219,0,36,255,255,255,255,255,255,219,0,0,36,255,255,255,255,255,255,0,0,0,255,255,182,0,0,255,255,255,255,255,109,0,146,255,146,0,146,255,255,255,255,255,255,255,36,36,255,255,255,255,255,255,255,255,73,0,219,219,146,73,0,0,73,255
		,182,0,0,255,255,255,255,73,0,0,146,255,255,255,0,0,255,255,255,255,146,0,0,219,255,255,219,0,0,109,182,109,0,0,36,255,255,219,0,0,109,0,0,146,255,255,255,255,255,255,219,0,73,255,255,255,219,255,255,255,255,255,219,0,146,255,255,255,255,255,255,255,255,255,36,36,219,255,255,255,255,109,0,109,255,255,73,0,182,255,255,255,255,146,0,0,255,255,255,255,255,255,0,0,73,255,255,255,255,255,255,0,36,255,255,182,0,0,255,255,255,255,255,219,0,73,255,255,182,0,0,182,255,255,255,182,0,0,0,0,0,0,0,0,219,255,255,73,73,255,182,0,0,255,255,0,182,255,255,255,109,36,255,255,255,73,0,73,255,255,255,255,219,0,146,255,255,146,0,73,255,255,255,255,255,36,0,255,255,255,255,255,255,255,255,255,109,0,146,255,255,36,0,0,73,255,255,255,255,0,0,255,255,255,36,0,182,255,255,255,255,255,146,0,36,146,0,36,255,255,255,255,255,255,255,255,0,0,109,255,255,255,255,255,255,109,0,0,0,36,0,0,109,255,255,255,255,255,255,255,0,0,73,255,255,255,255,255,255,36,0,73,255,255,182,0,0,255,255,255,255,255,36,0,219,255,219,0,0,219,255,255,255,255,255,255,0,73,255,255,255,255,255,255,255,182,0,0,0,0,0,0,0,0,73,255
		,146,0,0,219,255,255,255,36,0,0,73,255,255,255,0,0,219,182,109,0,0,109,255,255,255,255,255,73,0,0,0,0,0,0,219,255,255,219,0,0,0,0,182,255,255,255,255,255,255,255,219,0,0,36,0,0,0,146,255,255,255,255,219,0,73,255,255,255,255,255,255,255,255,255,109,0,0,73,146,109,0,0,0,109,255,255,73,0,73,255,255,255,255,146,0,0,255,255,255,255,255,255,36,0,0,0,219,255,255,255,255,146,0,73,255,109,0,0,255,255,255,255,255,255,0,36,255,255,219,0,0,109,255,255,255,182,0,0,0,73,109,146,182,255,255,255,255,73,73,255,255,0,73,255,255,0,146,255,255,255,109,0,255,255,255,182,0,73,255,255,255,255,255,73,0,73,73,0,0,219,255,255,255,255,255,36,0,255,255,255,255,255,255,255,255,255,255,0,0,73,36,0,0,0,0,219,255,255,255,0,0,255,255,255,73,0,73,255,255,255,255,255,219,0,0,0,0,146,255,255,255,255,255,255,255,255,0,0,36,255,255,255,255,255,255,255,36,0,0,0,0,0,219,255,255,255,255,255,255,255,73,0,146,255,255,255,255,255,255,73,0,109,255,255,255,0,0,255,255,255,255,182,0,0,255,255,255,36,0,109,255,255,255,255,255,182,0,182,255,255,255,255,255,255,255,182,36,36,36,0,0,0,0,0,109,255
		,146,0,0,182,255,255,255,0,0,0,36,255,255,255,36,0,0,0,36,146,255,255,255,255,255,255,255,255,73,0,0,0,109,255,255,255,255,219,0,0,109,219,255,255,255,255,255,255,255,255,219,0,0,0,0,36,36,109,255,255,255,255,219,0,0,255,255,255,255,255,255,255,255,255,255,0,0,0,0,0,0,0,0,109,255,255,73,0,0,255,255,255,255,146,0,109,255,255,255,255,255,0,0,0,0,109,219,255,255,255,255,255,73,0,0,0,0,73,255,255,255,255,255,255,0,36,255,255,255,0,0,182,255,255,255,255,182,219,255,255,255,255,255,255,255,255,255,73,0,255,255,182,255,255,255,0,73,255,255,255,109,0,182,255,255,255,0,109,255,255,255,255,255,255,73,0,0,36,219,255,255,255,255,255,255,36,0,146,255,255,255,255,255,255,255,255,255,146,0,0,0,0,219,219,73,255,255,255,255,0,0,255,255,255,109,0,0,255,255,255,255,255,255,36,0,0,36,255,255,255,255,255,255,255,255,255,36,0,73,255,255,255,255,255,255,255,255,146,36,36,36,182,255,255,255,255,255,255,255,255,146,0,219,255,255,255,255,255,255,109,0,109,255,255,255,73,0,255,255,255,255,219,36,36,255,255,255,146,0,36,255,255,255,255,255,73,0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,219,219,219,255,255,255,255,255,219,182,255,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,255,255,255,219,36,109,255,255,255,255,255,255,255,255,255,255,219,0,0,0,0,36,182,0,109,255,255,182,146,182,255,255,255,255,255,219,255,255,255,255,255,255,109,146,219,255,255,255,255,255,255,255,255,255,182,73,36,109,255,255,255,255,255,255,255,182,219,255,255,255,146,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,146,109,255,255,255,255,255,255,109,219,255,255,255,146,0,182,255,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,255,182,182,255,255,255,255,255,255,255,255,255,255,255,182,73,109,255,255,255,255,255,255,255,255,182,182,255,255,255,182,109,219,255,255,255,255,255,255,219,0,0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,219,255,255,255,255,255,255,255,182,73,182,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,73,0,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
		,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,182,182,219,255,255,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,219,109,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
};

const uint16_t hoogte_font1  = 21;
const uint16_t breedte_font1 = 316;

void init_fonts()
{
	lettertype_1.bmp_data = &font1;
	lettertype_1.hoogte   = hoogte_font1;
	lettertype_1.breedte  = breedte_font1;
}

void vga_place_text(uint16_t xp, uint16_t yp, char* text, uint8_t kleur, FONT fontx, font_style style)
{
//		switch(style){
//			case normal: break;
//			case italic: uint16_t* teller;
//						 uint16_t* teller2;
//
//						 for(teller = 0; teller<(*fontx.hoogte)*(*fontx.breedte); teller++)
//							 for(teller2 = 0; teller2<(*fontx.hoogte/2); teller2++)
//								 *fontx.bmp_data = 0;
//
//						 break;
//			case bold: break;
//		}// end of switch

	uint16_t i,j;
	uint16_t char_index = 0;

//	for(i=0; i<fontx.hoogte; i++) // juiste letter selecteren
//		for(j=0; j<(fontx.breedte); j++)
//		{
//			if(fontx.bmp_data[j*(fontx.breedte)+i] < 255)
//				fontx.bmp_data[j*(fontx.breedte)+i] = 0;
//		}



	while(*text != '\0')
	{
		if(*text >= 'a' && *text <= 'z')
		{
			for(i=(*text-'a')*(fontx.breedte/CHARS_IN_FONT)+1; i<((*text-'a'+1)*fontx.breedte/CHARS_IN_FONT)+1; i++) // juiste letter selecteren
				for(j=0; j<(fontx.hoogte); j++)
				{
					if(fontx.bmp_data[j*(fontx.breedte)+i] != 255)
					{
						UB_VGA_SetPixel(xp+i-(*text-'a')*(fontx.breedte/CHARS_IN_FONT)+char_index, // compensatie voor locatie van char in bitmap
										yp+j,
										fontx.bmp_data[j*(fontx.breedte)+i]
										);
					}
				}
			char_index+=fontx.breedte/CHARS_IN_FONT;
			text++;
		} // end of if
		else if(*text >= 'A' && *text <= 'Z' ){
			for(i=(*text-'A')*(fontx.breedte/CHARS_IN_FONT)+1; i<((*text-'A'+1)*fontx.breedte/CHARS_IN_FONT)+1; i++) // juiste letter selecteren
				for(j=0; j<(fontx.hoogte); j++)
					if(fontx.bmp_data[j*(fontx.breedte)+i] != 255)
					{
						UB_VGA_SetPixel(xp+i-(*text-'A')*(fontx.breedte/CHARS_IN_FONT)+char_index, // compensatie voor locatie van char in bitmap
										yp+j,
										fontx.bmp_data[j*(fontx.breedte)+i]
										);
					}

			char_index+=fontx.breedte/CHARS_IN_FONT;
			text++;
		}// end of else if
		else
		{
			// tekst bevat ongeldige tekens
			// UART_puts();
			// return ERROR_UNKNOWN_CHARACTERS;

			// karakter overslaan en volgende printen:
			char_index+=fontx.breedte/CHARS_IN_FONT;
			text++;
		}
	}//end of while
}//end of function vga_place_text
