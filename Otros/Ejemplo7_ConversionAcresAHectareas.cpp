/* Programa que al recibir como dato la estensión del terreno en acres, calcular e imprimir la extension del mismo en hectareas */

#include <stdio.h>
#include <conio.h>

main(){
	float ExtensionAcres, ExtensionHectareas;
	
	printf("\nEscribe la extensión del terreno en acres: ");
	scanf(" %f",&ExtensionAcres);
	
	
	ExtensionHectareas = ExtensionAcres*0.4047;
	
	printf("\nEl terreno adquirido en %f acres equivale a %f hectareas",ExtensionAcres,ExtensionHectareas);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
