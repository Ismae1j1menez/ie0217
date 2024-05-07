#include <iostream>
#include "Operacionesbasicas.cpp"
#include "Validacion.cpp"
#include <complex>


int main() {
    try {
        ValidadorDeEntrada validador;

        // Prueba de validación de dimensiones válidas e inválidas
        try {
            validador.validarDimensiones(3, 3);
            std::cout << "Dimensiones válidas aceptadas correctamente." << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

        try {
            validador.validarDimensiones(-1, 5);
            std::cout << "Esta línea no debería ejecutarse." << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Error esperado por dimensiones inválidas: " << e.what() << std::endl;
        }

        // Crear matrices
        Matriz<int> matriz1(3, 3, 1);
        Matriz<int> matriz2(3, 3, 2);
        Matriz<int> matriz3(2, 3, 1);

        // Imprimir matrices
        std::cout << "Matriz 1:" << std::endl;
        matriz1.imprimirMatriz();
        std::cout << "Matriz 2:" << std::endl;
        matriz2.imprimirMatriz();

        // Suma de matrices de dimensiones compatibles
        try {
            Matriz<int> suma = OperacionesBasicas<int>::suma(matriz1, matriz2);
            std::cout << "Resultado de la suma:" << std::endl;
            suma.imprimirMatriz();
        } catch (const std::exception& e) {
            std::cout << "Error sumando matrices: " << e.what() << std::endl;
        }

        // Resta de matrices de dimensiones compatibles
        try {
            Matriz<int> resta = OperacionesBasicas<int>::resta(matriz1, matriz2);
            std::cout << "Resultado de la resta:" << std::endl;
            resta.imprimirMatriz();
        } catch (const std::exception& e) {
            std::cout << "Error restando matrices: " << e.what() << std::endl;
        }

        // Intentar multiplicar matrices de dimensiones incompatibles
        try {
            Matriz<int> producto = OperacionesBasicas<int>::multiplicacion(matriz1, matriz3);
            std::cout << "Resultado de la multiplicación:" << std::endl;
            producto.imprimirMatriz();
        } catch (const std::exception& e) {
            std::cout << "Error esperado por multiplicación de matrices incompatibles: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cout << "Excepción inesperada: " << e.what() << std::endl;
    }

    return 0;
}