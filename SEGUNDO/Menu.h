#include <iostream>
#include <string>
#include <stdlib.h>
#include "Triangulo.h"

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
        void opcionAuxiliar();
        void mostrarLado1();
		
		
	protected:
		//Lo utilizaremos cuando trabajemos con herencia.
		
	private:
	    
		int opcion,puntos;
        Triangulo e1;
		Punto p1;
        Punto p2;
        Punto p3;
		double perimetro, area, altura;
};

#endif //__CLASSMENU