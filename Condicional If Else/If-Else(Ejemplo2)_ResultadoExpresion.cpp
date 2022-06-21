/* Programa para calcular e imprimir el resultado de la expresion (4m+2m)/2, verificar que si el denominador es cero, se imprima el mensaje
"revisar el valor de p" y no se realice el calculo*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	float m,n,p,expresion;
	
	setlocale(LC_CTYPE,"Spanish");

	printf("\nEscribe el valor de m: ");
	scanf(" %f",&m);
	
	printf("\nEscribe el valor de n: ");
	scanf(" %f",&n);
	
	printf("\nEscribe el valor de p: ");
	scanf(" %f",&p);
	
	if(p!=0){
		expresion= (4*m+2*n)/p;
		printf("\nEl resultado de la expresion es igual a %f",expresion);
}
	else{
		printf("Revise el valor de p");
	}
	
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
}



