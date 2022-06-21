/* Programa que calcule el area de dos triangulos e imprima el area del mayor, si las areas son iguales que imprima 
la palabra "Éxito" */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	float Base1,Altura1,Base2,Altura2,AreaT1,AreaT2;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nBase del triangulo 1: ");
	scanf(" %f",&Base1);
	
	printf("\nAltura del triangulo 1: ");
	scanf(" %f",&Altura1);
	
	printf("\nBase del tiangulo 2: ");
	scanf(" %f",&Base2);
	
	printf("\nAltura del triangulo 2: ");
	scanf(" %f",&Altura2);
	
	AreaT1= (Base1*Altura1)/2;
	AreaT2= (Base2*Altura2)/2;
	
	if(AreaT1>AreaT2){
		printf("\n El area del triangulo 1 es mayor y vale: %g",AreaT1);
	}
	else{
		if(AreaT2>AreaT1){
			printf("\nEl area del triangulo 2 es mayor y vale: %g",AreaT2);
		}
		else{
			printf("\nExito");
		}
	}
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
}
