/*
  Nombre: Punto.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Version : 1.0
  Email: suMail
*/
#include "Punto.h"
Punto::Punto(int dX, int dY )
{
    x = dX;
    y = dY;
}

Punto::~Punto()
{
}

void Punto::cambiarX(int x1)
{
    x = x1;
}

void Punto::cambiarY(int y1)
{
    y = y1;
}

int Punto::darX()
{
    return x;
}

int Punto::darY()
{
    return y;
}
