#include "Contacto.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>

// Constructor
Contacto::Contacto(const char* nom, const char* tel) {
    // Reserva una cantidad de memoria de la longitd del miembro + 1 (por el caracter nullo)
    nombre = (char*)malloc(strlen(nom) + 1);  
    telefono = (char*)malloc(strlen(tel) + 1);
    // Revisa si nombre y telefono son null, sino lo son entonces se copia nom y tel en la memoria
    if (nombre) strcpy(nombre, nom); 
    if (telefono) strcpy(telefono, tel); 
}

// Destructor, se libera la memoria reservada en nombre y telefono
Contacto::~Contacto() {
    free(nombre);  
    free(telefono); 
}

// Revisar si este metodo hay que cambiarlo o quitarlo segun las especificaciones
void Contacto::mostrar() const {
    std::cout << "Nombre: " << nombre << ", Teléfono: " << telefono << std::endl;
}
