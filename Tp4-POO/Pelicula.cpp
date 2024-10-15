#include <iostream>
#include <iomanip> 
using namespace std;

#include "Pelicula.hpp"

int Pelicula::autonumerico = 1;  // Inicialización del autonumérico

// Constructor por defecto 
Pelicula::Pelicula() : codigo(0), titulo(""), director(""), estreno(false), precioBase(0.0f), tipoPelicula('N') {
    // No se incrementa el autonumérico porque el código es 0 en este caso

}
// Constructor con parámetros

Pelicula::Pelicula( string titul, string direc, bool estre, float precio, char tipoPeli){
     
     codigo= autonumerico++;
     titulo= titul;
     director= direc;
     estreno=estre;
     precioBase= precio;
     tipoPelicula = tipoPeli;

} 
//Constructor Copia
Pelicula::Pelicula(const Pelicula& original){
     // No incrementar autonumerico, copiamos tal cual los atributos del objeto original, ya que el objetivo del constructor copia es duplicar el objeto tal como es, sin modificar el código.
    codigo = original.codigo; // Mantener el mismo código
    titulo= original.titulo;
    director= original.director;
    estreno= original.estreno;
    precioBase= original.precioBase;
    tipoPelicula= original.tipoPelicula;
}
// Método para listar la información
void Pelicula::mostrarInformacion()  {
    cout << "Codigo: " << codigo << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Director: " << director << endl;
    cout << "Estreno: " << (estreno ? "Si" : "No") << endl;
    cout << "Precio Base: $" << precioBase << endl;
    cout << "Tipo de Pelicula: " << (tipoPelicula == 'N' ? "Nacional" : "Internacional") << endl;
}
// Método para calcular el costo
float Pelicula::calcularCosto()  {
    float costo = precioBase;

    if (tipoPelicula == 'I') {
        costo *= 1.30;  // Si es internacional, se aumenta el costo en un 30%
    } else if (!estreno) {
        costo *= 0.8;  // Si no es estreno, se disminuye el costo en un 20%
    }

    return costo;
}

int main() {
    // Crear una película usando el constructor por defecto
    Pelicula p1;
    p1.mostrarInformacion();
    cout << "Costo: $" << p1.calcularCosto() << endl << endl;

     // Crear una película usando el constructor con parámetros
    Pelicula p2("Inception", "Christopher Nolan", true, 100.0, 'I');
    p2.mostrarInformacion();
    cout << "Costo: $" << p2.calcularCosto() << endl << endl;

    // Crear una copia de la película p2 usando el constructor copia
    Pelicula p3(p2);
    p3.mostrarInformacion();
    cout << "Costo: $" << p3.calcularCosto() << endl << endl;

    return 0 ;
 }