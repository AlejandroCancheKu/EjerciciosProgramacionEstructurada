
//Integrantes	Alejandro Canche Ku-Alberto Requena		LIS Segundo Semestre

/* PROBLEMA No. 2		VALOR(35 PUNTOS)*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

main(){
	
	char Nombre[40],Respuesta;
	int Categ,Ant,Clave;
	
	setlocale(LC_CTYPE,"Spanish");
	
	do{
	system("cls");
	
		printf("\nNombre del Empleado: ");
		scanf(" %[^\n]",Nombre);
		
		printf("\nClave del Empleado: ");
		scanf(" %d",&Clave);
		
		printf("\nCategoria: ");
		scanf(" %d",&Categ);
		
		printf("\nAntiguedad: ");
		scanf(" %d",&Ant);
	
		switch(Categ){
			
			case 3: if(Ant>=5){
				printf("\nRespuesta: El empleado cuenta con los requisitos para el nuevo puesto");
				printf("\nNombre del empleado: %s",Nombre);
				printf("\nClave: %d",Clave);
			}
			else{
				printf("\nRespuesta: El empleado NO cuenta con los requisitos para el nuevo puesto");
				printf("\nNombre del empleado: %s",Nombre);
				printf("\nClave: %d",Clave);
			}
				break;
				
			case 4:	if(Ant>=5){
				printf("\nRespuesta: El empleado cuenta con los requisitos para el nuevo puesto");
				printf("\nNombre del empleado: %s",Nombre);
				printf("\nClave: %d",Clave);
			}
			else{
				printf("\nRespuesta: El empleado NO cuenta con los requisitos para el nuevo puesto");
				printf("\nNombre del empleado: %s",Nombre);
				printf("\nClave: %d",Clave);
			}
				break;
				
			case 2: if(Ant>7){
				printf("\nRespuesta: El empleado cuenta con los requisitos para el nuevo puesto");
				printf("\nNombre del empleado: %s",Nombre);
				printf("\nClave: %d",Clave);
			}
			else{
				printf("\nRespuesta: El empleado NO cuenta con los requisitos para el nuevo puesto");
				printf("\nNombre del empleado: %s",Nombre);
				printf("\nClave: %d",Clave);
			}
				break;
			
			default: printf("\nError, no hay alguna categoria");
				break;
			
		}
	
		do{
			printf("\n\n¿Deseas capturar informacion de otro empleado (S/N)?: ");
			scanf(" %c",&Respuesta);
			Respuesta= toupper(Respuesta);	
			if(Respuesta!='N'&&Respuesta!='S'){
				printf("\nLa opcion que escribiste no es valida");
			}
		}
		while(Respuesta!='N'&&Respuesta!='S');
		
	}
	while(Respuesta != 'N');
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
