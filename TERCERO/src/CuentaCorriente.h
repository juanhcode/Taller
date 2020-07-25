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
  vargas.steven@correounivalle.edu.co
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
    //Consignar
    int darSaldoCC();
    void consignarSaldo(int consignacion);
    //Retirar
    void retirarSaldo(int descontar);
    int darCuentaCorriente();
    ~CuentaCorriente();
};

#endif // __CLASCUENTACORRIENTE