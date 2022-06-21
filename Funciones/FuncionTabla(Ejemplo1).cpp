#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <stdlib.h>

void TablaDeMultiplicacion(int Tabla); //Prototipo de la función 

main(){
	
		int Tabla;
	
		setlocale(LC_CTYPE,"Spanish");

	do{
	system("cls");
		printf("\n¿Tabla que deseas generar? ");
		scanf(" %d",&Tabla);
	
		TablaDeMultiplicacion(Tabla); //Invocación de la función
			
		if(Tabla>10){
			printf("\n\nPulse cualquier tecla para ingresar otro...");
			getch();
		}

	}
while(Tabla>10);
	
		printf("\nPulse cualquier tecla para terminar...");
		getch();
		return 0;

}//Fin del main

//Declaración o definición de la función 

void TablaDeMultiplicacion(int Tabla){ 

	int i,Resultado;
	
	switch(Tabla){
		
		case 1: 
			printf("\n\nTabla del 1\tPor\tResultado");	
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break;
			
		case 2: 
			printf("\n\nTabla del 2\tPor\tResultado");
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break; 
			
		case 3: 
			printf("\n\nTabla del 3\tPor\tResultado");	
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break;
			
		case 4: 
			printf("\n\nTabla del 4\tPor\tResultado");
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break; 
		
		case 5: 
			printf("\n\nTabla del 5\tPor\tResultado");	
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break;
			
		case 6: 
			printf("\n\nTabla del 6\tPor\tResultado");
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break; 
			
		case 7: 
			printf("\n\nTabla del 7\tPor\tResultado");	
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break;
			
		case 8: 
			printf("\n\nTabla del 8\tPor\tResultado");
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break; 
		
		case 9: 
			printf("\n\nTabla del 9\tPor\tResultado");	
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break;
			
		case 10: 
			printf("\n\nTabla del 10\tPor\tResultado");
			for(i=1;i<=10;i++){
				Resultado=(i*Tabla);
				printf("\n%d \t\t%d \t\t%d\n",Tabla,i,Resultado);
			}
			break; 
			
		default: printf("\nError, no se puede calcular esa tabla");
			break;
	
	}
	
	return;
	
}
