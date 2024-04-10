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
 * @file PaisEnDesarrollo.hpp
 * @brief Define la clase PaisEnDesarrollo, que extiende la clase Pais para representar países en desarrollo.
 *
 * Esta clase es una especialización de la clase Pais para manejar las características
 * específicas de países en desarrollo, incluyendo funcionalidades extendidas para
 * imprimir información detallada.
 */
#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include "Pais.hpp"


/**
 * @class PaisEnDesarrollo
 * @brief Extiende la clase Pais para gestionar países en desarrollo.
 *
 * PaisEnDesarrollo hereda de Pais y añade implementaciones específicas para manejar
 * la información y las operaciones asociadas con países en desarrollo.
 */
class PaisEnDesarrollo : public Pais {
public:
      /**
     * @brief Constructor predeterminado, inicializa un nuevo país en desarrollo con valores por defecto.
     */
    PaisEnDesarrollo();

       /**
     * @brief Constructor parametrizado para crear un país en desarrollo con información específica.
     * @param nombre El nombre del país.
     * @param id El identificador único del país.
     * @param poblacion La población del país.
     */
    PaisEnDesarrollo(const std::string& nombre, unsigned long id, unsigned int poblacion);

        /**
     * @brief Imprime información detallada del país en desarrollo.
     * 
     * Muestra el nombre, identificador, población y PIB estimado del país.
     */
    void imprimir_info_detallada();
};

#endif  // PAISENDESARROLLO_HPP
