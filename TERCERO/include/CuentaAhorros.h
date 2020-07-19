/*
  Nombre: CDT.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
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
    CuentaAhorros(int,double);
    void pagarInteres(int saldo,double interesMensual);
    ~CuentaAhorros();
};

#endif // __CLASCUENTAAHORROS
