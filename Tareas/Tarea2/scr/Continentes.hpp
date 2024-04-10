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
 * @file Continentes.hpp
 * @brief Define la clase Continente que maneja operaciones sobre países dentro de un continente.
 *
 * Este archivo de cabecera define la clase Continente, incluyendo métodos para agregar,
 * buscar, eliminar países y imprimir información detallada. Soporta manejo de países de
 * primer mundo y países en desarrollo.
 */
#ifndef CONTINENTES_HPP
#define CONTINENTES_HPP

#include <iostream>
#include <string>
#include "Pais.hpp"
#include "Paisprimermundo.hpp"
#include "Paisendesarrollo.hpp"

const int MAX_PAISES = 100; ///< Máximo número de países permitidos por categoría.

/**
 * @class Continente
 * @brief Gestiona las operaciones relacionadas con los países en un continente específico.
 *
 * Esta clase permite la manipulación de países, incluyendo adición, eliminación,
 * y búsqueda, además de proporcionar información detallada sobre ellos.
 */
class Continente {
private:
    Pais paises[MAX_PAISES]; ///< Almacena los países generales.
    PaisPrimerMundo paisesPrimerMundo[MAX_PAISES]; ///< Almacena los países de primer mundo.
    PaisEnDesarrollo paisesEnDesarrollo[MAX_PAISES]; ///< Almacena los países en desarrollo.
    int numPaises; ///< Número actual de países generales.
    int numPaisesPrimerMundo; ///< Número actual de países de primer mundo.
    int numPaisesEnDesarrollo; ///< Número actual de países en desarrollo.
    std::string nombre; ///< Nombre del continente.

public:
    Continente();
    Continente(const std::string& nombre);
    bool agregarPais(const Pais& nuevoPais);
    bool agregarPaisPrimerMundo(const PaisPrimerMundo& nuevoPaisPrimerMundo);
    bool agregarPaisEnDesarrollo(const PaisEnDesarrollo& nuevoPaisEnDesarrollo);
    void imprimir_info_detallada();
    std::string getNombre();
    Pais* buscarPaisPorNombre(const std::string& nombrePais);
    bool eliminarPais(const std::string& nombrePais);
};

#endif  // CONTINENTES_HPP