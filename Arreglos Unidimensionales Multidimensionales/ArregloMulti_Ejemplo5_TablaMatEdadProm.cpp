

#include <stdio.h>
#include <conio.h>  

main(){

	int Matriedad[10][2],i;
	float Promedio[10];


//Proceso para leer la informacion de cada alumno

	for(i=0;i<10;i++){
		printf("\nLECTURA DEL ALUMNO %d",i+1);
	
		printf("\nMATRICULA: ");
		scanf(" %d",&Matriedad[i][0]);
	
		printf("\nEDAD(EN A?OS CUMPLIDOS): ");
		scanf(" %d",&Matriedad[i][1]);
	
		printf("\nPROMEDIO: ");
		scanf(" %f",&Promedio[i]);
	
	}  

//Proceso para desplegar la informacion capturada, en una tabla

	printf("\nALUMNO \t\t MATRICULA \t\t EDAD \t\t PROMEDIO \n");
	for(i=0;i<10;i++){
		printf(" %d \t\t %d \t\t %d \t\t %g \n",i+1,Matriedad[i][0],Matriedad[i][1],Promedio[i]);
	}
	
	
//Proceso para imprimir la matricula de los alumnos mayores de edad y que tienen un promedio mayor o igual a 85 puntos

	printf("\nLas matriculas de los alumnos mayores de edad y con promedio superior o igual a 85 son: \n");
	for(i=0;i<10;i++){
		if( (Matriedad[i][1]>=18)  && (Promedio[i]>=85) ){
			printf(" %d \n",Matriedad[i][0]);
		}
	}
		
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
	
}
