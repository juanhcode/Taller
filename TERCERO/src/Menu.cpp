#include "Menu.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Menu::Menu()
{
	opcion = 0;
	cDT = CDT();
	CuentaCo = CuentaCorriente();
	CuentaAho = CuentaAhorros();
	mEs = Mes(7);
	Cliente primero("Juan", "100123", CuentaCo, CuentaAho, cDT, mEs);
	e1 = primero;
	saldoTotal = 0;
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout << "    SIMULADOR BANCARIO" << endl;
	cout << "Hacer Operaciones" << endl;
	cout << "1 - Cuenta Corriente" << endl;
	cout << "2 - Cuenta Ahorro" << endl;
	cout << "3 - CDT" << endl;
	cout << "4 - Avanzar mes por mes" << endl;
	cout << "5 - Saldo total" << endl;
	cout << "6 - Salir" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 6)));
}

void Menu::visualizar()
{
	int saldoCC = 0;
	int saldoCA = 0;
	int dineroCDT = 0;
	double interesM = 0;
	int cantidadM = 0;
	do
	{
		mostrarDatosPersonales();
		mostrarCalculosF();
		seleccionarOpcion();
		{
			switch (opcion)
			{
			case 1:
				mostrarCalculos();
				cout << "1. Depositar" << endl;
				cout << "2. Retirar" << endl;
				cout << "3. Volver al menu" << endl;
				cout << "Introduzca una opcion" << endl;
				cin >> opcion;
				switch (opcion)
				{
				case 1:
					cout << "Cantidad a depositar" << endl;
					cin >> saldoCC;
					e1.consignarCuentaCorriente(saldoCC);
					break;

				case 2:
					cout << "Cantidad a Retirar" << endl;
					cin >> saldoCC;
					e1.retirarCuentaCorriente(saldoCC);
					break;
				case 3:
					break;
				default:
					break;
				}

				break;

			case 2:
				mostrarCalculosCA();
				cout << "1. Depositar" << endl;
				cout << "2. Retirar" << endl;
				cout << "3. Volver al menu" << endl;
				cin >> opcion;
				switch (opcion)
				{
				case 1:
					cout << "Cantidad a depositar" << endl;
					cin >> saldoCA;
					e1.consignarCuentaAhorro(saldoCA);
					break;
				case 2:
					cout << "Cantidad a Retirar" << endl;
					cin >> saldoCA;
					e1.retirarCuentaAhorro(saldoCA);
					break;
				case 3:
					break;
				default:
					cout << "Opcion invalida" << endl;
					break;
				}
				break;

			case 3:
				cout << "1. Invertir Dinero" << endl;
				cout << "2. Cerrar Cuenta" << endl;
				cout << "Intruduzca una opcion" << endl;
				cin >> opcion;
				switch (opcion)
				{
				case 1:
					mostrarInCDT();
					cout << "1.Cantidad de dinero / interes mensual" << endl;
					cout << "2.Cantidad de Meses" << endl;
					switch (opcion)
					{
					case 1:
						cout << "Digite la cantidad de dinero que quiere invertir" << endl;
						cin >> dineroCDT;
						cout << "Digite el interes mensual" << endl;
						cin >> interesM;
						e1.invertirCDT(dineroCDT, interesM, cantidadM);
						break;

					case 3:
						cout << "Digite la cantidad de Meses" << endl;
						cin >> cantidadM;
						break;

					default:
						break;
					}
					break;
				case 2:
					cout << "Desea cerrar la cuenta" << endl;
					cin >> opcion;
					break;
				default:
					break;
				}
				break;

			case 4:
				break;

			case 5:
				saldoTotal = e1.saldoTotal();
				break;
			}

			system("cls");
		}

	} while (opcion != 6);
}

void Menu::mostrarDatosPersonales()
{
	cout << "Nombre: " << e1.darNombre() << endl;
	cout << "Cedula: " << e1.darCedula() << endl;
	cout << endl;
}

void Menu::mostrarCalculos()
{
	cout << "Saldo : " << e1.darCuentaCorriente() << endl;
}

void Menu::mostrarCalculosCA()
{

	cout << "Saldo: " << e1.darCuentaAhorro() << endl;
}

void Menu::mostrarInCDT()
{

	//cout << "Saldo con interes: " << e1.invertirCDT() << endl;
}
void Menu::mostrarCalculosF()
{
	
	cout << "saldo total = " << e1.saldoTotal() << endl;
	
}

