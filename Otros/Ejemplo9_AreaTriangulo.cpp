

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	float Base,Altura,Area;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe la base del triángulo: ");
	scanf(" %f",&Base);
	
	printf("\nEscribe la altura del triángulo: ");
	scanf(" %f",&Altura);
	
	Area= Base*Altura/2;
	
	printf("\nEl area del triángulo es de %.2f",Area);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}
