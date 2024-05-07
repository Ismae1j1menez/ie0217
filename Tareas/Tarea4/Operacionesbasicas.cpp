#include <iostream>
#include <vector>
#include <stdexcept>
#include "Matriz.cpp"

template<typename T>
// Clase que valida si las operaciones son validas
class OperacionesBasicas {
public:
    // Una variable estática en una clase es como una caja especial que pertenece a esa clase.
    // Es como una variable global que está encerrada dentro de la clase.
    // Esta caja especial es compartida entre todas las instancias de la clase.
    // Puedes acceder a esta caja especial desde cualquier método estático de la clase.
    // Sin embargo, los métodos estáticos no pueden tocar otras partes de la clase
    // como las variables normales o los métodos normales.
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        // Para pode sumar o restar dos matrices es necesario que tengan las mismas diensiones, 
        // es decir n1 = n2 y m1 = m2
        if (a.getFilas() != b.getFilas() || a.getColumnas() != b.getColumnas()) {
            // Si no se cumple la condicion entones se envia la exepcion al catch
            throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para sumar o restar.");
        }
    }
   
    // Metodo suma, hace la operacion suma para la sobrecarga de operadores en matriz
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b) {
        // Valida que las dimensiones sean correctas
        validarSumaResta(a, b);
        // Iniciliza toda la matriz en 0, luego recorre toda la matiz ingresandole todos los valores
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

    // Metodo resta, hace la operacion resta para la sobrecarga de operadores en matriz
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b) {
        // Valida que las dimensiones sean correctas
        validarSumaResta(a, b);
        // Iniciliza toda la matriz en 0, luego recorre toda la matiz ingresandole todos los valores
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

    // Valida la multiplicacion de matrices, m1 debe ser igual a n2 para poder validar la multiplicacion
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        // Revisa que se cumpla la condicion en caso de no hacerlo envia la excepcion
        if (a.getColumnas() != b.getFilas()) {
            throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda para multiplicar.");
        }
    }

    // Sobre carga de operadores para la multiplicacion en la matriz
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        // Valida la multiplicacion
        validarMultiplicacion(a, b);
        // Inicializa la matriz resultante en 0
        Matriz<T> resultado(a.getFilas(), b.getColumnas(), 0);
        // Recorre las filas de la matriz resultante
        for (int i = 0; i < a.getFilas(); ++i) {
            // Recorre las columnas de la matriz resultante
            for (int j = 0; j < b.getColumnas(); ++j) {
                // Hace la multiplicacion de fila por columna de la matriz y la ingresa
                // en la fila y columna correspondiente
                for (int k = 0; k < a.getColumnas(); ++k) {
                    // Llama a getData y luego suma la multiplicacion de los datos en la matriz
                    resultado.getData()[i][j] += a.getData()[i][k] * b.getData()[k][j];
                }
            }
        }
        // Devuelve el resultado
        return resultado;
    }
};