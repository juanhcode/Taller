/*
  Nombre: Punto.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificación: 2020
  Versión : 1.0
  Email: suMail
*/

#ifndef __CLASSPUNTO
#define __CLASSPUNTO
/*
   Clase: Punto
   Responsabilidad:
    - Simula ser un punto  del plano cartesiano,de coordenadas (x,y).
    - A traves de ella, podemos crear, cambiar y devolver puntos en el plano cartesiano.
   Colaboración: ninguna
*/


class Punto
{
  private:
     int x;
     int y;
  public:
    Punto();
    Punto(int dX, int dY);
	~Punto();
	int darX();
	int darY();
	void cambiarX(int x1);
	void cambiarY(int y1);
};
#endif
