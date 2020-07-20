/*
  Nombre: Punto.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/
/*
   Clase: Punto
   Responsabilidad:
    - Simula ser un punto  del plano cartesiano,de coordenadas (x,y).
    - A traves de ella, podemos crear, cambiar y devolver puntos en el plano cartesiano.
   Colaboracion: ninguna
*/

#ifndef __CLASSPUNTO
#define __CLASSPUNTO
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
  double colocarPuntos(int x,int y);
};
#endif //CLASPUNTO
