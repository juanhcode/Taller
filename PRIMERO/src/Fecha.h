/*Nombre de archivo: Fecha.h
Version: 0.1
Fecha de creacion: 27/06/2020
Fecha de ultima de moficacion: 06/07/2020
Autor: Juan Manuel Hoyos Contreras - 201958950-2711
Correos electronicos: 
*/

/*CRC:
Clase: Fecha
Responsabilidad:
-Mostrar el dia de la fecha.
-Mostrar el mes de la fecha.
-Mostrar el año de la fecha.
-Calcular una diferencia entre meses de la fecha.
Colaboracion: Ninguna.
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
