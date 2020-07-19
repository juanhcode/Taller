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
#ifndef __CLASSCLIENTE
#define __CLASSCLIENTE
#include "Mes.h"
#include "CuentaCorriente.h"
#include "CDT.h"
#include "CuentaAhorros.h"
#include <iostream>
using namespace std;
class Cliente
{
private:
    string nombre;
    string cedula;
    CuentaCorriente cCorriente;
public:
    Cliente(string nombre,string cedula, CuentaCorriente, CuentaCo,CuentaAhorros CuentaAho,CDT cdt,Mes Mes1);
    string darNombre();
    string darCedula();
    void invertirCDT(int,double);
    void consignarCuentaAhorro(int);
    void cerrarCDT();
    void consignarCuentaCorriente(int);
    void retirarCuentaCorriente(int);
    void retirarCuentaAhorro(int);
    double saldoTotal();
    Mes darMesActualSimulacio();
    void avanzarMeSimulacion();
    ~Cliente();
};

#endif // __CLASCLIENTE
