

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#define PI 3.1416

main(){
	
	char opcion;
	float Base,Altura,AreaT,Lado,Perimetro;
	double Radio,AreaC;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nMENU PRINCIPAL");
	printf("\n\n[A] Área de un triángulo");
	printf("\n[B] Área de un circulo");
	printf("\n[C] Perimetro de un cuadrado");
	
	printf("\n\nOpción: ");
	scanf(" %c",&opcion);
	
	opcion = tolower(opcion);
	
	switch(opcion){
			
		case 'a': printf("\nCÁLCULO DEL ÁREA DE UN TRIANGULO");
				  
				  printf("\n\nEscribe la Base del Triangulo: ");
				  scanf(" %f",&Base);
				  
				  printf("\nEscribe la Altura del Triángulo: ");
				  scanf(" %f",&Altura);
				  
				  AreaT= Base*Altura/2;
				  
				  printf("\nEl Área del Triangulo es: %g",AreaT); 
				  break;
			
		case 'b': printf("\nCÁLCULO DEL ÁREA DE UN CIRCULO");
		
				  printf("\n\nEscribe el Radio del Circulo: ");
				  scanf(" %lf",&Radio);
				 
				  AreaC = PI*pow(Radio,2);
				 
				  printf("\nEl Área del Circulo es: %lf",AreaC); 
				  break;
		
		case 'c': printf("\nCÁLCULO DEL PERIMETRO DE UN CUADRADO");
				  
				  printf("\n\nEscribir el Valor del Lado del Cuadrado: ");
			 	  scanf(" %f",&Lado);
		
				  Perimetro = Lado*4;
				  printf("\nEl Perimetro del Cuadrado es: %f",Perimetro);
				  break;
			
		default:  printf("\nLA OPCIÓN QUE ESCRIBISTE NO ES VÁLIDA");
				  break;
		
	}
	
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
}
