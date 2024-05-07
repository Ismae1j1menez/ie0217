#include <iostream>
#include <stdexcept>
#include <string>
#include <typeinfo>
#include <complex>

// Clase validar entradas y dimensiones de la matriz
class ValidadorDeEntrada {
public:
    // Validar que el tipo de dato ingresado sea int, float o std::complex
    template<typename T>
    void validarTipoDato() {
        // is_same compara dos tipos de datos iguales, viene de la libreria std
        if (!(std::is_same<T, int>::value || std::is_same<T, float>::value || std::is_same<T, std::complex<double>>::value)) {
            throw std::invalid_argument("Tipo de dato no soportado. Utilice int, float o std::complex.");
        }
    }

    // Validar que las dimensiones de la matriz sean positivas y válidas
    void validarDimensiones(int filas, int columnas) {
        // Revisa que lo ingresado sea positivo mayor a 0
        if (filas <= 0 || columnas <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores que cero.");
        }
    }
};

