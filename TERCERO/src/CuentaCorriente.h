/*
  Nombre: CuentCorriente.h
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
   Clase: CuentaCorriente
   Responsabilidad:
    - 
    - 
   Colaboracion: ninguna
*/
#ifndef __CLASSCUENTACORRIENTE
#define __CLASSCUENTACORRIENTE
class CuentaCorriente
{
private:
    int saldo;
public:
    CuentaCorriente(int dSaldo);
    CuentaCorriente();
    int darSaldoCC();
    int mostrarSaldo();
    int darCuentaCorriente();
    ~CuentaCorriente();
};

#endif // __CLASCUENTACORRIENTE