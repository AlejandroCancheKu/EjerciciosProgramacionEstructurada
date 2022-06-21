/*Escribir un programa en C que lea un vector de 10 elementos y que calcule e imprima cuantos de los elementos que 
estan en posicion par son de valor negativo*/

#include <stdio.h>
#include <conio.h>

main(){
	
	int vector[10],i,contador=0;
	
	for(i=0;i<=9;++i){
		printf("\nEScribe el valor del vector[%d] ",i+1);
		scanf(" %d",&vector[i]);
	}
	
	for(i=1;i<=9;i=i+2){
		if(vector[i]<0)
		contador++;
	}	
	
	printf("\nLa cantidad de elementos negativos en posicion par es de: %d",contador);
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
}
