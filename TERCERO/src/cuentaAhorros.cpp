#include "CuentaAhorros.h"
#include <iostream>
using namespace std;

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

    if(saldo <= consignarCA)
    {
        saldo = saldo + consignarCA;
    }
    else{
        cout << "no se pudo realizar la operacion" << endl;
    }
    system("pause");
}
///Retirar
void CuentaAhorros::retirarCuentaAhorro(int descontarCA){

    if (saldo >= descontarCA)
    {
        saldo -= descontarCA;
    }
    else
    {
        cout << "no se pudo realizar la operacion" << endl;
    }
    system("pause");
    
}
//

int CuentaAhorros::darInteresMensual(){
    return interesMensual;
}


/*void CuentaAhorros::pagarInteres(int saldo,double interesMensual){
    
    interesMensual = 0.6;
    saldo = saldo*interesMensual;
}*/