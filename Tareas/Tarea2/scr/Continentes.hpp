#ifndef CONTINENTES_HPP
#define CONTINENTES_HPP

#include <iostream>
#include <string>
#include "Pais.hpp"
#include "Paisprimermundo.hpp"
#include "Paisendesarrollo.hpp"

const int MAX_PAISES = 100; 

class Continente {
private:
    Pais paises[MAX_PAISES];
    PaisPrimerMundo paisesPrimerMundo[MAX_PAISES]; 
    PaisEnDesarrollo paisesEnDesarrollo[MAX_PAISES]; 
    int numPaises;
    int numPaisesPrimerMundo;
    int numPaisesEnDesarrollo;
    std::string nombre;

public:
    Continente();
    Continente(const std::string& nombre);
    bool agregarPais(const Pais& nuevoPais);
    bool agregarPaisPrimerMundo(const PaisPrimerMundo& nuevoPaisPrimerMundo);
    bool agregarPaisEnDesarrollo(const PaisEnDesarrollo& nuevoPaisEnDesarrollo);
    void imprimir_info_detallada();
    std::string getNombre();
    Pais* buscarPaisPorNombre(const std::string& nombrePais);
};

#endif