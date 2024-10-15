#include <iostream>
#include <iomanip> 
#include "Cuenta.hpp"

using namespace std;
// Constructor
Cuenta::Cuenta(int num, long int titular, double monto) {
    numero = num;
    dniTitular = titular;
    saldo = (monto >= 0.0) ? monto : 0.0;
}
bool Cuenta::depositar(double monto) {
    if (monto >= 0.0) {
        saldo += monto;
        return true;
    }
    return false;
}
bool Cuenta::extraer(double monto) {
    if (monto <= saldo) {
        saldo -= monto;
        return true;
    }
    return false;
}

double Cuenta:: getSaldo(){
    return saldo; 
}

void Cuenta:: mostrarInformacion(){
    cout << "Numero de cuenta: "<< numero <<endl;
    cout <<"DNI Titular: " << dniTitular <<endl;
    cout << fixed << setprecision(2) << "Saldo: $" << saldo << endl;
}

int Cuenta::getNumero() {
    return numero;
}