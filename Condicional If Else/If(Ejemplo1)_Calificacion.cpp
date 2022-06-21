
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	char Nombre[40];
	float Calificacion;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe el nombre del alumno: ");
	scanf(" %[^\n]",Nombre);
	
	printf("\nEscribe la calificación del alumno: ");
	scanf(" %f",&Calificacion);
	
	if(Calificacion>=70){
		printf("\nEl alumno %s aprobó la asignatura de español",Nombre);
	}
	
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
}
