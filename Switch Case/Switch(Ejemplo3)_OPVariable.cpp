

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main(){
	
	int OP;
	double T,Funcion;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe el valor de la OP: ");
	scanf(" %d",&OP);
	
	printf("\nEscribe el valor de la variable T: ");
	scanf(" %lf",&T);
	
	switch(OP){
		case 1:Funcion= T/5;
					break;
					
		case 2:Funcion= pow(T,2);
					break;
					
		case 3:Funcion= 6*T/5;
					break;
		
		case 4:Funcion= 6*T/5;
					break;
					
		default:Funcion= 1;
					break;
		
	} //Fin del switch
	
	printf("\nEl resultado de la funcion es: %lf",Funcion);
	
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
}
