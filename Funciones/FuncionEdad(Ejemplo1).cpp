#include <stdio.h>
#include <conio.h>
#include <locale.h>

void CantidadJovenes(int NumJovenes); //Prototipo de la funci�n 

main(){
	
	int NumJovenes;
	
	setlocale(LC_CTYPE,"Spanish");

	printf("\nCuantos jovenes fueron a la discoteca: ");
	scanf(" %d",&NumJovenes);
	
	CantidadJovenes(NumJovenes); //Invocaci�n de la funci�n
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();

}//Fin del main


//Declaraci�n o definici�n de la funci�n 

void CantidadJovenes(int NumJovenes){ 

	int i,Edad,Contar=0;
	
	for(i=1;i<=NumJovenes;i++){
		printf("\nEscribe la edad del joven [%d]: ",i);
		scanf(" %d",&Edad);
		if(Edad>=23 & Edad<=26){
			Contar=Contar+1;
		}
	}
	
	printf("\nLa cantidad de jovenes que asistieron entre 23 y 26 es de: %d",Contar);
	
	return;
	
}

