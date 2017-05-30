void Lijn(int X1, int Y1, int X2, int Y2, int LijnDikte, int Kleur)
{
	for(int k = 0; k < LijnDikte; k++){


		unsigned short kwadrant = 0;
		float delta_y = abs(Y1-Y2);
		float delta_x = abs(X1-X2);
		float rc;

		rc = delta_y / delta_x;


		if(X1 >= X2)
			if(Y1 >= Y2)
				kwadrant = 1;
			else
				kwadrant = 4;
		else
			if(Y1 <= Y2)
				kwadrant = 3;
			else
				kwadrant = 2;

	//  //Testing via de UART
	//	UART_puts("kwadrant: ");
	//	UART_putint(kwadrant);
	//	UART_puts("     delta_X: ");
	//	UART_putint(delta_x);
	//	UART_puts("     delta_Y: ");
	//	UART_putint(delta_y);
	//	UART_puts("     rc: ");

		if(rc <= 1){
			switch(kwadrant){
				case 1:
					for( int i = 0; i < delta_x; i++ )
						UB_VGA_SetPixel(X2+i,Y2+((int)(rc*i)),Kleur);
					break;
				case 2:
					for( int i = 0; i < delta_x; i++ )
						UB_VGA_SetPixel(X2-i,Y2+((int)(rc*i)),Kleur);
					break;
				case 3:
					for( int i = 0; i < delta_x; i++ )
						UB_VGA_SetPixel(X1+i,Y1+((int)(rc*i)),Kleur);
					break;
				case 4:
					for( int i = 0; i < delta_x; i++ )
						UB_VGA_SetPixel(X1-i,Y1+((int)(rc*i)),Kleur);
					break;
			}
		}

		else{
			switch(kwadrant){
				case 1:
					for( int i = 0; i < delta_y; i++ )
						UB_VGA_SetPixel(X2+((int)(1/rc*i)),Y2+i,Kleur);
					break;
				case 2:
					for( int i = 0; i < delta_y; i++ )
						UB_VGA_SetPixel(X2-((int)(1/rc*i)),Y2+i,Kleur);
					break;
				case 3:
					for( int i = 0; i < delta_y; i++ )
						UB_VGA_SetPixel(X1+((int)(1/rc*i)),Y1+i,Kleur);
					break;
				case 4:
					for( int i = 0; i < delta_y; i++ )
						UB_VGA_SetPixel(X1-((int)(1/rc*i)),Y1+i,Kleur);
					break;
			}
		}


		if(rc <= 1){
			Y1++;
			Y2++;
		}
		else {
			X1++;
			X2++;
		}
	}

}


