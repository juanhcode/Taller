#include "Menu.h"
#include <cstdlib>

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
	cout << endl;
	cout << "1 - Modificar salario" << endl;
	cout << "2 - Calcular edad" << endl;
	cout << "3 - Calcular antiguedad" << endl;
	cout << "4 - Calcular prestaciones" << endl;
	cout << "5 - Calcular auxilio conyugal" << endl;
	cout << "6 - Salir" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 6)));
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

			case 5:
				break;

			}
			system("cls");
		}

	} while (opcion != 6);
}

void Menu::mostrarDatosPersonales()
{
	
}

void Menu::mostrarCalculos()
{
	
}