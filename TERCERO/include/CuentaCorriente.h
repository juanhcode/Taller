/*
  Nombre: CuentCorriente.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
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
    CuentaCorriente(int);
    void depositarSaldo(int nuevoSaldo);
    ~CuentaCorriente();
};

#endif // __CLASCUENTACORRIENTE