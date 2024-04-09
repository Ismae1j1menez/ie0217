#include "Paisendesarrollo.hpp"
using namespace std; 

PaisEnDesarrollo::PaisEnDesarrollo() : Pais() {}

PaisEnDesarrollo::PaisEnDesarrollo(const std::string& nombre, unsigned long id, unsigned int poblacion) 
: Pais(nombre, id, poblacion) {
}

void PaisEnDesarrollo::imprimir_info_detallada() {
    cout << "País en Desarrollo: " << getNombre() << "\n";
    cout << "Identificador: " << getID() << "\n";
    cout << "Población: " << getPoblacion() << "\n";
    cout << "PIB: " << generarPIB() << "\n";
}
