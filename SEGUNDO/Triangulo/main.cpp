#include <iostream>
#include "Punto.h"
#include "Triangulo.h"
#include "Menu.h"
#include "Triangulo.cpp"
#include "Punto.cpp"
#include "menu.cpp"
using namespace std;

int main()
{
	Menu menuT;
	menuT.visualizar();
	menuT.ColocarPuntos();
	menuT.cambiarPuntos();
	return 0;
}

