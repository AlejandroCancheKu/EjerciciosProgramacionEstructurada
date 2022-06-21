#include <stdio.h>
#include <conio.h>
#include <locale.h>

int CantidadJovenes(); //Prototipo de la función 

main(){
	
	int Respuesta;
	
	setlocale(LC_CTYPE,"Spanish");
	
	Respuesta= CantidadJovenes(); //Invocación de la función
	
	printf("\nLa cantidad de jovenes que asistieron entre 23 y 26 es de: %d",Respuesta);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();

}//Fin del main


//Declaración o definición de la función 

int CantidadJovenes(){ 

	int i,Edad,Contar=0,NumJovenes;
	
	printf("\nCuantos jovenes fueron a la discoteca: ");
	scanf(" %d",&NumJovenes);
	
	for(i=1;i<=NumJovenes;i++){
		printf("\nEscribe la edad del joven [%d]: ",i);
		scanf(" %d",&Edad);
		if(Edad>=23 & Edad<=26){
			Contar=Contar+1;
		}
	}
	
	return Contar;
	
}
