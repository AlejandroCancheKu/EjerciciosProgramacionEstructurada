#include <stdio.h>
#include <conio.h>
#include <locale.h>

int Suma(); //Prototipo de la función 

main(){
	
	int Respuesta;
	
	setlocale(LC_CTYPE,"Spanish");
	
	Respuesta=Suma();
	
	printf("\nEl resultado de la suma es: %d",Respuesta);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
} //Fin del main


//Declaración o definición de la función 

int Suma(){ 
	int Num1,Num2,Resultado;
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("Escribe otro numero entero diferente al primero: ");
	scanf(" %d",&Num2);
	
	Resultado=Num1+Num2;
	
	return Resultado;
	
}
