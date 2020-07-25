/*
Nombre de archivo: Empleado.h
Version: 0.1
Fecha de creacion: 6/7/2020
Fecha de ultima modificacion: 6/7/2020
Autor:Juan Manuel Hoyos Contreras - 201958950-2711
     : Luis alberto alegria riascos -201958640-2711
     : Emanuel benjumea bejarano - 201958941-2711
     : cesar augusto gallego niño 1958553-2711
     : Steven Vargas González 1958675-2711
	 :
E-mail:				:juan.manuel.hoyos@correounivalle.edu.co
    				: vargas.steven@correounivalle.edu.co
                    : Emanuel.benjumea@correounivalle.edu.co
                    : gallego.cesar@correounivalle.edu.co
                    : Lui.alegria@correounivalle.edu.co
					:
*/

/*CRC
Clase: Empleado 
Responsabilidad: Cambiar y mostrar salario,estado, Calcular edad, Prestaciones, y antiguedad del empleado.
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
		//Funcion ejercicio 2
		string darEstado();
		//
		//Estas son las funciones del ejercicio 3 
		int calcularAuxilioConyugal();
		int darAuxilioC();
		//
		//Estas son las funciones Auxilio Educativo
		double calcularAuxilioEducativo();
		int darAuxilioEdu();
		//
		//Funcion 5
		int calcularDiferenciaSalarial(Empleado otroEmpleado);
		//
		//Estas son las funciones del ejercicio 4
		int darNuevoAuxilio();
		int CalcularAuxilioConyugal(double porcentaje);
		//

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

#endif //CLASSEMPLEADO
