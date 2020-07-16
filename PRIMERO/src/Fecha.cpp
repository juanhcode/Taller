/*Nombre de archivo: Fecha.cpp
Versi�n: 0.1
Fecha de creaci�n: 27/06/2020
Fecha de �ltima de moficaci�n: 06/07/2020
Autor: Miguel �ngel Askar Rodr�guez - 201918564
Correos electr�nicos: miguel.askar@correounivalle.edu.co
*/

#include "./Fecha.h"

Fecha::Fecha(int nDia, int nMes, int nAnio)
{
	dia= nDia;
	mes= nMes;
	anio= nAnio;
}

Fecha::~Fecha()
{
	//Destructor
}

int Fecha::darDia()
{
	return dia;
}

int Fecha::darMes()
{
	return mes;
}

int Fecha::darAnio()
{
	return anio;
}

void Fecha::asignarDia(int nDia)
{
	dia= nDia;
}

int Fecha::calcularDiferenciaMeses(Fecha fA)
{
	int a= fA.darAnio() - anio;
	int m= fA.darMes() - mes;
	int d= fA.darDia() - dia;
	
	int diferencia= a*12 + m;
	
	if(d<0)
	{
		diferencia= diferencia - 1;
	}
	
	return diferencia;
}













