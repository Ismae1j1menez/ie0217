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
 * @file matriz.hpp
 * @brief Define la clase Matriz para manipulación de matrices genéricas.
 */

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include <type_traits>
#include <complex>
#include <random>

/**
 * @brief Clase plantilla para la manipulación de matrices.
 * 
 * @tparam T Tipo de dato de los elementos de la matriz.
 */

template<typename T>
class Matriz {
private:
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:
    /**
     * @brief Constructor para crear una matriz con dimensiones especificadas.
     * 
     * @param filas Número de filas.
     * @param columnas Número de columnas.
     * @param valorInicial Valor inicial para cada elemento de la matriz (por defecto, valor por defecto de T).
     */
    Matriz(int filas, int columnas, const T& valorInicial = T());

    /**
     * @brief Destructor de la clase Matriz.
     */
    ~Matriz();

    /**
     * @brief Establece nuevas dimensiones para la matriz.
     * 
     * @param nuevasFilas Nuevo número de filas.
     * @param nuevasColumnas Nuevo número de columnas.
     */
    void setDimensiones(int nuevasFilas, int nuevasColumnas);

    /**
     * @brief Llena la matriz con valores proporcionados por el usuario.
     */
    void llenarMatriz();

    /**
     * @brief Genera datos aleatorios para llenar la matriz.
     */
    void generarDatosAleatorios();

    /**
     * @brief Imprime la matriz en un formato tabular.
     */
    void imprimirMatriz() const;

    /**
     * @brief Obtiene el número de filas de la matriz.
     * 
     * @return Número de filas.
     */
    int getFilas() const;

    /**
     * @brief Obtiene el número de columnas de la matriz.
     * 
     * @return Número de columnas.
     */
    int getColumnas() const;

    /**
     * @brief Obtiene una referencia a los datos de la matriz.
     * 
     * @return Referencia al contenedor bidimensional que almacena los datos.
     */
    std::vector<std::vector<T>>& getData();

    /**
     * @brief Obtiene una referencia constante a los datos de la matriz.
     * 
     * @return Referencia constante al contenedor bidimensional que almacena los datos.
     */
    const std::vector<std::vector<T>>& getData() const;
};

#endif // MATRIZ_HPP
