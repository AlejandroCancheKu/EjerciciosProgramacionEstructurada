
//Integrantes	Alejandro Canche Ku-Alberto Requena		LIS Segundo Semestre

/* PROBLEMA No. 1		VALOR(25 PUNTOS)*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main(){
	
	double Num,Raiz,Cubo;
	int i,j;

	setlocale(LC_CTYPE,"Spanish");
	
	for(i=1;i<4;i++){
		printf("\n\nValor\tRaiz Cuadrada\tElevado al Cubo\n\n");
		for(j=0;j<10;j++){
			Num=(i*10)+j;
			Cubo=pow(Num,3);
			Raiz=sqrt(Num);
			
			printf("%g\t%g\t\t%g\n",Num,Raiz,Cubo);
		}
	
			printf("\n\nPulse cualquier tecla para para ver los siguientes 10 resultados...");
			getch();
	
	}
	printf("\n\nValor\tRaiz Cuadrada\tElevado al Cubo\n\n");
	
	Cubo=pow(40,3);
	Raiz=sqrt(40);
	
	printf("40\t%g\t\t%g\n",Raiz,Cubo);
			
	printf("\nPulse cualquier tecla para terminar...");
	getch();
	
	return 0;
	
}

