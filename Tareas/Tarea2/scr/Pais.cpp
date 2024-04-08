#include "Pais.hpp"

Pais::Pais() : nombre("") {}

Pais::Pais(const std::string& nombre) : nombre(nombre) {}

void Pais::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string Pais::getNombre() const {
    return nombre;
}
