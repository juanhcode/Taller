/*
  Nombre: CDT.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
*/
#ifndef __MES
#define __MES
#include "Cliente.h"
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
    Mes(int);
    void darMes();
    int calcularDiferenciaMeses(Mes);
    void avanzarMes();
    ~Mes();
};

#endif // __CLASMES