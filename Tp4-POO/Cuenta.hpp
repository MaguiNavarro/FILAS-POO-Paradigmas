
#define CUENTA_H
#include <iostream>

class Cuenta
{
private:
    int numero;
    long int dniTitular;
    double saldo;
public:
     // Constructor
    Cuenta(int numero, long int titular, double monto = 0.0 );
 

   // Método para depositar dinero
    bool depositar(double monto);
    bool extraer(double monto ); 
    double getSaldo();
    void mostrarInformacion();
       int getNumero() ;


};
