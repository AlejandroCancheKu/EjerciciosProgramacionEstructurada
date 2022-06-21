/* Escribir un programa que al recibir como datos las coordenadas de 3 puntos que corresponden a los vertices de un triangulo
imprima su perimetro y el area (use tres digitos significativos en la parte decimal para imprimir el resultado */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main(){
	
	double X1,Y1,X2,Y2,X3,Y3,Lado1,Lado2,Lado3,Perimetro,SemiPerimetro,Area;
		
	printf("\nEscribir la primera coordenada: ");
	scanf(" %lf %lf",&X1,&Y1);
	
	printf("\nEscribir la segunda coordenada: ");
	scanf(" %lf %lf",&X2,&Y2);
	
	printf("\nEscribir la tercera coordenada: ");
	scanf(" %lf %lf",&X3,&Y3);
	
	Lado1 = sqrt( pow(Y1-Y2,2)+pow(X1-X2,2) );
	Lado2 = sqrt( pow(Y2-Y3,2)+pow(X2-X3,2) );
	Lado3 = sqrt( pow(Y1-Y3,2)+pow(X1-X3,2) );
	
	Perimetro = Lado1+Lado2+Lado3;
	SemiPerimetro = Perimetro/2;
	Area= sqrt(SemiPerimetro*(SemiPerimetro-Lado1)*(SemiPerimetro-Lado2)*(SemiPerimetro-Lado3));
	
	printf("\nEl perimetro del triangulo es %.3lf y su area es %.3lf",Perimetro,Area);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
