/* Usando Funciones para calcular la suma de dos n�meros enteros diferentes. Considersndo lo siguiente:

A) Los datos los deber� solicitar en el programa principal.
B) La funci�n deber� realizar la suma e imprimir el resultado*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>


void Suma(int Num1,int Num2); //Prototipo de la funci�n 

main(){
	
	int Num1,Num2;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("Escribe otro numero entero diferente al primero: ");
	scanf(" %d",&Num2);
	
	Suma(Num1,Num2); //Invocaci�n de la funci�n
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
} //Fin del main


//Declaraci�n o definici�n de la funci�n 

void Suma(int Num1,int Num2){ 

	int Resultado;
	
	Resultado=Num1+Num2;
	printf("\nEl resultado de la suma es: %d",Resultado);
	
	return;
	
}

