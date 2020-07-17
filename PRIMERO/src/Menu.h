#include <iostream>
#include "Empleado.h"
#include "Fecha.h"

#include <stdlib.h>

using namespace std;

#ifndef __CLASSMENU
#define __CLASSMENU

class Menu
{
	public:
		Menu();
		virtual ~Menu();
		void seleccionarOpcion();
		void visualizar();
		void mostrarDatosPersonales();
		void mostrarCalculos();
		
	
	protected:
		//Lo utilizaremos cuando trabajemos con herencia.
		
	private:
		int opcion;
		Empleado e1;
		Fecha fechaNacimiento;
		Fecha fechaIngreso;
		int edad, antiguedad, prestaciones;
		///////////////
		string estadoCivil;
		//////////////
};

#endif //__CLASSMENU
