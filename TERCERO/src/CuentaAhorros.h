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
*/
/*
   Clase: Punto
   Responsabilidad:
    - 
    - 
   Colaboracion: ninguna
*/
#ifndef __CLASSCUENTAAHORRO
#define __CLASSCUENTAAHORRO
class CuentaAhorros
{
private:
    int saldo;
    double interesMensual;
public:
    CuentaAhorros(int dSaldo,double dInteresMensual);
    CuentaAhorros();
    void pagarInteres(int saldo,double interesMensual);
    ~CuentaAhorros();
};

#endif // __CLASCUENTAAHORROS
