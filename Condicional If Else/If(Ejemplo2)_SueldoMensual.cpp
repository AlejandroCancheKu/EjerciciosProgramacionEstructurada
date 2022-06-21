//Alejandro Emmanuel Canche Kú  LIS  Segundo Semestre

/* Programa dado como dato el nombre y el sueldo del trabajador, apliquele un aumento del 15% a su sueldo
siempre y cuando el sueldo mensual sea inferior a $1500 */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	char Nombre[40];
	float SMensual,NSueldo;
	
	setlocale(LC_CTYPE,"Spanish");

	printf("\nEscribe el nombre del Trabajador: ");
	scanf(" %[^\n]",Nombre);
	
	printf("\nEscribe el Sueldo Mensual del Trabajador: ");
	scanf(" %f",&SMensual);
	
	if(SMensual<1500){
		NSueldo= SMensual+(SMensual*0.15);
		printf("\nEl Sueldo Original Mensual del Trabajador %s es de %g y su Nuevo Sueldo es de %g ",Nombre,SMensual,NSueldo);
	}
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
	
	
}
