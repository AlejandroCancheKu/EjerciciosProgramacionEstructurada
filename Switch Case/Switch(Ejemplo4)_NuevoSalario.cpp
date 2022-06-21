

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	int Nivel;
	float Salario,NSalario;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe el nivel del profesor: ");
	scanf(" %d",&Nivel);
	
	printf("\nEscribe el salario del profesor: ");
	scanf(" %f",&Salario);
	
	switch(Nivel){
		case 1: NSalario= Salario+(Salario*0.035);
				break;
				
		case 2: NSalario= Salario+(Salario*0.041);
				break;
				
		case 3: NSalario= Salario+(Salario*0.048);
				break;
				
		case 4: NSalario= Salario+(Salario*0.053);
				break;
				
		default: printf("\nEscribe un numero en el rango establecido");
				 break;
	}
	
	printf("\nEl nuevo salario es: %f",NSalario);
	
	printf("\nPresiona cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}
