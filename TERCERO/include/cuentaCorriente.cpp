#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(int dSaldo)
{
    saldo = dSaldo;
}

CuentaCorriente::~CuentaCorriente()
{
}

void CuentaCorriente::depositarSaldo(int nuevoSaldo){
    saldo = nuevoSaldo;

}

int CuentaCorriente::retirarsaldo(int saldo){
    int retirar;
    saldo -= retirar;

    return saldo;
}