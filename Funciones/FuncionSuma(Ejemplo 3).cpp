#include <stdio.h>
#include <conio.h>
#include <locale.h>

void Suma(); //Prototipo de la funci�n 

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	Suma();
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
} //Fin del main


//Declaraci�n o definici�n de la funci�n 

void Suma(){ 
	int Num1,Num2,Resultado;
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("Escribe otro numero entero diferente al primero: ");
	scanf(" %d",&Num2);
	
	Resultado=Num1+Num2;
	
	printf("\nEl resultado de la suma es: %d",Resultado);
	
	return;
	
}
