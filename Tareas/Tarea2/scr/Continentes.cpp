#include "Continentes.hpp"
#include <iostream>

Continente::Continente() : numPaises(0), nombre("") {}

Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {}

bool Continente::agregarPais(const Pais& nuevoPais) {
    if (numPaises < MAX_PAISES) {
        paises[numPaises++] = nuevoPais;
        return true;
    }
    return false;
}

void Continente::imprimirPaises(){
    std::cout << "Continente: " << nombre << "\n";
    for (int i = 0; i < numPaises; i++) {
        std::cout << "- " << paises[i].getNombre() << "\n";
    }
}

std::string Continente::getNombre(){
    return nombre;
}