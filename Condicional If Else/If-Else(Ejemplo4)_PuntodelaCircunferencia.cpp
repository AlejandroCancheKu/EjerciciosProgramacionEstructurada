/* El programa que lea el radio de un circulo y las coordenadas de un punto cualquiera. El programa debera determinar si el punto 
esta dentro, sobre o fuera de la circunferencia*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main(){
	
	float Radio;
	double y,x,Distancia;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe el valor del radio: ");
	scanf(" %f",&Radio);
	
	printf("\nEscribe la abcisa del punto: ");
	scanf(" %lf",&x);
	
	printf("\nEscribe la ordenada del punto: ");
	scanf(" %lf",&y);
	
	Distancia= sqrt( pow(y,2)+pow(x,2) );
	
	if(Distancia>Radio){
		printf("\n El punto se encuentra fuera de la circunferencia");
	}
	else{
		if(Distancia<Radio){
			printf("\nEl punto se encuentra dentro de la circunferencia");
		}
		else{
			printf("\nEl punto se encuentra sobre la circunferencia");
		}
	}
	
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
	
	
	
	
	
}
