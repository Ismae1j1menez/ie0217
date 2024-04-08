#ifndef CONTINENTES_HPP
#define CONTINENTES_HPP
#include <iostream>
#include "Pais.hpp"
using namespace std; 
#define MAX_PAISES 100

class Continente {
private:
    Pais paises[MAX_PAISES];
    int numPaises;
    std::string nombre;

public:
    Continente();
    Continente(const std::string& nombre);
    bool agregarPais(const Pais& nuevoPais);
    void imprimirPaises();
    std::string getNombre();
};


#endif