#include "Continentes.hpp"
#include <iostream>
using namespace std; 

Continente::Continente() : numPaises(0), nombre("") {}

Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {}

bool Continente::agregarPais(const Pais& nuevoPais) {
    if (numPaises < MAX_PAISES) {
        paises[numPaises++] = nuevoPais;
        return true;
    }
    return false;
}

std::string Continente::getNombre(){
    return nombre;
}

bool Continente::agregarPaisPrimerMundo(const PaisPrimerMundo& nuevoPaisPrimerMundo) {
    if (numPaisesPrimerMundo < MAX_PAISES) {
        paisesPrimerMundo[numPaisesPrimerMundo++] = nuevoPaisPrimerMundo;
        return true;
    }
    return false;
}

bool Continente::agregarPaisEnDesarrollo(const PaisEnDesarrollo& nuevoPaisEnDesarrollo) {
    if (numPaisesEnDesarrollo < MAX_PAISES) {
        paisesEnDesarrollo[numPaisesEnDesarrollo++] = nuevoPaisEnDesarrollo;
        return true;
    }
    return false;
}

void Continente::imprimir_info_detallada() {
    for (int i = 0; i < numPaisesPrimerMundo; i++) {
        paisesPrimerMundo[i].imprimir_info_detallada(); 
    }
    for (int i = 0; i < numPaisesEnDesarrollo; i++) {
        paisesEnDesarrollo[i].imprimir_info_detallada(); 
    }
}

Pais* Continente::buscarPaisPorNombre(const std::string& nombrePais) {
    for (size_t i = 0; i < numPaisesPrimerMundo; ++i) {
        if (paisesPrimerMundo[i].getNombre() == nombrePais) { 
            return &paisesPrimerMundo[i]; 
        }
    }
    for (size_t j = 0; j < numPaisesEnDesarrollo; ++j) {
        if (paisesEnDesarrollo[j].getNombre() == nombrePais) { 
            return &paisesEnDesarrollo[j];
        }
    }
    return nullptr; 
}