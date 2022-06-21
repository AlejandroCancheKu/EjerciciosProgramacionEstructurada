/* Programa que lea n valores e imprima los que no son pares. Si el valor leido es negativo no lo considere para determinar si es o no par. 
Considere la misma situacuion si el valor leido es cero */ 

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int cantidad,numero;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("Escribe el numero de valores a trabajar: \n");
	scanf(" %d",&cantidad);
	
	while(cantidad>0){
		printf("Escribe un numero entero: \n");
		scanf(" %d",&numero);
		
		if(numero>0){
			if( (numero%2)==0 ){
				printf("El numero %d es par \n",numero);
			}
		}
		cantidad--;
	}
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
}
