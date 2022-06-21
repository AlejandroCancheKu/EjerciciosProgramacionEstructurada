/* Escribir un programa que al recibir como datos del radio y la altura de un cilindro, calcule e imprima el área y su volumen.
RECORDAR QUE: Área= 2*pi *r*h y Volumen= pi*r^2*h */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

#define PI 3.1416

main(){
	
	float Altura;
	double Radio,Area,Volumen;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe el Radio del cilindro: ");
	scanf(" %lf",&Radio);
	
	printf("\nEscribe la Altura del cilindro: ");
	scanf(" %f",&Altura);
	
	Area= 2*PI*Radio*Altura;
	Volumen= PI*pow(Radio,2)*Altura;
	
	printf("El Area del cilindro es %lf y su Volumen es de %lf",Area,Volumen);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
