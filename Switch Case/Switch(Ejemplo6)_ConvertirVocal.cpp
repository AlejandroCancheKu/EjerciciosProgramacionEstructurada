
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

main(){
	
	char letra;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe una letra: ");
	scanf(" %c",&letra);
	
	letra= toupper(letra);
	
	switch(letra){
		
		case 'A': printf("\nSoy la primera vocal...");
				  break;
		
		case 'E': printf("\nSoy la segunda vocal...");
				  break;
		
		case 'I': printf("\nSoy la tercera vocal...");
				  break;
				  
		case 'O': printf("\nSoy la cuarta vocal...");
				  break;
				  
		case 'U': printf("\nSoy la quinta vocal...");
				  break;
				  
		default: printf("\nNo soy vocal...");
				 break;
	}
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
	
}
