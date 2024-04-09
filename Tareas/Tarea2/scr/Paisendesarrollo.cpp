#include "Paisendesarrollo.hpp"

PaisEnDesarrollo::PaisEnDesarrollo() : Pais() {}

PaisEnDesarrollo::PaisEnDesarrollo(const std::string& nombre, unsigned long id, unsigned int poblacion) 
: Pais(nombre, id, poblacion) {
}
