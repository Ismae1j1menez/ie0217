//MIT License
//
//Copyright (c) 2024 Ismael Jiménez Carballo
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

/**
 * @file Planeta.cpp
 * @brief Implementación de la clase Planeta.
 *
 * Este archivo implementa los métodos de la clase Planeta definidos en Planeta.hpp.
 * Incluye funcionalidades para manejar continentes y realizar operaciones sobre los países contenidos en estos.
 */
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

// Metodo que agregar pais a continente, llama a metodos de pais
bool Planeta::agregarPaisAContinente(const Pais& nuevoPais, const std::string& nombreContinente) {
    for (int i = 0; i < numContinentes; i++) {
        if (continentes[i].getNombre() == nombreContinente) {
            return continentes[i].agregarPais(nuevoPais);
        }
    }
    return false;
}

void Planeta::imprimir_info_detallada() {
    cout << "Planeta Tierra\n";
    cout << "--------------\n";
    for (int i = 0; i < numContinentes; i++) {
        cout << "Continente: " << continentes[i].getNombre() << "\n";
        continentes[i].imprimir_info_detallada();
        cout << "\n";
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

Pais* Planeta::buscarPaisPorNombre(const std::string& nombrePais) {
    for (int i = 0; i < numContinentes; i++) {
        Pais* encontrado = continentes[i].buscarPaisPorNombre(nombrePais);
        if (encontrado != nullptr) {
            return encontrado;
        }
    }
    return nullptr; 
}

// Metodo que itera sobre el el array de continentes para luego llamar al metodo de eliminarPais
bool Planeta::eliminarPais(const std::string& nombrePais) {
    cout << "Debug0: entrando a pais: " << endl; 
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i].eliminarPais(nombrePais)) {
            return true; 
        }
    }
    return false;
}
