/* Programa para imprimir el cambio que se debe entregar al cliente */

#include <stdio.h>
#include <conio.h>

main(){
	
	float Dinero,Costo,Resta;

	printf("\nIngresa el dinero entregado: ");
	scanf(" %f",&Dinero);
	
	printf("\nIngresa el costo del articulo: ");
	scanf(" %f",&Costo);
	
	Resta=Dinero-Costo;
	
	printf("\nSu cambio es %g",Resta);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
