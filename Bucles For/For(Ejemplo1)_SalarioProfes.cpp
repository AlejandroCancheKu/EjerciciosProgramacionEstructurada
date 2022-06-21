/* Programa que al recibir como datos los salarios de 15 profesores de una universidad, imprima la cantidad total pagada por 
la universidad*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	float suma=0,salario;
	int i;
	
	setlocale(LC_CTYPE,"Spanish");
	
	for(i=1;i<=15;i=i+1){
		printf("Escribe el salario del empleado %d: ",i);
		scanf(" %f",&salario);
		suma=suma+salario;
	}
	
	printf("\nEl salario que pagara la universidad a todos sus empleados es de %g",suma);
	
	printf("\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
}
