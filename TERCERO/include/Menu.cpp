#include "Menu.h"
#include <cstdlib>

Menu::Menu()
{
	//opcion= 0;
	//Fecha f1(4,9,1972); //Fecha nacimiento
	//Fecha f2(1,1,2015); //Fecha ingreso
	//fechaNacimiento= f1;
	//fechaIngreso= f2;
	//Empleado e("Pepito", "Arbelaez", 1, 2000000, fechaNacimiento, fechaIngreso, 4,"Casado");
	//Empleado otroEmpleado("Luis","Pelaez",1,4000000,fechaNacimiento,fechaIngreso,5,"No casdo");
	//e1= e;
	//e2=otroEmpleado;
	//edad= 0, prestaciones= 0, antiguedad= 0;
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout<< endl;
	cout<<"1 - Hacer Operaciones" << endl;
	cout<<"2 - Avanzar mes por mes en el Tiempo" << endl;
	cout<<"3 - Salir" << endl;
	do
	{
		cout<<"Introduza Opcion: ";
		cin >> opcion;		
	}while(!((opcion>=1) && (opcion<=3)));		
}

void Menu::visualizar()
{
	int nuevoSalario = 0;
	
	do
	{
		mostrarDatosPersonales();
		mostrarCalculos();
		seleccionarOpcion();
		{
			switch(opcion)
			{
				case 1:
					break;
				
				case 2:
					break;
				
				case 3: 
					break;

					
			}
			system("cls");
		}
		
	}while(opcion!= 3);
	
}
 
void Menu::mostrarDatosPersonales()
{
	cout<< "Nombre: " << endl;
	cout<< "Cedula: " << endl;
	cout<< endl;
}

void Menu::mostrarCalculos()
{
	/*if(edad > 0)
	{
		cout<< "Edad= " << edad << endl;		
	}
	if(antiguedad > 0)
	{
		cout<< "Antiguedad= " << antiguedad << endl;
	}
	if(prestaciones > 0)
	{
		cout << "Prestaciones= " << prestaciones << endl;
	}*/
}