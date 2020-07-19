#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#ifndef __CLASSMENU
#define __CLASSMENU 

class Menu
{
	private:
        int opcion;
    
    
    public:
		Menu();
		virtual ~Menu();
		void seleccionarOpcion();
		void visualizar();
		void mostrarDatosPersonales();
		void mostrarCalculos();	
};

#endif //__CLASSMENU