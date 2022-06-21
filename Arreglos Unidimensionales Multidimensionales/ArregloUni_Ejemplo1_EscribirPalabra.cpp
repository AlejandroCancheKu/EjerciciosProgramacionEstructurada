#include <stdio.h>
#include <ctype.h>
#include <conio.h>

#define TAMANO 40


main(){
	
	char Palabra[TAMANO];	
	int Cont;
	
	printf("\nEscribe un texto de 40 caracteres en minusculas");
	printf("\nAl terminar de escribir, pulsa <enter>\n");
	for(Cont=0;Cont<TAMANO;++Cont){
		Palabra[Cont]=getchar();
	}
	
	printf("El texto que escribiste es: ");
	for(Cont=0;Cont<TAMANO;++Cont){
		putchar(toupper(Palabra[Cont]));
	}
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
}
