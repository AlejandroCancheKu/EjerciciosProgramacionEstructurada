#include <stdio.h>
#include <conio.h>
#include <locale.h>

int CantidadJovenes(int NumJovenes); //Prototipo de la funci�n 

main(){
	
	int NumJovenes,Respuesta;
	
	setlocale(LC_CTYPE,"Spanish");

	printf("\nCuantos jovenes fueron a la discoteca: ");
	scanf(" %d",&NumJovenes);
	
	Respuesta= CantidadJovenes(NumJovenes); //Invocaci�n de la funci�n
	
	printf("\nLa cantidad de jovenes que asistieron entre 23 y 26 es de: %d",Respuesta);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();

}//Fin del main


//Declaraci�n o definici�n de la funci�n 

int CantidadJovenes(int NumJovenes){ 

	int i,Edad,Contar=0;
	
	for(i=1;i<=NumJovenes;i++){
		printf("\nEscribe la edad del joven [%d]: ",i);
		scanf(" %d",&Edad);
		if(Edad>=23 & Edad<=26){
			Contar=Contar+1;
		}
	}
	
	return Contar;
	
}

