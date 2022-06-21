

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int a,b,c;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe el primer numero: ");
	scanf(" %d",&a);

	printf("\nEscribe el segundo numero: ");
	scanf(" %d",&b);
	
	printf("\nEscribe el tercer numero: ");
	scanf(" %d",&c);
	
	
	if(a>b){
		if(a>c){
			if(b>c){
				printf("\nLos numeros son %d,%d,%d",a,b,c);
			}
			else{
				printf("\nLos numeros son %d,%d,%d",a,c,b);
			}
		}
		else{
			printf("\nLos numeros son %d,%d,%d",c,a,b);	
		}
	}
	else{
		if(b>c){
			if(a>c){
				printf("\nLos numeros son %d,%d,%d",b,a,c);		
			}
			else{
				printf("\nLos numeros son %d,%d,%d",b,c,a);	
			}
		}
		else{
			printf("\nLos numeros son %d,%d,%d",c,b,a);	
		}

	}

	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
