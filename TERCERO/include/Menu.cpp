#include "Menu.h"
#include <cstdlib>

Menu::Menu()
{
	opcion = 0;
	cDT = CDT();
	CuentaCo = CuentaCorriente();
	CuentaAho = CuentaAhorros();
	mEs = Mes(7);
	Cliente primero("Juan", "100123",CuentaCo,CuentaAho,cDT,mEs);
	e1 = primero;
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout<<"    SIMULADOR BANCARIO"      <<endl;
	cout<<"Hacer Operaciones"<<endl;
	cout<<"1 - Cuenta Corriente" << endl;
	cout<<"2 - Cuenta Ahorro" << endl;
	cout<<"3 - CDT" << endl;
	cout<<"4 - Avanzar mes por mes en el Tiempo" << endl;
	cout<<"5 - Salir" << endl;
	do
	{
		cout<<"Introduza Opcion: ";
		cin >> opcion;		
	}while(!((opcion>=1) && (opcion<=5)));		
}

void Menu::visualizar()
{
	do
	{
		mostrarDatosPersonales();
		mostrarCalculos();
		seleccionarOpcion();
		{
			switch(opcion)
			{
				case 1:
					cout<<"1. Depositar"<<endl;
					cout<<"2. Retirar"<<endl;
					cin>>opcion;
					switch (opcion)
					{
					case 1:
						cout<<"cantidad a depositar"<<endl;
						break;
					case 2:
						
						break;
					default:
						break;
					}
				
					break;
				
				case 2:
					cout<<"Pagar interes"<<endl;

					break;
				
				case 3: 
					break;
				case 4: 
					break;
				
			}
			system("cls");
		}
		
	}while(opcion!= 5);
	
}
 
void Menu::mostrarDatosPersonales()
{
	cout<< "Nombre: " <<e1.darNombre() <<endl;
	cout<< "Cedula: " <<e1.darCedula() <<endl;
	cout<< endl;
}

void Menu::mostrarCalculos()
{
	
}