/*
  Nombre: Punto.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: Emanuel.benjumea@correounivalle.edu.co
         Lui.alegria@correounivalle.com
         gallego.cesar@correounivalle.edu.co
         vargas.steven@correounivalle.edu.co
         juan.manuel.hoyos@correounivalle.edu.co

*/

#include "Punto.h"

Punto::Punto()
{
    x=0;
    y=0;
}

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
