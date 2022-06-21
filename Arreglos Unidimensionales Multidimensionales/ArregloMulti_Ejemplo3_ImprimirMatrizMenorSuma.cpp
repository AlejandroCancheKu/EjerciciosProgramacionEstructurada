
#include <stdio.h>
#include <conio.h>

main(){
	
	int Matriz[5][3]={ {4,-3,8},{2,1,27},{7,194,14},{-9,218,-274},{6,0,-39} },i,j,Trono=999,Sumador=0,Contador=0;
	
	printf("\nLos valores de la matriz con la que se trabajara son: ");
	
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf(" %7d",Matriz[i][j]);
		}
	}
	
	//Proceso para calcular el menorelemento del arreglo
	
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(Matriz[i][j]<Trono){
				Trono=Matriz[i][j];
			}
		}
	}
	
	//Proceso para calcular la suma de los elementos de las tres filas
	
	
	printf("\n\nEl elemento menor de la matriz es el numero %d",Trono);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			Sumador= Sumador + Matriz[i][j];
		}
	}
	
	printf("\nLa suma de los elementos de las primeras tres filas es: %d",Sumador);
	
	
	//Proceso para contar cuantos negativod hay en la tercera columna
	
	
	for(i=0;i<5;i++){
		if(Matriz[i][2]<0){
			Contador=Contador+1;
		}
	}	
	
	printf("\nLa cantidad total de elementos negativos en la tercera columna es de %d",Contador);
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
}
