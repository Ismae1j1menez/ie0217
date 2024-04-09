#include "Pais.hpp"
#include <cstdlib> 
#include <ctime>   

Pais::Pais() : nombre(""), identificador(0), poblacion(0) {
    srand((unsigned) time(0)); 
}

Pais::Pais(const std::string& nombre, unsigned long id, unsigned int poblacion) 
: nombre(nombre), identificador(id), poblacion(poblacion) {}

void Pais::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string Pais::getNombre() const {
    return nombre;
}

void Pais::setPoblacion(unsigned int poblacion) {
    this->poblacion = poblacion;
}

unsigned int Pais::getPoblacion() const {
    return poblacion;
}

unsigned long Pais::getID() const {
    return identificador;
}

double Pais::generarPIB() {
    double pib = (rand() % 1000000 + 1) * 1e6;
    return pib;
}
