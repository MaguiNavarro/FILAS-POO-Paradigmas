#include <iostream>
#include <iomanip> 
using namespace std;
class Pelicula
{
private:
   static int autonumerico;
   int codigo;
    string titulo;
    string director;
    bool estreno;
    float precioBase;
    char tipoPelicula;

    
 
public:
    Pelicula();
    Pelicula(  string titulo, string director, bool estreno, float precio, char tipoPelicula);

      // Constructor de copia
    Pelicula(const Pelicula& p);


    void mostrarInformacion();
    float calcularCosto();

        // Getters 
    int getCodigo() const { return codigo; }
    string getTitulo() const { return titulo; }
    string getDirector() const { return director; }
    bool getEstreno() const { return estreno; }
    float getPrecioBase() const { return precioBase; }
    char getTipoPelicula() const { return tipoPelicula; }

};

