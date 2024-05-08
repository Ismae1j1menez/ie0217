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
 * @file validacion.hpp
 * @brief Define la clase ValidadorDeEntrada para validar entradas y dimensiones de la matriz.
 */

#ifndef VALIDACION_HPP
#define VALIDACION_HPP

#include <complex>
#include <stdexcept>
#include <typeinfo>

/**
 * @brief Clase para validar entradas y dimensiones de una matriz.
 * 
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template<typename T>
class ValidadorDeEntrada {
public:
    /**
     * @brief Valida que el tipo de dato sea `int`, `float` o `std::complex`.
     * 
     * @throws std::invalid_argument Si el tipo de dato no es `int`, `float` ni `std::complex`.
     */
    void validarTipoDato();

    /**
     * @brief Valida que las dimensiones de la matriz sean positivas y válidas.
     * 
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     * 
     * @throws std::invalid_argument Si el número de filas o columnas es menor o igual a cero.
     */
    void validarDimensiones(int filas, int columnas);
};

#endif // VALIDACION_HPP