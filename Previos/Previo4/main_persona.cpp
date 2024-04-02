#include <iostream>
#include "persona.hpp"

using namespace std;

int main() {
    Persona p("Juan", 25);

    // Se usan los metodos getNombre y getEdad
    cout << "Nombre: " << p.getNombre() << endl; 
    cout << "Edad: " << p.getEdad() << endl; 

    p.setEdad(26);

    cout << "Nueva edad: " << p.getEdad() << endl; 
    return 0; 
}