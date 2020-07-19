#include "Menu.h"
#include <cstdlib>

Menu::Menu()
{
	///Cliente e();
	CuentaCorriente CT(50000);
	CuentaAhorros CTA(50000,0.6);
	CDT cdt();


}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout<<"    SIMULADOR BANCARIO"      <<endl;
	cout<<"Hacer Operaciones"<<endl;
	cout<<"1 - Cuenta Ahorro" << endl;
	cout<<"2 - Cuenta Corriente" << endl;
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
	int nuevoDinero= 0;
	do
	{
		mostrarDatosPersonales();
		mostrarCalculos();
		seleccionarOpcion();
		{
			switch(opcion)
			{
				case 1:
					cout<<"Depositar saldo"<<endl;
					cin>>saldo;
					CuentaCorriente();
					break;
				
				case 2:
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
	cout<< "Nombre: " <<endl;
	cout<< "Cedula: " << endl;
	cout<< endl;
}

void Menu::mostrarCalculos()
{
	if (saldo > 0)
	{
		cout << "saldo = " <<saldo << endl;
	}

}