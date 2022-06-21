/* Escribir un programa tal que dado el nombre de un oso, su peso y longitud(expresados estos dos ultimos en toneladas
y pies respectivamente), imprima el nombre del oso, su peso en kilogramos y su longitud en metros*/

#include <stdio.h>
#include <conio.h>
main(){
	char Nombre[25];
	float PesoToneladas,LongitudPies,PesoKilos,LongitudMetros;
	
	printf("\nEscribe el nombre del oso: ");
	scanf(" %[^\n]",Nombre);
	
	printf("\nEscribe el peso del oso en toneladas: ");
	scanf(" %f",&PesoToneladas);
	
	printf("\nEscribe la longitud del oso en pies: ");
	scanf(" %f",&LongitudPies);
	
	PesoKilos = PesoToneladas*1000;
	LongitudMetros = LongitudPies*0.3048;
	
	printf("\nEl oso %s pesa %g y mide %g metros",Nombre,PesoKilos,LongitudMetros);
	
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
}

