/* Programa que calcule el �rea de un triangulo conociendo los tres lados del mismo */

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main(){
	
	float Lado1,Lado2,Lado3;
	double Semiperimetro,Area;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe la medida del primer lado del tri�ngulo: ");
	scanf(" %f",&Lado1);
	
	printf("\nEscribe la medida del segundo lado del tri�ngulo: ");
	scanf(" %f",&Lado2);
	
	printf("\nEscribe la medida del tercer lado del tri�ngulo: ");
	scanf(" %f",&Lado3);
	
	Semiperimetro= (Lado1+Lado2+Lado3)/2;
	Area= sqrt(Semiperimetro*(Semiperimetro-Lado1)*(Semiperimetro-Lado2)*(Semiperimetro-Lado3));
	
	printf("\nEl �rea del triangulo es: %lf",Area);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}
