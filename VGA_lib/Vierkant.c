void Vierkant(int X_LinksBoven, int Y_LinksBoven, int X_RechtsOnder, int Y_RechtsOnder, int LijnDikte, int Vol)
{

	if(Vol == 0)
		for ( int Y = Y_LinksBoven; Y <= Y_RechtsOnder; Y++ )
			for( int X = X_LinksBoven; X <= X_RechtsOnder; X++ ){
				if(	(Y >= Y_LinksBoven 					& Y <= (Y_LinksBoven + LijnDikte) 	& X >= X_LinksBoven 	& X <= X_RechtsOnder) |
					(Y >= (Y_RechtsOnder - LijnDikte) 	& Y <= Y_RechtsOnder 				& X >= X_LinksBoven 	& X <= X_RechtsOnder) |
					(X >= X_LinksBoven 					& X <= (X_LinksBoven + LijnDikte) 	& Y >= Y_LinksBoven 	& X <= Y_RechtsOnder) |
					(X >= (X_RechtsOnder - LijnDikte) 	& X <= X_RechtsOnder 				& Y >= Y_LinksBoven 	& X <= Y_RechtsOnder))
						UB_VGA_SetPixel(X,Y,10);
			}

	else
		for ( int Y = Y_LinksBoven; Y <= Y_RechtsOnder; Y++ )
			for( int X = X_LinksBoven; X <= X_RechtsOnder; X++ )
				UB_VGA_SetPixel(X,Y,10);

}
