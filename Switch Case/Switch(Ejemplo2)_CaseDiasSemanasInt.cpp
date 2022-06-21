
#include <stdio.h>

main(){
	
	int dia;
	
	printf("Escribe un numero del 1 al 7: \n ");
	scanf(" %d",&dia);
	
	switch(dia){
		case 1: printf("El dia 1 de la semana es lunes \n");
				  break;
				  
		case 2: printf("El dia 2 de la semana es martes \n");
				  break;
		
		case 3: printf("El dia 3 de la semana es miercoles \n");
				  break;
		
		case 4: printf("El dia 4 de la semana es jueves \n");
				  break;
		
		case 5: printf("El dia 5 de la semana es viernes \n");
				  break;
		
		case 6: printf("El dia 6 de la semana es sabado \n");
				  break;
		
		case 7: printf("El dia 7 de la semana es domingo \n");
			 	  break;
		
		default: printf("El numero que escribiste no esta en el rango \n");
				 break;
	}
	return 0;
}
