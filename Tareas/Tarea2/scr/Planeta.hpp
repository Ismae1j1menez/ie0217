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
 * @file Planeta.hpp
 * @brief Define la clase Planeta que gestiona las operaciones sobre continentes y países en un modelo de planeta.
 *
 * Este archivo de cabecera define la clase Planeta, que es responsable de gestionar los continentes,
 * agregarlos al planeta, así como agregar países a estos continentes, ya sean de primer mundo o en desarrollo,
 * además de permitir la búsqueda y eliminación de países.
 */
#ifndef PLANETA_HPP
#define PLANETA_HPP
#include <iostream>
#include "Continentes.hpp"
#include "Paisprimermundo.hpp"
#include "Paisendesarrollo.hpp"
#include <iostream>
using namespace std; 
#define MAX_CONTINENTES 5 ///< Define el número máximo de continentes que puede tener el planeta.


/**
 * @class Planeta
 * @brief Gestiona un conjunto de continentes y las operaciones relacionadas con ellos.
 *
 * La clase Planeta permite agregar continentes y gestionar países dentro de estos continentes.
 * Soporta operaciones como agregar, buscar y eliminar países, además de imprimir información detallada.
 */
class Planeta {
private:
    Continente continentes[MAX_CONTINENTES]; ///< Array de continentes en el planeta.
    int numContinentes; ///< Contador actual de continentes agregados al planeta.
public:
    Planeta();
    bool agregarContinente(const Continente& nuevoContinente);
    bool agregarPaisAContinente(const Pais& nuevoPais, const std::string& nombreContinente);
    void imprimir_info_detallada();
    bool agregarPaisPrimerMundoAContinente(const PaisPrimerMundo& nuevoPaisPrimerMundo, const std::string& nombreContinente);
    bool agregarPaisEnDesarrolloAContinente(const PaisEnDesarrollo& nuevoPaisEnDesarrollo, const std::string& nombreContinente);
    Pais* buscarPaisPorNombre(const std::string& nombrePais);
    bool eliminarPais(const std::string& nombrePais);
};
#endif // PLANETA_HPP