/*
  Nombre: Triangulo.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificación: 2020
  Versión : 1.0
  Email: suMail
*/

#ifndef __CLASSTRIANGULO
#define __CLASSTRIANGULO
/*
   Clase: Triangulo
   Responsabilidad:  Deben completarlo
   Colaboración: Deben completarlo
*/

#include "Punto.h"
#include <cmath> //esta biblioteca sirve para utilizar los métodos matematicos por ej:
                 //sqrt(y), pow(x,p)

class Triangulo
{
  private:
     Punto punto1;
     Punto punto2;
     Punto punto3;
  public:
	Triangulo(Punto dPunto1, Punto dPunto2, Punto dPunto3);
	double calcularLado1();
	double calcularLado2();
	double calcularLado3();
	double calcularPerimetro();
	double calcularArea();
	double calcularAltura();
};
#endif
