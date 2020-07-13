/*
  Nombre: CDT.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
*/
#ifndef __CLASSCUENTAAHORRO
#define __CLASSCUENTAAHORRO
/*
   Clase: Punto
   Responsabilidad:
    - 
    - 
   Colaboracion: ninguna
*/
class CuentaAhorros
{
private:
    int Saldo;
    double interesMensual;
public:
    CuentaAhorros(int,double);
    ~CuentaAhorros();
};

CuentaAhorros::CuentaAhorros(int,double)
{
}

CuentaAhorros::~CuentaAhorros()
{
}
#endif // __CLASCUENTAAHORROS
