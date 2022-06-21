// Alejandro Emmanuel Canche Kú		LIS  SEGUNDO SEMESTRE

/* Programa que presenta un menu como la siguiente:
[A] Área de un triángulo
[B] Área de un circulo
[C] Perimetro de un cuadrado 
Si el usuario ecribe una opcion que no esta considerada en el menu, el programa enviara un mensaje similar a:
"La opcion que escribiste no es valida"
"Pulse tecla para continuar".
En este caso, despues de pulsar cualquier tecla, se le presentara al usuario de nuevo el menu principal. Esta situacion se realizara
tantas veces hasta que el usuario escriba una opcion valida

Si el usuario escribe una opcion valida, se realizan las operaciones segun la opcion, para obtener el resultado de lo que se pide

Despues de finalizar las instrucciones para las opciones validas, se le presentara al usuario el mensaje ¿Deseas regresar al menú 
principal (S/N)? 

Si el usuario escribe la letra "n" entonces el programa termina
Si el usuario escribe la letra "s" entonces se le presentara al usuario de nuevo el menu principal y tendra que realizar todo lo 
descrito con anterioridad*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#define PI 3.1416
#include <stdlib.h>

main(){
	
	char opcion,Respuesta;
	float Base,Altura,AreaT,Lado,Perimetro;
	double Radio,AreaC;
	
	setlocale(LC_CTYPE,"Spanish");

do{
	system("cls");
do{
	system("cls");
	printf("\nMENU PRINCIPAL");
	printf("\n\n[A] Área de un triángulo");
	printf("\n[B] Área de un circulo");
	printf("\n[C] Perimetro de un cuadrado");
	
	printf("\n\nOpción: ");
	scanf(" %c",&opcion);
	
	opcion = tolower(opcion);
	
	switch(opcion){
			
		case 'a': printf("\nCÁLCULO DEL ÁREA DE UN TRIANGULO");
				  
				  printf("\n\nEscribe la Base del Triangulo: ");
				  scanf(" %f",&Base);
				  
				  printf("\nEscribe la Altura del Triángulo: ");
				  scanf(" %f",&Altura);
				  
				  AreaT= Base*Altura/2;
				  
				  printf("\nEl Área del Triangulo es: %g",AreaT); 
				  break;
			
		case 'b': printf("\nCÁLCULO DEL ÁREA DE UN CIRCULO");
		
				  printf("\n\nEscribe el Radio del Circulo: ");
				  scanf(" %lf",&Radio);
				 
				  AreaC = PI*pow(Radio,2);
				 
				  printf("\nEl Área del Circulo es: %lf",AreaC); 
				  break;
		
		case 'c': printf("\nCÁLCULO DEL PERIMETRO DE UN CUADRADO");
				  
				  printf("\n\nEscribir el Valor del Lado del Cuadrado: ");
			 	  scanf(" %f",&Lado);
		
				  Perimetro = Lado*4;
				  printf("\nEl Perimetro del Cuadrado es: %f",Perimetro);
				  break;
			
		default:  printf("\nLA OPCIÓN QUE ESCRIBISTE NO ES VÁLIDA");
				  printf("\n\n\nPulse cualquier tecla para continuar...");
				  getch();
				  break;
	}
	}
	while(opcion != 'a' && opcion != 'b' && opcion != 'c' );
	
	do{
		printf("\n\n¿Deseas regresar al menú principal (S/N)?: ");
		scanf(" %c",&Respuesta);
		Respuesta= tolower(Respuesta);	
	}
	while(Respuesta!='n' && Respuesta!='s');
	
	printf("\nPulse cualquier tecla para terminar...");

	}
	while(Respuesta != 'n');

	return 0;
	
}
