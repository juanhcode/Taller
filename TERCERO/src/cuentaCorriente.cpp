#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(int dSaldo)
{
    saldo = dSaldo;
}

CuentaCorriente::CuentaCorriente(){
    
}

CuentaCorriente::~CuentaCorriente()
{
}

int CuentaCorriente::darSaldoCC(){
    return saldo;
}

int CuentaCorriente::mostrarSaldo(){
    return darSaldoCC();
}