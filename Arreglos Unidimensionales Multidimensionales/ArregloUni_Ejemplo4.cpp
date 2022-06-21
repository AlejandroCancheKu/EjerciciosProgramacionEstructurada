/* Escribir un programa en C que lea un vector que contiene las ventas de los 7 dias de la semana de la tienda
"La socorrito". se desea saber el dia que se vendio mas y la cantidad vendida. Asuma que las ventas diarias on diferentes entre si */



#include <stdio.h>
#include <conio.h>

main(){
	
	float ventas[7],mayor=-999;
	int i,dia;
	
	for(i=0;i<=6;++i){
		printf("\nEscribe el valor de la venta del dia [%d] ",i+1);
		scanf(" %f",&ventas[i]);	
	}
	
	for(i=0;i<=6;++i){
		if(ventas[i]>mayor){
			mayor=ventas[i];
			dia=i;	
		}	
	}
	
	printf("\nLa cantidad mayor vendida fue de %g",mayor);
	printf("\nEl dia que se vendio mas fue el: ");
	
	switch (dia){
		case 0: printf("Lunes");
				break;
		case 1: printf("Martes");	
				break;	
		case 2: printf("Miercoles");
				break;
		case 3: printf("Jueves");	
				break;
		case 4: printf("Viernes");
				break;
		case 5: printf("Sabado");	
				break;
		default: printf("Domingo");
				break;
	}


	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
	
}
