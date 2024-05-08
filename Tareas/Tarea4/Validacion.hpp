#ifndef VALIDACION_HPP
#define VALIDACION_HPP

#include <complex>
#include <stdexcept>
#include <typeinfo>

// Clase para validar entradas y dimensiones de la matriz
template<typename T>
class ValidadorDeEntrada {
public:
    // Validar que el tipo de dato ingresado sea int, float o std::complex
    void validarTipoDato();

    // Validar que las dimensiones de la matriz sean positivas y válidas
    void validarDimensiones(int filas, int columnas);
};

#endif // VALIDACION_HPP
