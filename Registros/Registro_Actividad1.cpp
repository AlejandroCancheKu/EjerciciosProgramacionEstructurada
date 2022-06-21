#include <stdio.h>
#include <conio.h>


	void SolicitudDatos(int CantClientes); //Prototipo de la función 
	void ImprimirDatos(int CantClientes);
	
	struct Fecha{
		int Dia;
		int Mes;
		int Anio;
	};
	
	struct Direccion{
		int Calle;
		int Numero;
		char Cruzamiento[30];
		char Colonia[80];
		char Ciudad[20];
		char Estado[20];
	};
	
	struct Cuenta{
		char Nombre[60];
		struct Direccion Domicilio;
		int NumCuenta;
		char TipoCuenta; //A= Al dia; D= Demorado; M=Moroso
		float SaldoAnterior;
		float SaldoNuevo;
		float Pago;
		struct Fecha UltimoPago;
	}Clientes[10];
	

main(){
	
	int CantClientes;
	
	printf("\nEscriba la cantidad de clientes a facturar: ");
	scanf(" %d",&CantClientes);
	
	SolicitudDatos(CantClientes);  //Invocación de la función Solicitud de Datos
	ImprimirDatos(CantClientes);
	
	
	printf("\n\nPulse cualquier tecla para terminar...");
	getch();	
	
	return 0;
}

	//Función Solicitud de Datos
	
	void SolicitudDatos(int CantClientes){
		
		int i;
		
		for(i=0;i<CantClientes;i++){
			printf("\nCAPTURA DE DATOS PARA EL CLIENTE %d \n",i+1);
			
			printf("\nNombre del Cliente: ");
			scanf(" %[^\n]",Clientes[i].Nombre);
			
			printf("\nDireccion del Cliente: ");
			printf("\n\t\tCalle: ");
			scanf(" %d",&Clientes[i].Domicilio.Calle);
			printf("\n\t\tNumero: ");
			scanf(" %d",&Clientes[i].Domicilio.Numero);	
			printf("\n\t\tCruzamientos: ");
			scanf(" %[^\n]",&Clientes[i].Domicilio.Cruzamiento);	
			printf("\n\t\tColonia: ");
			scanf(" %[^\n]",&Clientes[i].Domicilio.Colonia);		
			printf("\n\t\tCiudad: ");
			scanf(" %[^\n]",&Clientes[i].Domicilio.Ciudad);	
			printf("\n\t\tEstado: ");
			scanf(" %[^\n]",&Clientes[i].Domicilio.Estado);
			
			do{
				printf("\nNumero de Cuenta del Cliente: ");
				scanf(" %d",&Clientes[i].NumCuenta);
			}while(Clientes[i].NumCuenta<=0);
			
			printf("\nSaldo Anterior del Cliente: ");
			scanf(" %f",&Clientes[i].SaldoAnterior);
			
			printf("\nCantidad a Pagar del Cliente: ");
			scanf(" %f",&Clientes[i].Pago);
			
			printf("\nFecha del Pago: ");
			printf("\n\t\tDia: ");
			scanf(" %d",&Clientes[i].UltimoPago.Dia);
			printf("\n\t\tMes: ");
			scanf(" %d",&Clientes[i].UltimoPago.Mes);
			printf("\n\t\tAnio: ");
			scanf(" %d",&Clientes[i].UltimoPago.Anio);
			
			Clientes[i].SaldoNuevo = Clientes[i].SaldoAnterior - Clientes[i].Pago;
			
			if(Clientes[i].Pago>0){
				if(Clientes[i].Pago>=0.10*Clientes[i].SaldoAnterior)
					Clientes[i].TipoCuenta= 'A';
				else 
					Clientes[i].TipoCuenta= 'D';
			}
			else{
				if(Clientes[i].SaldoAnterior==0)
					Clientes[i].TipoCuenta= 'A';
				else
					Clientes[i].TipoCuenta= 'M';
			}
			
		}
		
		return;
	
	}
	
	//Funcion para imprimir los datos 
	
	void ImprimirDatos(int CantClientes){
		
		int i;
		
		for(i=1;i<=CantClientes;i++){
			printf("\nNombre del cliente: %s",Clientes[i-1].Nombre);
			printf("\nNumero de la cuenta: %d",Clientes[i-1].NumCuenta);
			printf("\nDireccion: ");
			printf("\n\t\tCalle: %d Numero: %d Cruzamientos: %s",Clientes[i-1].Domicilio.Calle,Clientes[i-1].Domicilio.Numero,Clientes[i-1].Domicilio.Cruzamiento);
			printf("\n\t\tColonia: %s Ciudad: %s Estado: %s",Clientes[i-1].Domicilio.Colonia,Clientes[i-1].Domicilio.Ciudad,Clientes[i-1].Domicilio.Estado);
			printf("\nSaldo Anterior: %g",Clientes[i-1].SaldoAnterior);
			printf("\nCantidad Pagada: %g",Clientes[i-1].Pago);
			printf("\nSaldo Nuevo: %g",Clientes[i-1].SaldoNuevo);
			printf("\nEstado de la cuenta: ");
			
			switch(Clientes[i-1].TipoCuenta){
				
				case 'A': printf("CLIENTE AL DIA");
						  break;
				case 'D': printf("CLIENTE DEMORADO");
						  break;
				case 'M': printf("CLIENTE MOROSO");
						  break;
			}
			
		}
		
		return;
	}
