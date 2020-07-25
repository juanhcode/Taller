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
#ifndef __CLASSCLIENTE
#define __CLASSCLIENTE
#include "Mes.h"
#include "CuentaCorriente.h"
#include "CuentaAhorros.h"
#include "CDT.h"
#include <iostream>
using namespace std;
class Cliente
{
private:
    string nombre;
    string cedula;
    CuentaCorriente cCorriente;
    CuentaAhorros cCAhorros;
    CDT cDT;
    Mes mEs;
    
public:
    Cliente(string nombre,string cedula,CuentaCorriente CuentaCo, CuentaAhorros CuentaAho,CDT cDT,Mes mE);
    Cliente();
    string darNombre();
    string darCedula();
    //CUENTA CORRIENTE
    void consignarCuentaCorriente(int saldoCC);
    void retirarCuentaCorriente(int saldoCC);
    int darCuentaCorriente(); 
    //
    // CUENTA AHORRO
    void retirarCuentaAhorro(int saldoCA);
    void consignarCuentaAhorro(int saldoCA);
    int darCuentaAhorro();
    void interesMensualCA();
    //
    //CUENTA CDT
    void invertirCDT(int dineroCDT,double interesM,int cantidadM);
    //int calcularMes(int cantidadM);
    void cerrarCDT();
    int mostrarInvertirCDT();
    //double darInteresMensualCD();
    //int darMesCD();
    //
    //SALDO TOTAL SUMA DE LOS 3 PRODUCTOS
    double saldoTotal();
    //
    //Mes darMesActualSimulacion();
    void avanzarMeSimulacion();
    ~Cliente();
};

#endif // __CLASCLIENTE
