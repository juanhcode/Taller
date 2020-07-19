/*
  Nombre: Menu.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
*/
/*
   Clase: Menu.h
   Responsabilidad:
    - Seleccionar Una Opcion
    - Visualizar las opciones
    - mostrar los datos personas como el nombre y cedula
    
   Colaboracion: ninguna
*/
#ifndef __CLASSMENU
#define __CLASSMENU
#include "Cliente.h"
class Menu
{

private:
  int opcion;
  int opcion2;
  Cliente e1;
  int saldo;

public:
  Menu();
  ~Menu();
  void seleccionarOpcion();
  void visualizar();
  void mostrarDatosPersonales();
  void mostrarCalculos();


};

#endif // __CLASMENU