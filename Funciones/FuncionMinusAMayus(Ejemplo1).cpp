
#include <stdio.h>
#include <conio.h>
#include <locale>

void Minuscula_a_Mayuscula(char Letra); //Prototipo de la funci�n 

main(){
	
	char Letra;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un caracter en miniscula: ");
	scanf(" %c",&Letra);
	
	Minuscula_a_Mayuscula(Letra);  //Invocaci�n de la funci�n
	
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}

//Declaraci�n o definici�n de la funci�n 

	void Minuscula_a_Mayuscula(char Letra){
		
		char Mayus;
		
		if(Letra>96 && Letra<123){
			Mayus= Letra-32;
		}
		else{
			Mayus= Letra;
		}
		
		printf("\nEl equivalente a mayuscula del caracter introducido es: %c",Mayus);
		
		return;
	}
	
