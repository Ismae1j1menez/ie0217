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
 * @file matriz.cpp
 * @brief Implementa los métodos de la clase Matriz.
 */

#include "Matriz.hpp"

// Constructor que inicializa la matriz con dimensiones y valores predeterminados
template<typename T>
Matriz<T>::Matriz(int filas, int columnas, const T& valorInicial) {
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas.");
    }
    this->filas = filas;
    this->columnas = columnas;
    // Inicializa la matriz con un vector
    data = std::vector<std::vector<T>>(filas, std::vector<T>(columnas, valorInicial));
}

// Destructor
template<typename T>
Matriz<T>::~Matriz() {}

// Establecer dimensiones de la matriz
template<typename T>
void Matriz<T>::setDimensiones(int nuevasFilas, int nuevasColumnas) {
    if (nuevasFilas <= 0 || nuevasColumnas <= 0) {
        throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores que cero.");
    }
    filas = nuevasFilas;
    columnas = nuevasColumnas;
    data.resize(filas);
    for (auto& fila : data) {
        fila.resize(columnas);
    }
}

// Método para llenar la matriz con datos del usuario
template<typename T>
void Matriz<T>::llenarMatriz() {
    std::cout << "Ingrese los elementos de la matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if constexpr (std::is_same<T, std::complex<double>>::value || std::is_same<T, std::complex<float>>::value) {
                double real, imag;
                std::cout << "Elemento [" << i << "][" << j << "] (parte real): ";
                std::cin >> real;
                std::cout << "Elemento [" << i << "][" << j << "] (parte imaginaria): ";
                std::cin >> imag;
                data[i][j] = {static_cast<typename T::value_type>(real), static_cast<typename T::value_type>(imag)};
            } else {
                std::cout << "Elemento [" << i << "][" << j << "]: ";
                std::cin >> data[i][j];
            }
        }
    }
}

// Método para generar datos aleatorios en la matriz
template<typename T>
void Matriz<T>::generarDatosAleatorios() {
    std::random_device rd;  // Dispositivo de generación de números aleatorios
    std::mt19937 gen(rd()); // Motor de generación de números aleatorios basado en Mersenne Twister

    if constexpr (std::is_same<T, int>::value) {
        std::uniform_int_distribution<int> dist(1, 100);  // Rango para enteros
        for (auto& fila : data)
            for (auto& elem : fila)
                elem = dist(gen);
    } else if constexpr (std::is_same<T, float>::value) {
        std::uniform_real_distribution<float> dist(1.0f, 100.0f);  // Rango para flotantes
        for (auto& fila : data)
            for (auto& elem : fila)
                elem = dist(gen);
    } else if constexpr (std::is_same<T, std::complex<float>>::value) {
        std::uniform_real_distribution<float> dist(1.0f, 100.0f);  // Rango para parte real e imaginaria
        for (auto& fila : data)
            for (auto& elem : fila)
                elem = {dist(gen), dist(gen)};
    } else if constexpr (std::is_same<T, std::complex<double>>::value) {
        std::uniform_real_distribution<double> dist(1.0, 100.0);  // Rango para parte real e imaginaria
        for (auto& fila : data)
            for (auto& elem : fila)
                elem = {dist(gen), dist(gen)};  // Generar parte real e imaginaria
    }
}

// Método para imprimir la matriz
template<typename T>
void Matriz<T>::imprimirMatriz() const {
    int width = 12;  // Ajusta el ancho para una mejor visualización, incrementado para complejos
    std::cout << "\n+" << std::string(columnas * width, '-') << "+\n";
    for (const auto& fila : data) {
        std::cout << "|";
        for (const auto& elemento : fila) {
            if constexpr (std::is_same<T, std::complex<float>>::value || std::is_same<T, std::complex<double>>::value) {
                // Ajuste del formato para números complejos
                std::cout << std::right << std::setw(5) << elemento.real()
                          << std::showpos << elemento.imag() << std::noshowpos << "i" << std::setw(2) << "|";
            } else {
                std::cout << std::right << std::setw(width - 2) << elemento << "|";
            }
        }
        std::cout << "\n";
    }
    std::cout << "+" << std::string(columnas * width, '-') << "+\n";
}

// Getters para acceder a las propiedades privadas
template<typename T>
int Matriz<T>::getFilas() const { return filas; }

template<typename T>
int Matriz<T>::getColumnas() const { return columnas; }

template<typename T>
std::vector<std::vector<T>>& Matriz<T>::getData() { return data; }

template<typename T>
const std::vector<std::vector<T>>& Matriz<T>::getData() const { return data; }

// Instanciaciones explícitas de las plantillas
template class Matriz<int>;
template class Matriz<float>;
template class Matriz<std::complex<float>>;
template class Matriz<std::complex<double>>;
