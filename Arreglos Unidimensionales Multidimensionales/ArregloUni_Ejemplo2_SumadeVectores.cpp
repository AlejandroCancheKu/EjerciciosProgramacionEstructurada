#include <stdio.h>
#include <ctype.h>
#include <conio.h>

main(){
	
	float A[6], B[6], C[6], D[6];
	int i;
	
	printf("Escribe los elementos de los vectores A, B Y C \n");
	
	for(i=0;i<=5;i++){
		printf("\nEscribe el valor de A[%d]: ",i+1);
		scanf(" %f",&A[i]);
		
		printf("\nEscribe el valor de B[%d]: ",i+1);
		scanf(" %f",&B[i]);
		
		printf("\nEscribe el valor de C[%d]: ",i+1);
		scanf(" %f",&C[i]);
		D[i]= A[i]+B[i]+C[i];
	}
	printf("\n\nEl resultado de la suma es: ");
	
	for(i=0;i<=5;i++){
		printf("\nD[%d]: %f",i+1,D[i]);
	}
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
}
