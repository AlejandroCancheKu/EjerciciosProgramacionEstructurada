

#include <stdio.h>
#include <conio.h>
#define FILA 10
#define COLUMNA 10

main(){
	
	float A[FILA][COLUMNA],B[FILA][COLUMNA],C[FILA][COLUMNA];
	int Filas,Columnas,i,j;
	
	printf("\nNumero de filas de la matriz: ");
	scanf(" %d",&Filas);
	
	printf("\Numero de columnas de la matriz: ");
	scanf(" %d",&Columnas);
	
	printf("\nLECTURA DE LA MATRIZ A\n\n");
	for(i=0;i<Filas;i++){
		for(j=0;j<Columnas;j++){
			printf("Matriz A[%d][%d]: ",i+1,j+1);
			scanf(" %f",&A[i][j]);
		}
	}
	
	
		printf("\n\nLECTURA DE LA MATRIZ B\n\n");
	for(i=0;i<Filas;i++){
		for(j=0;j<Columnas;j++){
			printf("Matriz B[%d][%d]: ",i+1,j+1);
			scanf(" %f",&B[i][j]);
		}
	}
	
	//Proceso para la suma de las matrices
	
	for(i=0;i<Filas;i++){
		for(j=0;j<Columnas;j++){
			C[i][j]= A[i][j] + B[i][j];
		}
	}
	
	
	printf("\nEl resultado de la suma es: \n\n");
	for(i=0;i<Filas;i++){
		printf("\n");
		for(j=0;j<Columnas;j++){
			printf(" %9g",C[i][j]);
		}
	}
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
	
}
