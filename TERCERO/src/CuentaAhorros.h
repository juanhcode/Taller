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
    ~CuentaAhorros();
    //Depositar
    int darSaldoCA();
    void consignarSaldoCA(int consigarCA);
    //
    //Retirar
    void retirarCuentaAhorro(int descontarCA);
    //Calcular interes mensual
    int darInteresMensual();



    //void pagarInteres(int saldo,double interesMensual);
};

#endif // __CLASCUENTAAHORROS
