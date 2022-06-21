/* Usando Funciones para calcular la suma de dos números enteros diferentes. Considersndo lo siguiente:

A) Los datos los deberá solicitar en el programa principal.
B) La función deberá realizar la suma e imprimir el resultado*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


void Suma(int Num1,int Num2); //Prototipo de la función 

main(){
	
	int Num1,Num2;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("Escribe otro numero entero diferente al primero: ");
	scanf(" %d",&Num2);
	
	Suma(Num1,Num2); //Invocación de la función
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
} //Fin del main


//Declaración o definición de la función 

void Suma(int Num1,int Num2){ 

	int Resultado;
	
	Resultado=Num1+Num2;
	printf("\nEl resultado de la suma es: %d",Resultado);
	
	return;
	
}

