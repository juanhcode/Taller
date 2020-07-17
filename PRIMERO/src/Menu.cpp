#include "Menu.h"

Menu::Menu()
{
	opcion= 0;
	Fecha f1(4,9,1972); //Fecha nacimiento
	Fecha f2(1,1,2015); //Fecha ingreso
	fechaNacimiento= f1;
	fechaIngreso= f2;
	Empleado e("Pepito", "Arbelaez", 1, 2000000, fechaNacimiento, fechaIngreso, 4,1);
	e1= e;
	edad= 0, prestaciones= 0, antiguedad= 0;
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout<< endl;
	cout<<"1 - Modificar salario" << endl;
	cout<<"2 - Calcular edad" << endl;
	cout<<"3 - Calcular antiguedad" << endl;
	cout<<"4 - Calcular prestaciones" << endl;
	cout<<"5 - Salir" << endl;
	do
	{
		cout<<"Introduza Opcion: ";
		cin >> opcion;		
	}while(!((opcion>=1) && (opcion<=5)));		
}

void Menu::visualizar()
{
	int nuevoSalario= 0;
	do
	{
		mostrarDatosPersonales();
		mostrarCalculos();
		seleccionarOpcion();
		{
			switch(opcion)
			{
				case 1:
					cout<< "Introduzca el nuevo salario" << endl;
					cin >> nuevoSalario;
					e1.cambiarSalario(nuevoSalario);
					prestaciones= e1.calcularPrestaciones();
					break;
				
				case 2:
					edad= e1.calcularEdad();
					break;
				
				case 3: 
					antiguedad= e1.calcularAntiguedad();
					break;
				
				case 4:
					prestaciones= e1.calcularPrestaciones();			
					break;
			}
			system("cls");
		}
		
	}while(opcion!= 5);
	
}

void Menu::mostrarDatosPersonales()
{
	cout<< "Nombre: " << e1.darNombre() << endl;
	cout<< "Apellido: " << e1.darApellido() << endl;
	cout<< "Sexo: " << e1.darSexo() << endl;
	cout<< "Estado:  " << e1.darEstado() << endl;
	cout<< "Fecha nacimiento: " << fechaNacimiento.darDia() << "/" << fechaNacimiento.darMes() << "/" << fechaNacimiento.darAnio() << endl;
	cout<< "Fecha ingreso: " << fechaIngreso.darDia() << "/" << fechaIngreso.darMes() << "/" << fechaIngreso.darAnio() << endl;
	cout<< "Salario: " << e1.darSalario() << endl;
	cout<< endl;
}

void Menu::mostrarCalculos()
{
	if(edad > 0)
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
	}
	
}



