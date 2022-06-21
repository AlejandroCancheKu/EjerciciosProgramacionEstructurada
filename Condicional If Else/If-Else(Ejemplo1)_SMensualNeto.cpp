/* La tienda "las mañanitas tien un empleado. Escribir el programa que:
Lea el nombre del empleado, el numero de horas semanales trabajadas, el sueldo por hora y los impuestos que pagará.
Calcule e imprima el nombre del empleado y su sueldo semanal neto

Considereque si el trabajador trabaja mas de 40 horas semanales, se le pagarán horas extras al doble del sueldo normal. */


#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	char Nombre[30];
	int HorasST;
	float SueldoH,Impuesto,SMensualNeto;
	
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nNombre del empleado: ");
	scanf(" %[^\n]",Nombre);
	
	printf("\nHoras semanales trabajadas: ");
	scanf(" %d",&HorasST);
	
	printf("\nSueldo por Hora: ");
	scanf(" %f",&SueldoH);
	
	printf("\nImpuestos que pagará: ");
	scanf(" %f",&Impuesto);
	
	if(HorasST>40){
		SMensualNeto= (40*SueldoH)+(HorasST-40)*2*SueldoH - Impuesto;
	}
	else{
		SMensualNeto=(HorasST*SueldoH)- Impuesto;
	}
	
	printf("\nEl sueldo mensual neto del empleado %s es de %f",Nombre,SMensualNeto);

	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;


}
