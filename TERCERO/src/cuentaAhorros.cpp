#include "CuentaAhorros.h"

CuentaAhorros::CuentaAhorros(int dSaldo,double dInteresMensual)
{
    saldo = dSaldo;
    interesMensual = dInteresMensual;
}

CuentaAhorros::CuentaAhorros(){
    
}

CuentaAhorros::~CuentaAhorros()
{
    //Destructor
}

void CuentaAhorros::pagarInteres(int saldo,double interesMensual){
    
    interesMensual = 0.6;
    saldo = saldo*interesMensual;
}