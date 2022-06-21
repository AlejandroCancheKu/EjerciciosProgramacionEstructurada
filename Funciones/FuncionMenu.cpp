
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#define PI 3.1416
#include <stdlib.h>

void menu();
void Area_Triangulo();
void Area_Circulo();
void Perimetro_Cuadrado();

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	menu();
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}

//Declaraci�n o definici�n de la funci�n 


void menu(){
	
	char Opcion,Respuesta;
	int Bandera;
	
	do{
	system("cls");
		printf("\nMENU PRINCIPAL");
		printf("\n\n[A] �rea de un tri�ngulo");
		printf("\n[B] �rea de un circulo");
		printf("\n[C] Perimetro de un cuadrado");
		printf("\n[D] Salir del menu");
		printf("\n\nOpci�n: ");
		scanf(" %c",&Opcion);
		Opcion=tolower(Opcion);
		
		switch(Opcion){
			
			case 'a': Area_Triangulo();
			          Bandera=0;
			          do{
			          printf("\n\n�Deseas regresar al men� principal (S/N)?: ");
			          scanf(" %c",&Respuesta);
			          Respuesta= tolower(Respuesta);
					  if(Respuesta=='s')
					  	menu();
					  if(Respuesta=='n')
					  	return;
					  }
					  while(Respuesta!='n' && Respuesta!='s');
					break;
					
			case 'b': Area_Circulo();
					  Bandera=0;
				      do{
			          printf("\n\n�Deseas regresar al men� principal (S/N)?: ");
			          scanf(" %c",&Respuesta);
			          Respuesta= tolower(Respuesta);
					  if(Respuesta=='s')
					  	menu();
					  if(Respuesta=='n')
					  	return;
					  }
					  while(Respuesta!='n' && Respuesta!='s');				  
					break;
				
			case 'c': Perimetro_Cuadrado();
				 	  Bandera=0;
				      do{
			          printf("\n\n�Deseas regresar al men� principal (S/N)?: ");
			          scanf(" %c",&Respuesta);
			          Respuesta= tolower(Respuesta);
					  if(Respuesta=='s')
					  	menu();
					  if(Respuesta=='n')
					  	return;
					  }
					  while(Respuesta!='n' && Respuesta!='s');
					break;
					
			case 'd': Bandera=0;
					break;
			
			default: printf("\n\nLA OPCI�N QUE ESCRIBISTE NO ES V�LIDA");
					 printf("\n\n\nPulse cualquier tecla para continuar...");
					 getch();
					 Bandera=1;			 
		} //Fin del Switch
	}//Fin del Do while
	while(Bandera==1);
	
	return;	
	
}//Fin de la funcion MENU


void Area_Triangulo(){
	
	float Base,Altura,AreaTriangulo;
	
	printf("\nC�LCULO DEL AREA DE UN TRIANGULO");
	
	printf("\n\nEscribe la Base del Triangulo: ");
	scanf(" %f",&Base);
					  
	printf("\nEscribe la Altura del Tri�ngulo: ");
	scanf(" %f",&Altura);
	
	AreaTriangulo= Base*Altura/2;
	
	printf("\nEl �rea del Triangulo es: %g",AreaTriangulo); 
	
	return;
	
}//Fin de la funcion Area Triangulo


void Area_Circulo(){
	
	double Radio,AreaCirculo;
	
	printf("\nC�LCULO DEL AREA DE UN TRIANGULO");
	
	printf("\n\nEscribe el Radio del Circulo: ");
	scanf(" %lf",&Radio);
	
	AreaCirculo= PI * pow(Radio,2);
	
	printf("\nEl �rea del Circulo es: %lf",AreaCirculo); 
	
	return;
	
}//Fin de la funcion Area Circulo


void Perimetro_Cuadrado(){
	
	float Lado,Perimetro;
	
	printf("\nC�LCULO DEL PERIMETRO DE UN CUADRADO");
	
	printf("\n\nEscribir el Valor del Lado del Cuadrado: ");
	scanf(" %f",&Lado);
	
	Perimetro = Lado*4;
	
	printf("\nEl Perimetro del Cuadrado es: %f",Perimetro);
	
	return;
	
}//Fin de la funcion Perimetro Cuadrado

