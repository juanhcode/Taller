/*
  Nombre: CDT.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: juan.manuel.hoyos@correounivalle.edu.co
  emanuel.benjumea@correounivalle.edu.co
  cifuentes.sebastian@correounivalle.edu.co
  Lui.alegria@correounivalle.edu.co
  vargas.steven@correounivalle.edu.co
*/
#ifndef __CLASSMES
#define __CLASSMES

/*
   Clase: Punto
   Responsabilidad:
    - 
    - 
   Colaboracion: ninguna
*/
class Mes
{
private: 
    int mes;
public:
    Mes(int dMes);
    Mes();
    void darMes();
    int calcularDiferenciaMeses(Mes otroMes);
    void avanzarMes();
    ~Mes();
};

#endif // __CLASMES