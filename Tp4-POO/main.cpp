#include <iostream>
#include "Cuenta.hpp"

using namespace std;

// Función para transferir dinero entre dos cuentas
bool transferir(Cuenta &origen, Cuenta &destino, double monto) {
    if (origen.extraer(monto)) {
        destino.depositar(monto);
        return true;
    }
    return false;
}


int main() {

    // Crear dos cuentas
    Cuenta cuenta1(12345, 44589781, 1000.0);  // Número de cuenta, DNI titular, saldo inicial
    Cuenta cuenta2(67890, 45690890, 2000.0); 
// Mostrar la información inicial de las cuentas
    cout << "Informacion inicial de las cuentas:" << endl;
    cuenta1.mostrarInformacion();
    cuenta2.mostrarInformacion();
    cout << endl;

      // Transferir $200 de cuenta1 a cuenta2
    if (transferir(cuenta1, cuenta2, 200.0)) {
        cout << "Transferencia realizada con exito!" << endl;
    } else {
        cout << "No se pudo realizar la transferencia (saldo insuficiente)." << endl;
    }

    // Mostrar la información de las cuentas después de la transferencia
    cout << endl << "Informacion despues de la transferencia:" << endl;
    cuenta1.mostrarInformacion();
    cuenta2.mostrarInformacion();

    return 0;

}