#include <stdio.h>
#include <conio.h>

main(){
	
	int digito=2;
	
	do{
		printf(" %d \n",digito);
		digito++;
	}
	while(digito<=9);
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
}
