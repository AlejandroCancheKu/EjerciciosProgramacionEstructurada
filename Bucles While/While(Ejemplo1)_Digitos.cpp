 /* Programa imprime los digitos del 2 al 9, uno en cada linea usando la sentencia while */
 
 
#include <stdio.h>
#include <conio.h>

main(){
	
	int digito=2;
	
	while(digito<=9){
		printf(" %d \n",digito);
		digito++;
	}
	
		printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
}
