
//Alejandro Emmanuel Canche Kù			LIS Segundo Semestre


/* Programa que lea el nombre y el numero de horas semanales trabajadas para elaborar la nomina de una compañia que cuenta con 5 empleados 
teniendo en cuenta lo siguiente:
a) el salario por hora es de $10 (Defina esta cantidad como constante)
b) El salario normal se calcula basado en una jornada de 40 horas semanales trabajadas
c) Las horas extras se pagan al triple de las horas normales
d) Las deducciones de impuestos sobre el salario bruto y es del 12% cuando el empleado trabaja mas de 40 horas a la semana y del 9% cuando trabaja,
hasta 40 horas semanales

Se debera imprimir para cada empleado: nombre, horas semanales trabajadas, salario bruto semanal, impuestos y el salario neto semanal */


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define Salario 10

main(){
	
	char Nombre[30];
	int NEmpleados=1,HorasST,SueldoBrutoS;
	float Impuestos,SSemanalNeto;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nNOMINA COMPAÑIA ALEJANDRO S.A DE C.V.");
	
	
	while (NEmpleados<=5){
				
		printf("\n\nEscribe el Nombre del Empleado %d : ",NEmpleados);
		scanf(" %[^\n]",Nombre);
		
		printf("\nHoras Semanales Trabajadas: ");
		scanf(" %d",&HorasST);
		
		
	if(HorasST>40){
		SueldoBrutoS= HorasST*Salario;
		Impuestos=SueldoBrutoS*.12;
		SSemanalNeto= (40*Salario)+(HorasST-40)*3*10 - Impuestos;
	}
	else{
		SueldoBrutoS= HorasST*Salario;
		Impuestos= SueldoBrutoS*.09;
		SSemanalNeto=SueldoBrutoS- Impuestos;
	}
	
		printf("\n>Nombre del Empleado %d: %s",NEmpleados,Nombre);
		printf("\n>Horas Trabajadas: %d",HorasST);
		printf("\n>Sueldo Bruto Semanal: %d",SueldoBrutoS);
		printf("\n>Pago de Impuestos: %f",Impuestos);
		printf("\n>Salario Neto Semanal: %f",SSemanalNeto);
		
		NEmpleados++;
	
		printf("\n\n--------------------------------------------------");
	}
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
}
