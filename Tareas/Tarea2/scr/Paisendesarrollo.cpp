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
 * @file PaisEnDesarrollo.cpp
 * @brief Implementación de la clase PaisEnDesarrollo.
 *
 * Este archivo implementa las funciones definidas en PaisEnDesarrollo.hpp, proporcionando
 * detalles específicos sobre cómo se maneja la información de un país en desarrollo.
 */

#include "Paisendesarrollo.hpp"
using namespace std; 

// Constructor
PaisEnDesarrollo::PaisEnDesarrollo() : Pais() {}

// Constructor
PaisEnDesarrollo::PaisEnDesarrollo(const std::string& nombre, unsigned long id, unsigned int poblacion) 
: Pais(nombre, id, poblacion) {
}

// Metodo para imprimir información 
void PaisEnDesarrollo::imprimir_info_detallada() {
    cout << "País en Desarrollo: " << getNombre() << "\n";
    cout << "Identificador: " << getID() << "\n";
    cout << "Población: " << getPoblacion() << "\n";
    cout << "PIB: " << generarPIB() << "\n";
}
