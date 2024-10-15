#ifndef FILA_H
#define FILA_H

#include <iostream>
using namespace std;
typedef int item;

// Nodo de la lista enlazada
struct Nodo {
    int dato;
    Nodo* siguiente;
 
};
class Fila
{
private:
    Nodo *frente;
    Nodo *final;
    int longitud;
 

public:
   // Constructor por defecto que crea una fila vacía
    Fila();

    // Destructor que elimina la memoria asignada dinámicamente en la fila
    ~Fila();

    // Constructor copia
    Fila(const Fila& otra);

    bool EsFilaVacia() const;
     // Retorna el elemento al frente de la fila
    int Frente() const;

    // Elimina el elemento al frente de la fila
    void Defila();

    // Agrega un elemento al final de la fila
    void Enfila(int valor);

    // Retorna la longitud de la fila
    int Longitud() const;

    bool Pertenece(int valor) const;

    void Mostrar() const;
};



#endif