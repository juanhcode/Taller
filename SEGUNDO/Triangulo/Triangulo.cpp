/*
  Nombre: Triangulo.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/
#include "Punto.h"
#include"Punto.cpp"
#include "Triangulo.h"
#include <math.h>

double puntoN1, puntoN2, puntoN3;

Triangulo::Triangulo(Punto dPunto1,Punto dPunto2, Punto dPunto3)
{
    punto1 = dPunto1;
    punto2 = dPunto2;
    punto3 = dPunto3;
}

//utilice la formula de la distancia entre dos puntos para el metodo darLado1.
//es necesario utilizar las funciones pow(x,2), sqrt(y) de la biblioteca cmath
void cambiarX(int x1;
void cambiarY(int y1, int Yy);
void darX(int x11);
void darY(int y1);

double Triangulo::calcularLado1(){
    //calcula las restas
    double valorX = 0; 
    //valorX = x2-x1;
    
    double valorY = 0; 
    //valorY = y2-y1; 
    
    //calcula las restas
    //calcula la distancia
    
    double x1, x2, y1, y2;
    double distancia =0;
    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    
    
    //completarlo
    return distancia;
};

double Triangulo::calcularLado2()
{
    //calcula la distancia
    double distancia = 0;
    return distancia;
}

double Triangulo::calcularLado3()
{
    //calcula la distancia
    double distancia = 0;
    return distancia;
}

double Triangulo::calcularPerimetro()
{
    return calcularLado1() + calcularLado2() + calcularLado3();
}

//Para calcular el area se puede utilizar la siguiente ecuacin
//RaizCuadrada(s * (s - Lado1) * (s - Lado2) * (s - Lado3))
//Donde s = perimetro / 2

double Triangulo::calcularArea() //falta por implementar con base en la informacion anterior
{
    double area = 0;
    return area;
}

//Tenga en cuenta que area = (base * altura)/2
//Es necesario despejar altura
double Triangulo::calcularAltura(int area) // falta por implementar
{
    double altura = 0;
    return altura;
}
