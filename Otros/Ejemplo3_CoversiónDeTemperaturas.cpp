/* Programa que lee una temperatura en grados centígrados y que imprima el resultado en grados farenheit y kelvin */

#include <stdio.h>
#include <conio.h>

main(){
	float gradoCentigrado,gradoFarenheit,gradoKelvin;
	
	printf("\nEscribe la temperatura en grados centigrados: ");
	scanf(" %f",&gradoCentigrado);
	
	gradoFarenheit = gradoCentigrado/8 + 32;
	gradoKelvin = gradoCentigrado + 273;
	
	printf("\nLos %g grados centigrados equivalen a %g grados farenheit y a grados %g kelvin",gradoCentigrado,gradoFarenheit,gradoKelvin);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}
