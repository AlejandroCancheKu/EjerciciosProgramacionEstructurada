

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int Numero;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe un numero entero entre 1 y 4,inclusive: ");
	scanf(" %d",Numero);
	
	switch(Numero){
		case 1: printf("\a");
				break;
				
		case 2:	printf("\a\a");
				break;
				
		case 3:	printf("\a\a\a");
				break;
		
		case 4:	printf("\a\a\a\a");
				break;
				
		default: ("\nEl numero que ingreses deberá estar entre 1 y 4...");
		
	}
	
	printf("\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;




}
