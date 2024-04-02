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
 * @file Estructura.hpp
 * @brief Archivo de cabecera que define la estructura Estructura.
 *
 * Define la estructura Estructura utilizada para almacenar el estado actual del juego del ahorcado,
 * incluyendo la palabra a adivinar, el estado actual de los intentos de adivinanza, el número máximo
 * de intentos permitidos, y el número actual de intentos realizados por el jugador.
 */

#ifndef ESTRUCTURA_HPP
#define ESTRUCTURA_HPP
#include <iostream>
// Esta libreria maneja automáticamente la asignación y designación de memoria
// lo que evita errores de fuga de memoria.
// También tiene métodos para realizar operaciones comunes con cadenas, como 
// concatenación, búsqueda, acceso y modificación de caracteres, comparación
// Por último permite trabajar con cadenas de longitud variable de manera segura 
// y eficiente, ajustando dinámicamente el tamaño de la memoria conforme se modifican 
// los contenidos de la cadena.
#include <string>

/**
 * @struct Estructura
 * @brief Contenedor de datos para el juego del ahorcado.
 * 
 * Esta estructura almacena la palabra que el jugador intenta adivinar, el estado actual de la palabra
 * mostrada al jugador (con guiones bajos reemplazando las letras no adivinadas), el número máximo de
 * intentos que el jugador puede hacer, y el número de intentos que el jugador ha realizado hasta el momento.
 */
struct Estructura {
    std::string palabra_adivinar;
    std::string estado_actual;
    int intentos_maximos;
    int intentos_actuales;
};

#endif