#include <stdio.h>
#include <conio.h>
#include <locale>


void Comparar(int Num1,int Num2);

main(){
	
	int Num1,Num2;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un numero entero: ");
	scanf(" %d",&Num1);
	
	printf("\nEscribe otro numero entero: ");
	scanf(" %d",&Num2);
	
	Comparar(Num1,Num2); //Invocación de la función
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}

//Declaración o definición de la función 

void Comparar(int Num1,int Num2){
	
	int Mayor;
	
	Mayor=Num1>Num2? Num1:Num2;
	
	printf("\nEl numero mayor entre %d y %d es: %d",Num1,Num2,Mayor);
	
	return;
	
}
