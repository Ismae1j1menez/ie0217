#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std; 
class Persona {
private:
    string nombre; 
    int edad;

public:
    // Prototipo del constructor
    Persona(string nombre, int edad);
    string getNombre();
    int getEdad();
    void setEdad(int edad);
};

#endif 