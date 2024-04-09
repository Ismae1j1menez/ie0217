#include "Paisprimermundo.hpp"
using namespace std; 

PaisPrimerMundo::PaisPrimerMundo() : Pais(), tieneTecnologia5G(false), tieneCentroInvestigacion(false) {}

PaisPrimerMundo::PaisPrimerMundo(const std::string& nombre, unsigned long id, unsigned int poblacion, bool tieneTecnologia5G, bool tieneCentroInvestigacion)
: Pais(nombre, id, poblacion), tieneTecnologia5G(tieneTecnologia5G), tieneCentroInvestigacion(tieneCentroInvestigacion) {
}

void PaisPrimerMundo::setTecnologia5G(bool tieneTecnologia5G) {
    this->tieneTecnologia5G = tieneTecnologia5G;
}

bool PaisPrimerMundo::getTecnologia5G() const {
    return tieneTecnologia5G;
}

void PaisPrimerMundo::setCentroInvestigacion(bool tieneCentroInvestigacion) {
    this->tieneCentroInvestigacion = tieneCentroInvestigacion;
}

bool PaisPrimerMundo::getCentroInvestigacion() const {
    return tieneCentroInvestigacion;
}

void PaisPrimerMundo::imprimir_info_detallada() {
    cout << "País de Primer Mundo: " << getNombre() << "\n";
    cout << "Identificador: " << getID() << "\n";
    cout << "Población: " << getPoblacion() << "\n";
    cout << "Tecnología 5G: " << (getTecnologia5G() ? "Sí" : "No") << "\n";
    cout << "Centro de Investigación: " << (getCentroInvestigacion() ? "Sí" : "No") << "\n";
    cout << "PIB: " << generarPIB() << "\n";
}