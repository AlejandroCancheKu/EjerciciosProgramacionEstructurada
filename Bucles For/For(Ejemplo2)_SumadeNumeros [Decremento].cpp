/* Programa que al recibir como datos los salarios de 15 profesores de una universidad, imprima la cantidad total pagada por 
la universidad*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	float suma=0,numero;
	int i;
	
	setlocale(LC_CTYPE,"Spanish");
	
	for(i=10;i>=1;i=i-1){
		printf("Escribe un valor: ");
		scanf(" %f",&numero);
		suma=suma+numero;
	}
	
	printf("\nEl suma de los 10 numeros es de: %g",suma);
	
	printf("\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
}
