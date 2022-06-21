/* Programa dada la matricula y las tres calificaciones del alumno, imprima la matricula y el promedio del alumno*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	char Matricula[25];
	int Calificacion1,Calificacion2,Calificacion3,Promedio;

	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe tu Matricula: ");
	scanf(" %s",Matricula);
	
	printf("\nEscribe tu Primera Calificación: ");
	scanf(" %d",&Calificacion1);
	
	printf("\nEscribe tu Segunda Calificación: ");
	scanf(" %d",&Calificacion2);
	
	printf("\nEscribe tu Tercera Calificación: ");
	scanf(" %d",&Calificacion3);
	
	Promedio= (Calificacion1+Calificacion2+Calificacion3)/3;
	printf("\nEl alumno con matricula %s obtuvo un promedio de %d",Matricula,Promedio);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}
