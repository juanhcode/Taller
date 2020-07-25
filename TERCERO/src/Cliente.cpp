#include "Cliente.h"
#include <iostream>
#include "math.h"
using namespace std;


Cliente::Cliente(string dNombre,
                string dCedula,
                CuentaCorriente dCuentaCo,
                CuentaAhorros dCuentaAho,
                CDT dcDT,
                Mes dmEs)
{
    nombre = dNombre;
    cedula = dCedula;
    cCorriente = dCuentaCo; 
    cCAhorros = dCuentaAho;
    cDT = dcDT;
    mEs = dmEs;
 
}

Cliente::Cliente(){
    
}

Cliente::~Cliente()
{
}
//Datos Personales
string Cliente::darNombre(){
    return nombre;
}

string Cliente::darCedula(){
    return cedula;
}
//
//CUENTA CORIENTE
void Cliente::retirarCuentaCorriente(int saldoCC){

     cCorriente.retirarSaldo(saldoCC);
}

void Cliente::consignarCuentaCorriente(int saldoCC){
    
     cCorriente.consignarSaldo(saldoCC);
}

int Cliente::darCuentaCorriente(){
    
    return cCorriente.darSaldoCC();
}
//

// CUENTA AHORRO
void Cliente::consignarCuentaAhorro(int darSaldoCA){

    cCAhorros.consignarSaldoCA(darSaldoCA);
}

void Cliente::retirarCuentaAhorro(int SaldoCA){

    cCAhorros.retirarCuentaAhorro(SaldoCA);
    
}
int Cliente::darCuentaAhorro(){

    return cCAhorros.darSaldoCA();
}

void Cliente::interesMensualCA(){
    int mult;

    mult = ((cCAhorros.darSaldoCA() * 0.006) - cCAhorros.darInteresMensual());

}
//

// CUENTA CDT

void Cliente::invertirCDT(int dineroCDT,double interesM){

    pow(dineroCDT,2)+(interesM);

}


void Cliente::cerrarCDT(){

}
//
// SALDO TOTAL 
double Cliente::saldoTotal(){
    
    cCorriente.darSaldoCC() + cCAhorros.darSaldoCA();
}
//

Mes Cliente::darMesActualSimulacion(){

}

void Cliente::avanzarMeSimulacion(){
    
}

//g++ -o archivo.exe .\CDT.cpp .\Cliente.cpp .\cuentaAhorros.cpp .\cuentaCorriente.cpp .\main.cpp .\Menu.cpp .\Mes.cpp
//archivo.exe