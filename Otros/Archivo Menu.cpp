/* ALEJANDRO CANCHE*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void funBienvenida();
float funPromedio(int NumAsig);

main(){
	
	char Opcion;
	int Bandera,NumAsig;
	float Respuesta;
	
	do{
	system("cls");
		do{
		system("cls");
			printf("\nMENU");
			
			printf("\n[A] Bienvenida");
			printf("\n[B] Promedio de un alumno");
			printf("\n[C] Salir");
			
			printf("\n\nElige una opcion: ");
			scanf(" %c",&Opcion);
			
			Opcion=tolower(Opcion);
		}
		while(Opcion != 'a' && Opcion != 'b' && Opcion != 'c');
		
		switch(Opcion){
			
			case 'a': funBienvenida();
					  printf("\n\nPulse cualquier tecla para regresar el menu...");
					  getch();
					  Bandera=1;
					  break;
					  
			case 'b': printf("\nCaptura la cantidad de asignaturas que cursa el alumno: ");
					  scanf(" %d",&NumAsig);
					  Respuesta=funPromedio(NumAsig);
					  printf("\nEl promedio del alumno fue de %g",Respuesta);
					  printf("\n\nPulse cualquier tecla para regresar el menu...");
					  getch();
					  Bandera=1;
					  break;
					  		
			case 'c': printf("\n\t¡Exito en tu examen!");
					  printf("\nPulse cualquier tecla para terminar...");
					  getch();
					  return 0;
		}
	}
	while(Bandera==1);
		
}

void funBienvenida(){
		
	int Nombre[50],Edad;
		
	printf("\nNombre completo del estudiante: ");
	scanf(" %[^\n]",Nombre);
	
	printf("\nEdad en años cumplidos: ");
	scanf(" %d",&Edad);
		
	printf("\n\t\tBIENVENIDO\nNombre: %s\t Edad: %d",Nombre,Edad);
		
	return;
}

float funPromedio(int NumAsig){
	
	int i,Cali;
	float Sumador=0,Promedio;
	
	for(i=0;i<NumAsig;i++){
		printf("\nEscribe la calificacion obtenida en la asignatura [%d]: ",i+1);
		scanf(" %d",&Cali);
		Sumador= Sumador + Cali;
	}
	
	Promedio= Sumador/NumAsig;
	
	return Promedio;
}
