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
 * @file Continentes.cpp
 * @brief Implementación de la clase Continente para gestionar operaciones sobre países dentro de un continente.
 *
 * Implementa las funciones definidas en Continentes.hpp para manejar las adiciones, búsquedas,
 * eliminaciones y detalles de información de países dentro de un continente.
 */

#include "Continentes.hpp"
#include <iostream>
using namespace std; 

// Constructor
Continente::Continente() : numPaises(0), nombre("") {}

// Constructor
Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {}

// Agrega un pais en el indice y lo aumenta en 1 para el siguient pais
bool Continente::agregarPais(const Pais& nuevoPais) {
    if (numPaises < MAX_PAISES) {
        paises[numPaises++] = nuevoPais;
        return true;
    }
    return false;
}

// Metodo para que retorne el nombre
std::string Continente::getNombre(){
    return nombre;
}

// Este metodo agrega el objeto a su lista cosrrespondiente, aumenta el indice en +1 para ingresar el proximo objeto
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

// Metodo para imprimir información
void Continente::imprimir_info_detallada() {
    for (int i = 0; i < numPaisesPrimerMundo; i++) {
        paisesPrimerMundo[i].imprimir_info_detallada(); 
    }
    for (int i = 0; i < numPaisesEnDesarrollo; i++) {
        paisesEnDesarrollo[i].imprimir_info_detallada(); 
    }
}

// Metodo para buscar pais devolviendo un puntero, necesario para poder usar polimorfismo en la sobrecarga de operadores
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

// Metodo para eliminar el pais, busca el indice del objeto y le cae con el que esta a la derecha
// por consecuencia el pais desaparece
bool Continente::eliminarPais(const std::string& nombrePais) {

    for (int i = 0; i < numPaisesPrimerMundo; ++i) {
        if (paisesPrimerMundo[i].getNombre() == nombrePais) {
            // Desplazar elementos para eliminar el país
            for (int j = i; j < numPaisesPrimerMundo - 1; ++j) {
                paisesPrimerMundo[j] = paisesPrimerMundo[j + 1];
            }
            numPaisesPrimerMundo--; 
            return true; 
        }
    }

    for (int i = 0; i < numPaisesEnDesarrollo; ++i) {
        if (paisesEnDesarrollo[i].getNombre() == nombrePais) {
            // Desplazar elementos para eliminar el país
            for (int j = i; j < numPaisesEnDesarrollo - 1; ++j) {
                paisesEnDesarrollo[j] = paisesEnDesarrollo[j + 1];
            }
            numPaisesEnDesarrollo--; 
            return true; 
        }
    }

    return false; 
}