

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int Suma(int Num1,int Num2); //Prototipo de la funci�n 

main(){
	
	int Num1,Num2,Respuesta;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("Escribe otro numero entero diferente al primero: ");
	scanf(" %d",&Num2);
	
	Respuesta=Suma(Num1,Num2); //Invocaci�n de la funci�n
	
	printf("\nEl resultado de la suma es: %d",Respuesta);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
} //Fin del main


//Declaraci�n o definici�n de la funci�n 

int Suma(int Num1,int Num2){ 

	int Resultado;
	
	Resultado=Num1+Num2;
	
	return Resultado;
	
}

