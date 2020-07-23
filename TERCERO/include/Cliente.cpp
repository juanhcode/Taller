#include "Cliente.h"
#include <iostream>

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

string Cliente::darNombre(){
    return nombre;
}

string Cliente::darCedula(){
    return cedula;
}
//CUENTA CORIENTE
void Cliente::retirarCuentaCorriente(int saldo){
    int retirarSaldo;
    retirarSaldo = retirarSaldo -  saldo;

    if (retirarSaldo > saldo)
    {
        cout<<"No puede retirar"<<endl;
    }
    
}

void Cliente::consignarCuentaCorriente(int){
    int saldo;


}
//

// CUENTA AHORRO
void Cliente::consignarCuentaAhorro(int){

}

void Cliente::retirarCuentaAhorro(int){

}

// CUENTA CDT
void Cliente::invertirCDT(int,double){

}

void Cliente::cerrarCDT(){

}
//

//saldo total 
double Cliente::saldoTotal(){

}
//

/*Mes Cliente::darMesActualSimulacion(){

}*/

void Cliente::avanzarMeSimulacion(){
    
}

//g++ -o archivo.exe .\CDT.cpp .\Cliente.cpp .\cuentaAhorros.cpp .\cuentaCorriente.cpp .\main.cpp .\Menu.cpp .\Mes.cpp
//archivo.exe