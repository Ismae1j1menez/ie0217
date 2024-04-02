#include <iostream>
using namespace std; 

class Molde {
    // Acces specifier
    public:
        // Data members
        double largo; 
        double ancho; 
        double altura;

    // Constructor
    Molde(){
        cout << "Esto se ejecuta en cada instanciación" << endl; 
        cout << "Inicianco un objeto de la clase Room" << endl; 
    }

    // Member functions
    double calcularArea() {
        return largo * ancho;
    }

    double calcularVolumen() {
        return largo * ancho * altura; 
    }
}; 

int main() {
    /* Instanciar un objeto llamado pared basado en la clase Molde */
    Molde pared; 

    /* Asignar valores al objeto pared */
    pared.largo = 400.5; 
    pared.ancho = 20.8; 
    pared.altura = 315.2;

    /* Calcular y desplegar el area y volumen */
    cout << "Area = " << pared.calcularArea() << endl; 
    cout << "Volumen = " << pared.calcularVolumen() << endl; 
    return 0; 
}