
/**
 * @file PaisPrimerMundo.hpp
 * @brief Define la clase PaisPrimerMundo, que extiende la clase Pais para representar países de primer mundo.
 *
 * Esta clase es una especialización de la clase Pais para manejar características específicas de países de primer mundo,
 * incluyendo la presencia de tecnología 5G y centros de investigación.
 */
#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include "Pais.hpp"


/**
 * @class PaisPrimerMundo
 * @brief Extiende la clase Pais para gestionar países de primer mundo.
 *
 * PaisPrimerMundo hereda de Pais y añade funcionalidades específicas para manejar la información
 * y operaciones asociadas con países de primer mundo, incluyendo tecnología 5G y centros de investigación.
 */
class PaisPrimerMundo : public Pais {
private:
    bool tieneTecnologia5G; ///< Indica si el país tiene tecnología 5G.
    bool tieneCentroInvestigacion; ///< Indica si el país tiene un centro de investigación.
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
