#include "CuentaCorriente.h"
#include <iostream>
using namespace std;

CuentaCorriente::CuentaCorriente(int dSaldo)
{
    saldo = dSaldo;
}

CuentaCorriente::CuentaCorriente()
{
    saldo = 0;
}

CuentaCorriente::~CuentaCorriente()
{
}

///DEPOSITAR
int CuentaCorriente::darSaldoCC()
{
    return saldo;
}

void CuentaCorriente::consignarSaldo(int consignacion)
{
    if(saldo <= consignacion)
    {
        saldo += consignacion;
    }
    else{
        cout << "no se pudo realizar la operacion" << endl;
    }
    system("pause");

 
    
}
//////

//RETIRAR
void CuentaCorriente::retirarSaldo(int descontar)
{

    if (saldo >= descontar)
    {
        saldo -= descontar;
    }
    else
    {
        cout << "no se pudo realizar la operacion" << endl;
    }
    system("pause");

}
