

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int Valores,Contador=1,Negativos=0;
	float Numero;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("¿Con cuantos valores vas a trabajar?: ");
	scanf(" %d",&Valores);
	
	do{
		printf("\nEscribe el valor [%d]: ",Contador);
		scanf(" %f",&Numero);
		
		if(Numero<0){
			Negativos++;
		}
		Contador++;
	}
	while(Contador<=Valores);
	
	printf("\nDe los %d valores que introduciste, %d son negativos",Valores,Negativos);
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
}
