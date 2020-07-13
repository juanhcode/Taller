/*Nombre de archivo: Fecha.h
Versión: 0.1
Fecha de creación: 27/06/2020
Fecha de última de moficación: 06/07/2020
Autor: Miguel Ángel Askar Rodríguez - 201918564
Correos electrónicos: miguel.askar@correounivalle.edu.co
*/

/*CRC:
Clase: Fecha
Responsabilidad:
-Mostrar el día de la fecha.
-Mostrar el mes de la fecha.
-Mostrar el año de la fecha.
-Calcular una diferencia entre meses de la fecha.
Colaboración: Ninguna.
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
