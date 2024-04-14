#include <cstdlib>
#include <cstring>
#include <iostream>
#include "Has_table.cpp"
#include "Lista_enlazada.cpp"

class Contacto {
private:
    char* nombre;
    char* telefono;

public:
    Contacto(const char* nom, const char* tel) {
        nombre = (char*)malloc(strlen(nom) + 1);  
        telefono = (char*)malloc(strlen(tel) + 1);  
        if (nombre) strcpy(nombre, nom);
        if (telefono) strcpy(telefono, tel);
    }

    ~Contacto() {
        free(nombre); 
        free(telefono); 
    }

    void mostrar() const {
        std::cout << "Nombre: " << nombre << ", Teléfono: " << telefono << std::endl;
    }
};
