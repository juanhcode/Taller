#include "Menu.h"
#include <iostream>
using namespace std;
Menu::Menu()
{
	opcion = 0;
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout<<endl;
	cout << "1 - Registro de llamada" << endl;
	cout << "2 - Mostrar la informacion" << endl;
	cout << "3 - Mostrar un consolidado" << endl;
	cout << "4 - Salir" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 4)));
}

void Menu::visualizar()
{
	int nuevoSalario = 0;
	double porcentaje = 0;

	do
	{
		mostrarDatosPersonales();
		mostrarCalculos();
		seleccionarOpcion();
		{
			switch (opcion)
			{
			case 1:
				
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

	} while (opcion != 4);
}
void Menu::mostrarCalculos(){

}

void Menu::mostrarDatosPersonales(){
	
}