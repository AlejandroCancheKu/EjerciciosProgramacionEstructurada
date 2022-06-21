#include <stdio.h>
#include <conio.h>
#include <locale>


int Comparar();

main(){
	
	int Respuesta;
	
	setlocale(LC_CTYPE,"Spanish");
	
	Respuesta= Comparar(); //Invocación de la función
	
	printf("\nEl numero mayor es: %d",Respuesta);

	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}

//Declaración o definición de la función 

int Comparar(){
	
	int Num1,Num2,Mayor;
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("\nEscribe otro numero entero: ");
	scanf(" %d",&Num2);
	
	Mayor=Num1>Num2? Num1:Num2;
	
	return Mayor;
	
}
