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