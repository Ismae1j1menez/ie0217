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
 * @file PaisPrimerMundo.cpp
 * @brief Implementación de la clase PaisPrimerMundo.
 *
 * Implementa las funciones definidas en PaisPrimerMundo.hpp, proporcionando
 * detalles específicos sobre cómo se maneja la información de un país de primer mundo.
 */
#include "Paisprimermundo.hpp"
using namespace std; 

PaisPrimerMundo::PaisPrimerMundo() : Pais(), tieneTecnologia5G(false), tieneCentroInvestigacion(false) {}

PaisPrimerMundo::PaisPrimerMundo(const std::string& nombre, unsigned long id, unsigned int poblacion, bool tieneTecnologia5G, bool tieneCentroInvestigacion)
: Pais(nombre, id, poblacion), tieneTecnologia5G(tieneTecnologia5G), tieneCentroInvestigacion(tieneCentroInvestigacion) {
}

// Metodo para ingresar en el miembro si tiene tecnologia 
void PaisPrimerMundo::setTecnologia5G(bool tieneTecnologia5G) {
    this->tieneTecnologia5G = tieneTecnologia5G;
}

// Metodo que retorna si tiene tecnologia
bool PaisPrimerMundo::getTecnologia5G() const {
    return tieneTecnologia5G;
}

// Metodo para ingresar si tiene centro de investigacion
void PaisPrimerMundo::setCentroInvestigacion(bool tieneCentroInvestigacion) {
    this->tieneCentroInvestigacion = tieneCentroInvestigacion;
}

// Metodo que devuelve si tiene centro de investigacion
bool PaisPrimerMundo::getCentroInvestigacion() const {
    return tieneCentroInvestigacion;
}

// Metodo para imprimir la info
void PaisPrimerMundo::imprimir_info_detallada() {
    cout << "País de Primer Mundo: " << getNombre() << "\n";
    cout << "Identificador: " << getID() << "\n";
    cout << "Población: " << getPoblacion() << "\n";
    cout << "Tecnología 5G: " << (getTecnologia5G() ? "Sí" : "No") << "\n";
    cout << "Centro de Investigación: " << (getCentroInvestigacion() ? "Sí" : "No") << "\n";
    cout << "PIB: " << generarPIB() << "\n";
}