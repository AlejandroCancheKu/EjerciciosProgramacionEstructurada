
#include <stdio.h>
#include <conio.h>
#include <locale.h>

	struct Computadora{
		float Costo;
		int Anio;
		float VelocCPU;
		char TipoCPU[25];
	}Modelo[50];

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int CantModelo,i;
	
	printf("\nEscriba la cantidad de modelos a capturar: ");
	scanf(" %d",&CantModelo);
	
	for(i=0;i<CantModelo;i++){
		printf("\nCAPTURA DE DATOS PARA EL MODELO [%d] \n",i+1);
		
		printf("\nTipo de CPU de la computadora: ");
		scanf(" %[^\n]",Modelo[i].TipoCPU);
		printf("\nVelocidad (en GHz) de la computadora: ");
		scanf(" %f",&Modelo[i].VelocCPU);
		printf("\nAño de fabricacion de la computadora: ");
		scanf(" %d",&Modelo[i].Anio);
		printf("\nPrecio de la computadora: ");
		scanf(" %f",&Modelo[i].Costo);
	}
	
	printf("\n\nLos datos que usted introdujo son: ");
	for(i=0;i<CantModelo;i++){
		printf("\n\nPara el modelo %d",i+1);
		printf("\n\tAño: %d",Modelo[i].Anio);
		printf("\n\tCosto: $ %g",Modelo[i].Costo);
		printf("\n\tTipo de CPU: %s",Modelo[i].TipoCPU);
		printf("\n\tVelocidad de CPU: %g GHz",Modelo[i].VelocCPU);
	}
		
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
}
	

