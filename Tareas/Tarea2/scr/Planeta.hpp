#ifndef PLANETA_HPP
#define PLANETA_HPP
#include <iostream>
#include "Continentes.hpp"
#include "Paisprimermundo.hpp"
#include "Paisendesarrollo.hpp"
#include <iostream>
using namespace std; 
#define MAX_CONTINENTES 4

class Planeta {
private:
    Continente continentes[MAX_CONTINENTES];
    int numContinentes;

public:
    Planeta();
    bool agregarContinente(const Continente& nuevoContinente);
    bool agregarPaisAContinente(const Pais& nuevoPais, const std::string& nombreContinente);
    void imprimir_info_detallada();
    bool agregarPaisPrimerMundoAContinente(const PaisPrimerMundo& nuevoPaisPrimerMundo, const std::string& nombreContinente);
    bool agregarPaisEnDesarrolloAContinente(const PaisEnDesarrollo& nuevoPaisEnDesarrollo, const std::string& nombreContinente);
    Pais* buscarPaisPorNombre(const std::string& nombrePais);
};
#endif