/* Programa para determinar si un alumno cumple con los requisitos para ser asistente a alguna de las carreras de la Universidad*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int Carrera,Semestre;
	char Matricula[30];
	float Promedio;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nCARRERAS DE LA UNIVERSIDAD DISPONIBLES\n");
	printf("\nIndustrial (1)");
	printf("\nTelematica (2)");
	printf("\nComputacion (3)\n");
	
	
	printf("\nEscribe tu matricula: ");
	scanf(" %s",Matricula);
	
	printf("\nEscribe la carrera interesada: ");
	scanf(" %d",&Carrera);
	
	printf("\nEscribe el semestre que cursas: ");
	scanf(" %d",&Semestre);
	
	printf("\nEscribe tu promedio: ");
	scanf(" %f",&Promedio);
	
	switch(Carrera){
		
		case 1: if(Semestre>=6 && Promedio>=8.5){
			printf("\nMatricula del alumno: %s",Matricula);
			printf("\nAprobacion de Asistencia a la Carrera: %d",Carrera);
			printf("\nPromedio del alumno: %f",Promedio);
		}
		else{
			printf("\nEL ALUMNO NO CUENTA CON LOS REQUISITOS");
		}
		break;
		
		case 2: if(Semestre>=5 && Promedio>=9.0){
			printf("\nMatricula del alumno: %s",Matricula);
			printf("\nAprobacion de Asistencia a la Carrera: %d",Carrera);
			printf("\nPromedio del alumno: %f",Promedio);
		}
		else{
			printf("\nEL ALUMNO NO CUENTA CON LOS REQUISITOS");
		}
		break;
		
		case 3: if(Semestre>=6 && Promedio>=8.8){
			printf("\nMatricula del alumno: %s",Matricula);
			printf("\nAprobacion de Asistencia a la Carrera: %d",Carrera);
			printf("\nPromedio del alumno: %f",Promedio);
		}
		else{
			printf("\nEL ALUMNO NO CUENTA CON LOS REQUISITOS");
		}
		break;
		
		default: printf("\nERROR EN LA CARRERA");
		break;		
	}
	
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
