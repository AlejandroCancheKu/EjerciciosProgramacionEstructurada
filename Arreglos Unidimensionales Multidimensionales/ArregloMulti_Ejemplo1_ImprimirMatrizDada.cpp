/* Escribir en C un programa que imprima la siguiente m,atriz denominada juego. Use las constantes FILAS Y COLUMNAS
para especificar el numero de filas y columnas de la matriz*/


#include <stdio.h>
#include <conio.h>
#define FILAS 3
#define COLUMNAS 4


main(){
	
	int juego[FILAS][COLUMNAS]= { {1,2,3,4},{10,20,30,40},{100,200,300,400} };
	int i,j;
	
	for(i=1;i<=FILAS;i++){
		printf("\n");
		for(j=1;j<=COLUMNAS;++j){
			printf(" %-6d",juego[i-1][j-1]);
		}
	}
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
}
