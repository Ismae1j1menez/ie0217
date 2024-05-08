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

#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include <stdexcept>
#include "Matriz.hpp"

/**
 * @brief Clase para realizar operaciones aritméticas básicas con matrices.
 * 
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template<typename T>
class OperacionesBasicas {
public:
    /**
     * @brief Valida si es posible sumar o restar dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * 
     * @throws std::invalid_argument Si las dimensiones de las matrices no coinciden.
     */
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Suma dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * 
     * @return Matriz<T> Resultado de la suma.
     * 
     * @throws std::invalid_argument Si las dimensiones de las matrices no coinciden.
     */
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Resta dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * 
     * @return Matriz<T> Resultado de la resta.
     * 
     * @throws std::invalid_argument Si las dimensiones de las matrices no coinciden.
     */
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Valida si es posible multiplicar dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * 
     * @throws std::invalid_argument Si el número de columnas de la primera matriz no coincide con el número de filas de la segunda matriz.
     */
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Multiplica dos matrices.
     * 
     * @param a Primera matriz.
     * @param b Segunda matriz.
     * 
     * @return Matriz<T> Resultado de la multiplicación.
     * 
     * @throws std::invalid_argument Si el número de columnas de la primera matriz no coincide con el número de filas de la segunda matriz.
     */
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b);
};

#endif // OPERACIONES_BASICAS_HPP