/*
Nombre de archivo: Empleado.cpp
Version: 0.1
Fecha de creacion: 6/7/2020
Fecha de ultima modificacion: 6/7/2020
Autor: 
E-mail: 
*/

#include "Empleado.h"
#include "Fecha.h"
#include <iostream>
#include <math.h>

using namespace std;

int auxilioc;

Empleado::Empleado(string dNombre,
					string dApellido,
					int dSexo,
					int dSalario,
					Fecha dFechaNacimiento,
					Fecha dFechaIngreso,
					int dNumeroHijos,
					string dEstado
					)					
{
	nombre= dNombre;
	apellido= dApellido;
	sexo= dSexo;
	salario= dSalario;
	fechaNacimiento= dFechaNacimiento;
	fechaIngreso= dFechaIngreso;
	numeroHijos= dNumeroHijos;
	estado = dEstado;
}

Empleado::~Empleado()
{
	//Destructor.
}

string Empleado::darNombre()
{
	return nombre;
}

string Empleado::darApellido()
{
	return apellido;
}

int Empleado::darSexo()
{
	return sexo;
}

int Empleado::darSalario()
{
	return salario;
}

void Empleado::cambiarSalario(int nuevoSalario)
{
	salario= nuevoSalario;
}

int Empleado::calcularEdad()
{
	Fecha hoy(6, 7, 2020);
	int edad= fechaNacimiento.calcularDiferenciaMeses(hoy);
	return edad/12;
}

int Empleado::calcularAntiguedad()
{
	Fecha hoy(6, 7, 2020);
	int antiguedad= fechaIngreso.calcularDiferenciaMeses(hoy);
	return antiguedad/12;
}

int Empleado::calcularPrestaciones()
{
	int a= calcularAntiguedad();
	int p= (a*salario)/12;
	return p;
}

int Empleado::cantidadDeHijos()
{
	return numeroHijos;
}

//Ejercico 2
string Empleado::darEstado(){
	return estado;
}
///

//Ejercicio 3
int Empleado::calcularAuxilioConyugal(){
	
	auxilioc= (sqrt(0.75 * salario));
    return auxilioc;

}

int Empleado::darAuxilioC(){
	return calcularAuxilioConyugal();
}
////


double Empleado::calcularAuxilioEducativo()
{
	double auxilio = (darSalario() * 0.3) * cantidadDeHijos();
	return auxilio;
}

int Empleado::darAuxilioEdu(){
	return calcularAuxilioEducativo();
}

///Ejercicio 4
int Empleado::CalcularAuxilioConyugal(double porcentaje){

	auxilioc = (sqrt(porcentaje * darSalario()));
	return auxilioc;

}
int Empleado::darNuevoAuxilio(){
	return CalcularAuxilioConyugal(auxilioc);
}
//
///Ejercicio 5
int Empleado::calcularDiferenciaSalarial(Empleado otroEmpleado){

    int diferencia;
	diferencia = (otroEmpleado.salario - darSalario());
	return diferencia;
}


//g++ -o .\archivo.exe .\main.cpp .\Menu.cpp .\Empleado.cpp .\Fecha.cpp
//.\archivo.exe