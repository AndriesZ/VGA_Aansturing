void Driehoek(X1,Y1,X2,Y2,X3,Y3,Dikte,Kleur){
	Lijn(X1,Y1,X2,Y2,Dikte,Kleur);
	Lijn(X2,Y2,X3,Y3,Dikte,Kleur);
	Lijn(X3,Y3,X1,Y1,Dikte,Kleur);
}
