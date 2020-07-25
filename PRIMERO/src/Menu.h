/*
Nombre de archivo: Menu.h
Version: 0.1
Fecha de creacion: 6/7/2020
Fecha de ultima modificacion: 24/7/2020
Autor:Juan Manuel Hoyos Contreras - 201958950-2711
     : Luis alberto alegria riascos -201958640-2711
     : Emanuel benjumea bejarano - 201958941-2711
     : cesar augusto gallego niño 1958553-2711
     : Steven Vargas González 1958675-2711
	 :
E-mail:				:juan.manuel.hoyos@correounivalle.edu.co
    				: vargas.steven@correounivalle.edu.co
                    : Emanuel.benjumea@correounivalle.edu.co
                    : gallego.cesar@correounivalle.edu.co
                    : Lui.alegria@correounivalle.edu.co
					:
*/

/*CRC
Clase: Menu.h
Responsabilidad: 
seleccionar las opciones,mostrar los datos del empleado y los calculos que tiene empleado
Colaboracion: Fecha.h
			Empleado.h
*/
#include <iostream>
#include "Empleado.h"
#include "Fecha.h"
#include <string>
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
		Empleado e2;
		Fecha fechaNacimiento;
		Fecha fechaIngreso;
		int edad, antiguedad, prestaciones, nuevoAuxilio;
		string estado;
};

#endif //__CLASSMENU
