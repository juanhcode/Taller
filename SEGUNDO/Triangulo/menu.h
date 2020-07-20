#ifndef __CLASSMENU
#define __CLASSMENU
#include "Punto.h"
#include "Triangulo.h"
class Menu
{
	private:
    int opcion;
    double puntos;
	Triangulo e1;

	public:
	Menu();
	~Menu();
	void visualizar();
	void mostrarMenu();
	double ColocarPuntos(double puntos);
	double cambiarPuntos(double puntos);
	double calcularPerimetro(double calcularLados);
	double calcularDistancia(double puntos);
	double calcularLados(double puntos, double calcularDistancia);
	double calcularArea(double calcularLados, double calcularPerimetro);
	double calcularAltura();


 ~Menu();

};
#endif //CLASMENU