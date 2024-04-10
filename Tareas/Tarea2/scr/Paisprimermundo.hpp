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
    bool tieneAeropuertoMasAviones;
public:
    PaisPrimerMundo();
    PaisPrimerMundo(const std::string& nombre, unsigned long id, unsigned int poblacion, bool tieneTecnologia5G, bool tieneCentroInvestigacion, bool tieneAeropuertoMasAviones);
    
    void setTecnologia5G(bool tieneTecnologia5G);
    bool getTecnologia5G() const; 
    
    void setCentroInvestigacion(bool tieneCentroInvestigacion);
    bool getCentroInvestigacion() const;


    void setAeropuertoMasAviones(bool tieneAeropuertoMasAviones);
    bool getAeropuertoMasAviones() const;


    void imprimir_info_detallada();

};

#endif
