/* Programa que lee 4 números y los imprime en orden inverso a como fueron leidos 
Elaborado por Alejandro Canche */

#include <stdio.h>
#include <conio.h>
main(){
	int numero1,numero2,numero3,numero4;
	
	//Example Entrada de Datos
	
	printf("\nEscribe un numero entero: "); 
	scanf(" %d",&numero1); 
	
	printf("\nEscribe un segundo numero entero: ");
	scanf(" %d",&numero2);

	printf("\nEscribe un tercer numero entero: ");
	scanf(" %d",&numero3);

	printf("\nEscribe un cuarto numero entero: ");
	scanf(" %d",&numero4);
	
	//Example Salida de Datos
	printf("\nLos números en orden inverso son: %d, %d, %d, %d",numero4,numero3,numero2,numero1);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}
