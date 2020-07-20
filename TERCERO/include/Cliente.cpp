#include "Cliente.h"

Cliente::Cliente(string dNombre,
                string dCedula,
                CuentaCorriente dCuentaCorriente,
                CuentaAhorros dCuentaAhorros,
                CDT dCDT,
                Mes dMes)
{
    nombre = dNombre;
    cedula = dCedula;
    cCorriente = dCuentaCorriente; 
    cCAhorros = dCuentaAhorros;
    cDT = dCDT;
    mEs = dMes;
 
}

Cliente::~Cliente()
{
}


string Cliente::darNombre(){
    return nombre;
}

string Cliente::darCedula(){
    return cedula;
}

void Cliente::invertirCDT(int,double){

}

void Cliente::consignarCuentaAhorro(int){

}

void Cliente::cerrarCDT(){

}

void Cliente::retirarCuentaCorriente(int){

}

void Cliente::retirarCuentaAhorro(int){

}

double Cliente::saldoTotal(){

}

Mes Cliente::darMesActualSimulacio(){

}

void Cliente::avanzarMeSimulacion(){
    
}