/*
  Nombre: Menu.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: juan.manuel.hoyos@correounivalle.edu.co
        emanuel.benjumea@correounivalle.edu.co
        cifuentes.sebastian@correounivalle.edu.co
        Lui.alegria@correounivalle.edu.co
        vargas.steven@correounivalle.edu.co

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
#include "CDT.h"
#include "CuentaAhorros.h"
#include "CuentaCorriente.h"
#include "Mes.h"
class Menu
{

private:
  int opcion;
  Cliente e1;
  CuentaCorriente CuentaCo;
  CuentaAhorros CuentaAho;
  CDT cDT;
  Mes mEs;
  int saldoTotal;

public:
  Menu();
  ~Menu();
  void seleccionarOpcion();
  void visualizar();
  void mostrarDatosPersonales();
  void mostrarCalculos();
  void mostrarCalculosCA();
  void mostrarCalculosF();
  void mostrarInCDT();

};

#endif // __CLASMENU