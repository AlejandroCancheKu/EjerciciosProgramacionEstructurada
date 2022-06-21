/* Programa para capturar n calificaciones, calcular el promedio y desviacion estandar de las calificaciones.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	
	int NumCalificaciones,i;
	double Calificacion[10],Suma=0,Promedio,Desvia;
	
	printf("\nCuantas calificacione vas a capturar para el estudiante? ");
	scanf(" %d",&NumCalificaciones);
	
	for(i=0;i<NumCalificaciones;i++){
		printf("\nEscribe la calificacion [%d]: ",i+1);
		scanf(" %lf",&Calificacion[i]);
		Suma= Suma+Calificacion[i];
	}
	
	Promedio=Suma/NumCalificaciones;
	
	printf("\nEl promedio del estudiante es de: %g",Promedio);
	
	Suma=0;
	
	for(i=0;i<NumCalificaciones;i++){
		Suma= Suma + pow(Calificacion[i]-Promedio,2);
	}
	
	Desvia=sqrt( Suma/(NumCalificaciones-1) );
	
	printf("\nLa desviacion estandar de las calificaciones del alumno es de %lf",Desvia);
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
}
