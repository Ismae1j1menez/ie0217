#include "Planeta.hpp"
#include <iostream>

// Se inicializa cada objeto planeta con los 5 continentes
Planeta::Planeta() : numContinentes(0) {
    agregarContinente(Continente("América"));
    agregarContinente(Continente("Europa"));
    agregarContinente(Continente("Asia"));
    agregarContinente(Continente("África"));
    agregarContinente(Continente("Oceanía"));
}

// El argumento (const Continente& nuevoContinente) es solo para lectura, por eso se usa const
// se pasa por referencias porque es más facil leer en la posición de memoria
bool Planeta::agregarContinente(const Continente& nuevoContinente) {
    if (numContinentes < MAX_CONTINENTES) {
        continentes[numContinentes++] = nuevoContinente;
        return true;
    }
    return false;
}

bool Planeta::agregarPaisAContinente(const Pais& nuevoPais, const std::string& nombreContinente) {
    for (int i = 0; i < numContinentes; i++) {
        if (continentes[i].getNombre() == nombreContinente) {
            return continentes[i].agregarPais(nuevoPais);
        }
    }
    return false;
}

void Planeta::imprimir_info() {
    for (int i = 0; i < numContinentes; i++) {
        continentes[i].imprimirPaises();
    }
}

bool Planeta::agregarPaisPrimerMundoAContinente(const PaisPrimerMundo& nuevoPaisPrimerMundo, const std::string& nombreContinente) {
    for (int i = 0; i < numContinentes; i++) {
        if (continentes[i].getNombre() == nombreContinente) {
            return continentes[i].agregarPaisPrimerMundo(nuevoPaisPrimerMundo);
        }
    }
    return false;
}

bool Planeta::agregarPaisEnDesarrolloAContinente(const PaisEnDesarrollo& nuevoPaisEnDesarrollo, const std::string& nombreContinente) {
    for (int i = 0; i < numContinentes; i++) {
        if (continentes[i].getNombre() == nombreContinente) {
            return continentes[i].agregarPaisEnDesarrollo(nuevoPaisEnDesarrollo);
        }
    }
    return false;
}
