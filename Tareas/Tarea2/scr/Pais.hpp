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
 * @file Pais.hpp
 * @brief Define la clase Pais, que gestiona la información básica de un país.
 *
 * Esta clase Pais se encarga de manejar la información relacionada con un país,
 * incluyendo su nombre, identificador único, población, y operaciones para calcular
 * su Producto Interno Bruto (PIB) estimado y comparar con otros países basándose
 * en criterios específicos.
 */
#ifndef PAIS_HPP
#define PAIS_HPP

#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>    

/**
 * @class Pais
 * @brief Gestiona información y operaciones relativas a un país.
 *
 * La clase Pais ofrece funcionalidades para establecer y obtener atributos
 * de un país como el nombre, población e identificador. Además, proporciona
 * un método para generar un PIB aleatorio y sobrecarga el operador de igualdad
 * para comparar países según la primalidad de sus identificadores.
 */
class Pais {
protected:
    unsigned long identificador; ///< Identificador único para el país.
    unsigned int poblacion; ///< Población del país.

private:
    std::string nombre; ///< Nombre del país.

public:
    Pais();
    Pais(const std::string& nombre, unsigned long id, unsigned int poblacion);
    void setNombre(const std::string& nombre);
    std::string getNombre() const;
    void setPoblacion(unsigned int poblacion);
    unsigned int getPoblacion() const;
    unsigned long getID() const;

    /**
     * @brief Genera un estimado del Producto Interno Bruto (PIB) para el país.
     * @return Estimado del PIB en unidades monetarias.
     */
    virtual double generarPIB(); 

    /**
     * @brief Compara este país con otro para determinar si ambos son primer mundo o en desarrollo.
     * @param otro Referencia a otro objeto Pais para comparar.
     * @return true si ambos países son de primer mundo o ambos en desarrollo, false de otro modo.
     */
    bool operator==(const Pais& otro) const;
};

#endif
