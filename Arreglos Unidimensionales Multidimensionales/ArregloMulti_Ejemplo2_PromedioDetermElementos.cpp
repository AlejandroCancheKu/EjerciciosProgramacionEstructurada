/* Escribir un programa que: Lea los elementos enteros de umna matriz de 6 filas por 7 columnas. Obtenga e imprima el promedio de los elementos 
que se encuentran comprendidos desde la fila 3 hasta la fila 5, y desde la columna 2 hasta la columna 6 */


#include <stdio.h>
#include <conio.h>
#define	MAXFIL 6
#define	MAXCOL 7


main(){
	
	int Matriz[MAXFIL][MAXCOL],i,j,Suma=0;
	float Promedio,Contador=0;
	
	printf("\n					LECTURA DE LA MATRIZ");
	for(i=1;i<=MAXFIL;i++){
		printf("\n\nIniciamos con la fila %d ",i);
		for(j=1;j<=MAXCOL;j++){
			printf("\nEscribe el valor de Matriz[%d][%d]: ",i,j);
			scanf(" %d",&Matriz[i-1][j-1]);
		}
	}
	
	for(i=3;i<=5;i++){
		for(j=2;j<=6;j++){
			Suma=Suma + Matriz[i-1][j-1];
			Contador= Contador+1;
		}
	}
	
	Promedio=Suma/Contador;
	printf("\n\nEl promedio de los elementos es: %.2f",Promedio);
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
}
