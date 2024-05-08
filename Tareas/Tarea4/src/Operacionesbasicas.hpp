#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include <stdexcept>
#include "Matriz.hpp"

template<typename T>
class OperacionesBasicas {
public:
    // Metodo que valida si es posible sumar o restar dos matrices
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);

    // Metodo para sumar dos matrices
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b);

    // Metodo para restar dos matrices
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b);

    // Metodo que valida si es posible multiplicar dos matrices
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);

    // Metodo para multiplicar dos matrices
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b);
};

#endif // OPERACIONES_BASICAS_HPP
