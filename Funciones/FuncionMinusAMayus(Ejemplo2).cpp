#include <stdio.h>
#include <conio.h>
#include <locale>

char Minuscula_a_Mayuscula(char Letra); //Prototipo de la funci�n 

main(){
	
	char Letra,Respuesta;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un caracter en miniscula: ");
	scanf(" %c",&Letra);
	
	Respuesta=Minuscula_a_Mayuscula(Letra);  //Invocaci�n de la funci�n
	
	printf("\nEl equivalente a mayuscula del caracter introducido es: %c",Respuesta);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}

//Declaraci�n o definici�n de la funci�n 

	char Minuscula_a_Mayuscula(char Letra){
		
		char Mayus;
		
		if(Letra>96 && Letra<123){
			Mayus= Letra-32;
		}
		else{
			Mayus= Letra;
		}
		
		return Mayus;
	}
	
