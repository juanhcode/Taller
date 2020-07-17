/*
Nombre de archivo: Empleado.h
Version: 0.1
Fecha de creacion: 6/7/2020
Fecha de ultima modificacion: 6/7/2020
Autor:Juan Manuel Hoyos Contreras - 201958950-2711
E-mail:
*/

/*CRC
Clase: Empleado 
Responsabilidad: Cambiar y mostrar salario, Calcular edad, Prestaciones, y antiguedad del empleado.
Colaboracion: Fecha.h
*/

#include "Fecha.h"
#include <string>

using namespace std; 

#ifndef __CLASSEMPLEADO
#define __CLASSEMPLEADO 

class Empleado
{
	public:
		Empleado(string nombre, string apellido, int sexo, int salario, Fecha fechaNacimiento, Fecha fechaIngreso, int numeroHijos,string estado);
		Empleado(){};
		~Empleado();
		string darNombre();
		string darApellido();
		int darSexo();
		int darSalario();
		void cambiarSalario(int);		
		int calcularEdad();
		int calcularAntiguedad();
		int calcularPrestaciones();		
		int cantidadDeHijos();
		double auxilioEducativo();
		string darEstado(); 
		int calcularAuxilioConyugal();
		int calcularAuxilioEducativo(int salario);
		int calcularDiferenciaSalarial(Empleado otroEmpleado);
		
	private:
		string nombre;
		string apellido;
		int sexo;
		int salario;
		Fecha fechaNacimiento;
		Fecha fechaIngreso;
		int numeroHijos;
		string estado;		
};

#endif
