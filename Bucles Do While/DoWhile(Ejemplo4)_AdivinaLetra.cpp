



#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

main(){
	
	char LetraJug1,LetraJug2;
	int Intentos=0;
	
	setlocale(LC_CTYPE,"Spanish");
	
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
	
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;

}
