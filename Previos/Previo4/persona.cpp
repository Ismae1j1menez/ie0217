#include "persona.hpp"
using namespace std; 

// Constructor 
Persona::Persona(string nombre, int edad){
    // Este miembro de la clase Persona = this->
    this->nombre = nombre; 
    this->edad = edad; 
}

string Persona::getNombre() {
    return nombre; 
}

int Persona::getEdad() {
    return edad; 
}

void Persona::setEdad(int edad) {
    this->edad = edad; 
}