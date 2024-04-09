#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include "Pais.hpp"

class PaisPrimerMundo : public Pais {
private:
    bool tieneTecnologia5G;
    bool tieneCentroInvestigacion;

public:
    PaisPrimerMundo();
    PaisPrimerMundo(const std::string& nombre, unsigned long id, unsigned int poblacion, bool tieneTecnologia5G, bool tieneCentroInvestigacion);
    
    void setTecnologia5G(bool tieneTecnologia5G);
    bool getTecnologia5G() const;
    
    void setCentroInvestigacion(bool tieneCentroInvestigacion);
    bool getCentroInvestigacion() const;

    void imprimir_info_detallada();

};

#endif
