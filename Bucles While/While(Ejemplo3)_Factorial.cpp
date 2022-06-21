

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int f=1,numero,aux;
	
	
	printf("\nEscribe un numero positivo: ");
	scanf(" %d",&numero);
	
	if(numero<0){
		printf("\nEl numero que escribas debe ser positivo...\n");
	}
	else{
		if(numero==0){
			printf("El factorial de cero es uno \n");
		}
		else{
			aux=numero;
			while(numero>0){
				f=f*numero;
				numero--;
			}
			printf("El factorial del numero %d es %d \n",aux,f);
		}	
	}
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
}
