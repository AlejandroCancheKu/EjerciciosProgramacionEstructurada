/* Programa que lea 5 valores y calcule e imprima el promedio de todos ellos*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	float suma=0,numero,promedio;
	int i;
	
	setlocale(LC_CTYPE,"Spanish");
	
	for(i=1;i<=5;i=i+1){
		printf("Escribe el valor de tu numero %d: ",i);
		scanf(" %f",&numero);
		suma=suma+numero;
	}
	
	promedio= suma/5;
	
	printf("\nEl promedio de los 5 numeros es de: %g",promedio);
	
	printf("\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
}
