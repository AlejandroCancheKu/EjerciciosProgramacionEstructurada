 //Alejandro Canche Ku  LIS Segundo Semestre 
 
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	char Clave[20];
	int Edad,DiasT,Tipo,Costo;
	float CostoFinal;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nMENU DE TIPOS DE TRATAMIENTO");
	printf("\n[1] $2800");
	printf("\n[2] $1950");
	printf("\n[3] $2500");
	printf("\n[4] $1150");
	
	printf("\nEscribe la Clave del Cliente: ");
	scanf(" %[^\n]",Clave);
	
	printf("\nEscribe la Edad del Cliente: ");
	scanf(" %d",&Edad);
	
	printf("\nEscribe los Dias de Internación: ");
	scanf(" %d",&DiasT);
	
	printf("\nEscribe el Tipo de Tratamiento: ");
	scanf(" %d",&Tipo);
	
	switch(Tipo){
		
		case 1: if(Edad>60){
			Costo= DiasT*2800;
			CostoFinal= Costo-(Costo*0.25);
			printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
		}
		else{
			if(Edad<38){
				Costo= DiasT*2800;
				CostoFinal= Costo-(Costo*0.15);
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			else{
				CostoFinal= DiasT*2800;
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			
		}
		break;
		
		
		
		case 2: if(Edad>60){
			Costo= DiasT*1950;
			CostoFinal= Costo-(Costo*0.25);
			printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
		}
		else{
			if(Edad<38){
				Costo= DiasT*1950;
				CostoFinal= Costo-(Costo*0.15);
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			else{
				CostoFinal= DiasT*1950;
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			
		}
		break;
			
			
			
		case 3: if(Edad>60){
			Costo= DiasT*2500;
			CostoFinal= Costo-(Costo*0.25);
			printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
		}
		else{
			if(Edad<38){
				Costo= DiasT*2500;
				CostoFinal= Costo-(Costo*0.15);
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			else{
				CostoFinal= DiasT*2500;
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			
		}
		break;
			
			
			
		case 4:  if(Edad>60){
			Costo= DiasT*1150;
			CostoFinal= Costo-(Costo*0.25);
			printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
		}
		else{
			if(Edad<38){
				Costo= DiasT*1150;
				CostoFinal= Costo-(Costo*0.15);
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			else{
				CostoFinal= DiasT*1150;
				printf("\nEl cliente %s estuvo internado %d dias y el costo de internacion es de: %f",Clave,DiasT,CostoFinal);
			}
			
		}
		break;
		
		default: printf("\nNo existe el tratamiento");
	}
	
	
	printf("\n\nPulse cualquier tecla para terminar el programa...");
	getch();
	
	return 0;
	
}
