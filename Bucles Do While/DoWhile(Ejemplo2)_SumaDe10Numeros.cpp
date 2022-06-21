/* Programa que lea diez valores reales, que los sume e imprima la suma. Use Do...While */


#include <stdio.h>
#include <conio.h>

main(){
	
	int Contador=1;
	float Numero,Suma=0;
	
	do{
		printf("\nEscribe el valor [%d]: ",Contador);
		scanf(" %f",&Numero);
		Suma=Suma+Numero;
		Contador++;
	}
	while(Contador<=10);

	printf("\nEl resultado de la suma de los 10 valores es: %g ",Suma);

	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
	
}
