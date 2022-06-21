/* Programa para la suma, resta y multiplicación de dos números reales */

#include <stdio.h>
#include <conio.h>

main(){
	
	float numero1,numero2,Suma,Resta,Multiplicacion;
	
	printf("\nEscribe un numero: "); 
	scanf(" %f",&numero1);
	
	printf("\nEscribe otro numero: "); 
	scanf(" %f",&numero2);
	
	Suma = numero1+numero2;
	Resta = numero1-numero2;
	Multiplicacion = numero1*numero2;
	
	printf("\nLa suma es %g",Suma);
	printf("\nLa resta es %g",Resta);
	printf("\nLa Multiplicación es %g",Multiplicacion);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}
