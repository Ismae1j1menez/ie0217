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
 * @file validacion.cpp
 * @brief Implementa los métodos de la clase ValidadorDeEntrada.
 */
#include "Validacion.hpp"

// Validar que el tipo de dato ingresado sea int, float o std::complex
template<typename T>
void ValidadorDeEntrada<T>::validarTipoDato() {
    // is_same compara dos tipos de datos iguales, viene de la libreria std
    if (!(std::is_same<T, int>::value || std::is_same<T, float>::value || std::is_same<T, std::complex<double>>::value)) {
        throw std::invalid_argument("Tipo de dato no soportado. Utilice int, float o std::complex.");
    }
}

// Validar que las dimensiones de la matriz sean positivas y válidas
template<typename T>
void ValidadorDeEntrada<T>::validarDimensiones(int filas, int columnas) {
    // Revisa que lo ingresado sea positivo mayor a 0
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores que cero.");
    }
}

template class ValidadorDeEntrada<int>;
template class ValidadorDeEntrada<float>;
template class ValidadorDeEntrada<std::complex<float>>;


