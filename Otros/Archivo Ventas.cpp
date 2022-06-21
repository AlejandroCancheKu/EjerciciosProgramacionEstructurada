/*ALEJANDRO CANCHE KU*/

#include <stdio.h>
#include <conio.h>
#include<locale.h>
#include <stdlib.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_CTYPE, "Spanish");
	
	int numEmpleados,i,ContPromSup=0;
	float ventasEmpleados[50][5],SumEl=0,SumBl=0,SumJar=0,SumFe=0,SumVentas=0,PromVentas[50],promEl,promBl,promJar,promFe,SumGenV=0,promGenV;
	
	printf("\n¿Cuántos empleados ingresara?: ");
	scanf(" %d",&numEmpleados);
	
	for(i=0; i<numEmpleados; i++){
		
		SumVentas=0;
		
		printf("\nEscribe la clave del empleado [%d]: ", i+1);
		scanf(" %f",&ventasEmpleados[i][0]);	
		
		
		printf("\nCAPTURA DE SUS VENTAS\n");
		
		printf("\Captura las ventas realizadas en Electrodomesticos: ");
		scanf(" %f",&ventasEmpleados[i][1]);
		SumEl= SumEl + ventasEmpleados[i][1];
		
		printf("\Captura las ventas realizadas en Blancos: ");
		scanf(" %f",&ventasEmpleados[i][2]);
		SumBl= SumBl + ventasEmpleados[i][2];
		
		printf("\Captura las ventas realizadas en Jardineria: ");
		scanf(" %f",&ventasEmpleados[i][3]);
		SumJar= SumJar + ventasEmpleados[i][3];
		
		printf("\Captura las ventas realizadas en Ferreteria: ");
		scanf(" %f",&ventasEmpleados[i][4]);
		SumFe= SumFe + ventasEmpleados[i][4];

		SumVentas= SumVentas + ventasEmpleados[i][1]+ventasEmpleados[i][2]+ventasEmpleados[i][3]+ventasEmpleados[i][4];
		PromVentas[i]= SumVentas/4;
	}
	
	promEl= SumEl/numEmpleados;
	promBl= SumBl/numEmpleados;
	promJar= SumJar/numEmpleados;
	promFe= SumFe/numEmpleados;
	
	printf("\n\n\t\t\tINFORMACIÓN GENERAL DE LA COMPAÑIA 'EL RAYITO FELIZ'\n");
	
	printf("\n No.Empleado\t Clave \t Electrodomésticos \t Blancos \t Jardineria \t Ferretería \t Promedio de la Venta del empleado\n");
	
	for(i=0; i<numEmpleados; i++){
		printf("\n %d \t\t %g \t\t %g \t\t %g \t\t %g \t\t %g \t\t $%g\n",i+1,ventasEmpleados[i][0],ventasEmpleados[i][1],ventasEmpleados[i][2],ventasEmpleados[i][3],ventasEmpleados[i][4],PromVentas[i]);
	}
	
	printf("\nPromedio\npor\ndepartamentos\t");
	printf(" \t\t$%g \t$%g \t$%g \t\t$%g",promEl,promBl,promJar,promFe);
	
	for(i=0;i<numEmpleados;i++){
		SumGenV= SumGenV + PromVentas[i];
	}
	
	promGenV= SumGenV/numEmpleados;
	
	printf("\n\n\nEl promedio general de la venta de la compañia es: %g",promGenV);
	
	for(i=0;i<numEmpleados;i++){
		if(PromVentas[i]>79.04){
			ContPromSup= ContPromSup + 1;
		}
	}
	
	printf("\n\nDe los %d empleados de la compañia, %d realizaron una venta promedio superior a $ 79.04",numEmpleados,ContPromSup);
	
	printf("\n\n\t\t\tPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
	
}
