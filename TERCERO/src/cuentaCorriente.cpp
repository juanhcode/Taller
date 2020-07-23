#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(int dSaldo)
{
    saldo = dSaldo;
}

CuentaCorriente::CuentaCorriente(){
    saldo = 0;
}

CuentaCorriente::~CuentaCorriente()
{
}

int CuentaCorriente::darSaldoCC(){
    return saldo;
}

void CuentaCorriente::consignarSaldo(int consignacion){

    saldo +=  consignacion;
}

/*int CuentaCorriente::mostrarSaldo(){
    return darSaldoCC();
}*/