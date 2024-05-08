#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include <type_traits>
#include <complex>
#include <random>

template<typename T>
// Inicia la clase matriz, la cual inicializa con filas y columnas una matriz, agrega datos por el usuario
class Matriz {
private:
    // Contenedor STL, vector
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:
    Matriz(int filas, int columnas, const T& valorInicial = T());
    ~Matriz();

    void setDimensiones(int nuevasFilas, int nuevasColumnas);
    void llenarMatriz();
    void generarDatosAleatorios();
    void imprimirMatriz() const;

    int getFilas() const;
    int getColumnas() const;
    std::vector<std::vector<T>>& getData();
    const std::vector<std::vector<T>>& getData() const;
};

#endif // MATRIZ_HPP
