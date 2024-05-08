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
 * @file operaciones_basicas.cpp
 * @brief Implementa los métodos de la clase OperacionesBasicas.
 */
#include "Operacionesbasicas.hpp"

template<typename T>
void OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
    // Para poder sumar o restar dos matrices es necesario que tengan las mismas dimensiones,
    // es decir, n1 = n2 y m1 = m2
    if (a.getFilas() != b.getFilas() || a.getColumnas() != b.getColumnas()) {
        // Si no se cumple la condición entonces se envía la excepción al catch
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para sumar o restar.");
    }
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& a, const Matriz<T>& b) {
    // Valida que las dimensiones sean correctas
    validarSumaResta(a, b);
    // Inicializa toda la matriz en 0, luego recorre toda la matriz ingresándole todos los valores
    // la suma de ambas matrices a y b
    Matriz<T> resultado(a.getFilas(), a.getColumnas(), 0);
    for (int i = 0; i < a.getFilas(); ++i) {
        for (int j = 0; j < a.getColumnas(); ++j) {
            resultado.getData()[i][j] = a.getData()[i][j] + b.getData()[i][j];
        }
    }
    // Retorna el resultado
    return resultado;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& a, const Matriz<T>& b) {
    // Valida que las dimensiones sean correctas
    validarSumaResta(a, b);
    // Inicializa toda la matriz en 0, luego recorre toda la matriz ingresándole todos los valores
    // la resta de ambas matrices a y b
    Matriz<T> resultado(a.getFilas(), a.getColumnas(), 0);
    for (int i = 0; i < a.getFilas(); ++i) {
        for (int j = 0; j < a.getColumnas(); ++j) {
            resultado.getData()[i][j] = a.getData()[i][j] - b.getData()[i][j];
        }
    }
    // Retorna el resultado
    return resultado;
}

template<typename T>
void OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    // Revisa que se cumpla la condición en caso de no hacerlo envía la excepción
    if (a.getColumnas() != b.getFilas()) {
        throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda para multiplicar.");
    }
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    // Valida la multiplicación
    validarMultiplicacion(a, b);
    // Inicializa la matriz resultante en 0
    Matriz<T> resultado(a.getFilas(), b.getColumnas(), 0);
    for (int i = 0; i < a.getFilas(); ++i) {
        for (int j = 0; j < b.getColumnas(); ++j) {
            for (int k = 0; k < a.getColumnas(); ++k) {
                resultado.getData()[i][j] += a.getData()[i][k] * b.getData()[k][j];
            }
        }
    }
    // Devuelve el resultado
    return resultado;
}

template class OperacionesBasicas<int>;
template class OperacionesBasicas<float>;
template class OperacionesBasicas<std::complex<float>>;