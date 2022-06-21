



#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
main(){
	
	char LetraJug1,LetraJug2,Respuesta;
	int Intentos=0;
	
	setlocale(LC_CTYPE,"Spanish");
	
	do{
		system("cls");
		Intentos=0;
		printf("\nJUGADOR UNO \n\n");
		printf("\nEscribe una letra minuscula de la a a la z: ");
		scanf(" %c",&LetraJug1);
		
		LetraJug1=tolower(LetraJug1);
		
		printf("\nJUGADOR DOS \n\n");
		printf("Intentaré adivinar la letra del jugador 1...\n\n");
		
		do{
			printf("\nEscribe una letra minuscula de la a a la z: ");
			scanf(" %c",&LetraJug2);
			Intentos++;
			
			if(LetraJug1<LetraJug2){
				printf("\nLa letra del usuario 1 esta antes de la que escribiste...");
			}
			
			if(LetraJug1>LetraJug2){
				printf("\nLa letra del usuario 1 esta despues de la que escribiste...");
			}
			
		}
		while(LetraJug1 != LetraJug2);
		
		printf("\n\n\a\aFelicidades!! Ya Ganaste...");
		printf("\n\nLo adivinaste en %d",Intentos);
		
		do{
		printf("\nDesean volver a jugar (S/N): ");
		scanf(" %c",&Respuesta);
		Respuesta= toupper(Respuesta);
		}
		while(Respuesta!='N'&&Respuesta!='S');
	}
	while(Respuesta != 'N');
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;

}
