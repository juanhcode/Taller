#include "CuentaAhorros.h"

CuentaAhorros::CuentaAhorros(int dSaldo,double dInteresMensual)
{
    saldo = dSaldo;
    interesMensual = dInteresMensual;
}

CuentaAhorros::CuentaAhorros(){
    saldo = 0;
}

CuentaAhorros::~CuentaAhorros()
{
    //Destructor
}
///Depositar
int CuentaAhorros::darSaldoCA(){
    return saldo;
}

void CuentaAhorros::consignarSaldoCA(int consignarCA){
    saldo = saldo + consignarCA;
}
///Retirar
void CuentaAhorros::retirarCuentaAhorro(int descontarCA){

    saldo -= descontarCA;
}
//

int CuentaAhorros::calcularInteresMensual(){
    return interesMensual;
}


/*void CuentaAhorros::pagarInteres(int saldo,double interesMensual){
    
    interesMensual = 0.6;
    saldo = saldo*interesMensual;
}*/