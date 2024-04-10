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
 * @file Pais.cpp
 * @brief Implementación de la clase Pais.
 *
 * Implementa las funciones definidas en Pais.hpp, proporcionando la funcionalidad
 * para gestionar los datos de un país, incluyendo cálculos de PIB y comparaciones de igualdad.
 */
#include "Pais.hpp"
#include "Funciones.hpp"
#include <cstdlib> 
#include <ctime>   

// Constructor
Pais::Pais() : nombre(""), identificador(0), poblacion(0) {
    srand((unsigned) time(0)); 
}

// Constructor
Pais::Pais(const std::string& nombre, unsigned long id, unsigned int poblacion) 
: nombre(nombre), identificador(id), poblacion(poblacion) {}

// Metodo que ingresa el nombre al miembro
void Pais::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

// Metodo que retorna el nombre
std::string Pais::getNombre() const {
    return nombre;
}

// Metodo que ingresa la cantidad de poblacion al miembro
void Pais::setPoblacion(unsigned int poblacion) {
    this->poblacion = poblacion;
}

// Metodo para que retorne la poblacion
unsigned int Pais::getPoblacion() const {
    return poblacion;
}

// Metodo con la que se retorna el id
unsigned long Pais::getID() const {
    return identificador;
}

// Metodo para generar un PIB aleatorio
double Pais::generarPIB() {
    double pib = (rand() % 1000000 + 1) * 1e6;
    return pib;
}


// Sobrecarga de operadores, utilizado para comparar los paises
bool Pais::operator==(const Pais& otro) const {
    bool esPrimoEste = es_primo(this->identificador);
    bool esPrimoOtro = es_primo(otro.identificador);
    return esPrimoEste == esPrimoOtro;
}