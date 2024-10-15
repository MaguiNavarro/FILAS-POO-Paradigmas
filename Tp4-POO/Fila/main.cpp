#include <iostream>

#include "Fila.h"

using namespace std;

int ContarX(Fila F, item X);

int main() {


	// Creamos una fila y agregamos algunos elementos
    Fila fila;// Creo un objeto fila con el constructor por defecto
    fila.Enfila(1);
    fila.Enfila(2);
    fila.Enfila(3);
    fila.Enfila(1);
    fila.Enfila(5);

  
    cout << "Fila original: ";
    fila.Mostrar();

    int X = 1;
    cout << "Cantidad de elementos iguales a " << X << ": " << ContarX(fila, X) << endl;

    // Mostramos la fila después de ContarX
    cout << "Fila despues de ContarX: ";
    fila.Mostrar();

    // Probamos el constructor copia
    Fila filaCopia(fila);
    cout << "Fila copia: ";
    filaCopia.Mostrar();

	// PUNTO 4) c.

	/*
	// Invoco a la operacion externa contarX que trabaja sobre una copia local del par�metro fila
	int cantidad = contarX(F, 3);

	cout<<"Cantidad de elenentos iguales a X:  "<<cantidad<<endl;


	// Muestro por pantalla la fila luego de la invocacion a la operaci�n mostrar
	cout<<"Muestro por pantalla la fila luego de invocar a la operacion externa contarX"<<endl;
	F.Mostrar();
	*/

	return 0 ;
}

// Función que cuenta los elementos iguales a X en la fila
int ContarX(Fila fila, item X) {
    int contador = 0;
    while (!fila.EsFilaVacia()) {
        if (fila.Frente() == X) {
            contador++;
        }
        fila.Defila();
    }
    return contador;
}