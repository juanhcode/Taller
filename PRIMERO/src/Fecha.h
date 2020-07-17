/*Nombre de archivo: Fecha.h
Version: 0.1
Fecha de creaci�n: 27/06/2020
Fecha de �ltima de moficaci�n: 06/07/2020
Autor: Miguel �ngel Askar Rodr�guez - 201918564
Correos electr�nicos: miguel.askar@correounivalle.edu.co
*/

/*CRC:
Clase: Fecha
Responsabilidad:
-Mostrar el d�a de la fecha.
-Mostrar el mes de la fecha.
-Mostrar el a�o de la fecha.
-Calcular una diferencia entre meses de la fecha.
Colaboraci�n: Ninguna.
*/

#ifndef __CLASSFECHA
#define __CLASSFECHA

class Fecha
{
	private:
		int dia;
		int mes;
		int anio;
		
	public:
		Fecha(int dia, int mes, int anio);
		Fecha(){};
		~Fecha();
		int darDia();
		int darMes();
		int darAnio();		
		void asignarDia(int dia);
		int calcularDiferenciaMeses(Fecha fechaActual);
	
};

#endif // __CLASFECHA
