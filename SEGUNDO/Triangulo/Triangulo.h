/*
  Nombre: Triangulo.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha ModificaciOn: 2020
  VersiOn : 1.0
  Email: suMail
*/
/*
   Clase: Triangulo
   Responsabilidad: La clase triangulo tiene la funcion de de calcular todas las operaciones que el usuario quiera saber 
                    acerca del triangulo
   ColaboraciOn:Punto.h
*/
#ifndef __CLASSTRIANGULO
#define __CLASSTRIANGULO
#include "Punto.h" 
#include <cmath> //esta biblioteca sirve para utilizar los metodos matematicos por ej:
                 //sqrt(y), pow(x,p)

class Triangulo
{
  private:
     Punto punto1;
     Punto punto2;
     Punto punto3;
  public:
	Triangulo(Punto dPunto1, Punto dPunto2, Punto dPunto3);
  Triangulo();
  ~Triangulo();
	double calcularLado1();
	double calcularLado2();
	double calcularLado3();
	double calcularPerimetro();
	double calcularArea();
	double calcularAltura();
};

#endif //CLASTRIANGULO
