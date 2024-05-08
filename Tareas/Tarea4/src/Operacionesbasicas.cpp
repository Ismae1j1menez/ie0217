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

