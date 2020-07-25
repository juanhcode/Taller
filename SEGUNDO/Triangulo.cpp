/*
  Nombre: Triangulo.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacipn: 2020
  Version : 1.0
  Email: Emanuel.benjumea@correounivalle.edu.co
         Lui.alegria@correounivalle.com
         gallego.cesar@correounivalle.edu.co
         vargas.steven@correounivalle.edu.co
         juan.manuel.hoyos@correounivalle.edu.co

*/

#include "Triangulo.h"
#include "cmath"

Triangulo::Triangulo(Punto dPunto1,Punto dPunto2, Punto dPunto3)
{
    punto1 = dPunto1;
    punto2 = dPunto2;
    punto3 = dPunto3;
}

Triangulo::Triangulo(){

}

//utilice la formula de la distancia entre dos puntos para el metodo darLado1.
//es necesario utilizar las funciones pow(x,2), sqrt(y) de la biblioteca cmath

double Triangulo::calcularLado1()
{   
    //calcula las restas
    double x = 0; //completarlo                    
    double y = 0; //completarlo

    /*
    double x1,x2,y1,y2,distancia = 0;
	
	distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    */

    
    //calcula la distancia
    double distancia = 0; //completarlo
    distancia =sqrt(pow(calcularLado2() - x,2)+pow(calcularLado2() - y,2));
    return distancia;
}


double Triangulo::mostrarLado1(){
    return calcularLado1();
}
double Triangulo::calcularLado2()
{
    double x = 0;
    double y = 0;
    //calcula la distancia
    double distancia = 0;
    distancia =sqrt(pow(calcularLado3(),2.)+pow(x - y,2.));
    return distancia;
}

double Triangulo::calcularLado3()
{
    double x = 0;
    double y = 0;
    //calcula la distancia
    double distancia = 0;
    distancia =sqrt(pow(x - y,2.)+pow(calcularLado1(),2.));
    return distancia;
}

double Triangulo::calcularPerimetro()
{
    return calcularLado1() + calcularLado2() + calcularLado3();
}

//Para calcular el area se puede utilizar la siguiente ecuacion
//RaizCuadrada(s * (s - Lado1) * (s - Lado2) * (s - Lado3))
//Donde s = perimetro / 2

double Triangulo::calcularArea() //falta por implementar con base en la informacion anterior
{
    
    int s;
    s = calcularPerimetro() / 2;    
    double area = 0;
    sqrt(s*(s-calcularLado1())*(s-calcularLado2())*(s-calcularLado3()));
    return area;
}

//Tenga en cuenta que area = (base * altura)/2
//Es necesario despejar altura
double Triangulo::calcularAltura() // falta por implementar
{
    
    double altura = 0;
    altura = calcularArea();
    return altura;
}
//altura = lado1 * lado2 / lado3 eso salen un poco de formulas