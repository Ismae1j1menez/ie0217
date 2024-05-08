#include <iostream>
#include "Operacionesbasicas.cpp"
#include "Validacion.hpp"
#include <complex>

int main() {
    try {
        ValidadorDeEntrada validador;

        // Prueba de validación de dimensiones válidas e inválidas
        try {
            validador.validarDimensiones(3, 3);
            std::cout << "Dimensiones válidas aceptadas correctamente." << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Error validando dimensiones válidas: " << e.what() << std::endl;
        }

        try {
            validador.validarDimensiones(-1, 5);
            std::cout << "Esta línea no debería ejecutarse, dimensiones negativas." << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Error esperado por dimensiones negativas: " << e.what() << std::endl;
        }

        // Crear y probar matrices con diferentes tipos de datos
        Matriz<int> matrizInt(2, 2);
        matrizInt.generarDatosAleatorios();
        Matriz<float> matrizFloat(2, 2);
        matrizFloat.generarDatosAleatorios();
        Matriz<std::complex<double>> matrizComplex(2, 2);
        matrizComplex.generarDatosAleatorios();

        // Imprimir matrices para verificar la creación correcta
        std::cout << "Matriz de enteros (con datos aleatorios):" << std::endl;
        matrizInt.imprimirMatriz();
        std::cout << "Matriz de flotantes (con datos aleatorios):" << std::endl;
        matrizFloat.imprimirMatriz();
        std::cout << "Matriz de números complejos (con datos aleatorios):" << std::endl;
        matrizComplex.imprimirMatriz();

        // Prueba de operaciones con tipos de datos soportados
        try {
            Matriz<float> sumaFloat = OperacionesBasicas<float>::suma(matrizFloat, matrizFloat);
            std::cout << "Resultado de la suma de matrices flotantes:" << std::endl;
            sumaFloat.imprimirMatriz();
        } catch (const std::exception& e) {
            std::cout << "Error sumando matrices flotantes: " << e.what() << std::endl;
        }

        // Prueba intentando usar un tipo no soportado, como std::string
        try {
            Matriz<std::string> matrizString(2, 2, "test");
            matrizString.generarDatosAleatorios(); // Esta línea debería fallar al compilar
            matrizString.imprimirMatriz();
            std::cout << "Esta línea no debería ejecutarse, tipo no soportado." << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Error esperado al usar un tipo de dato no soportado (std::string): " << e.what() << std::endl;
        }

        // Intentar multiplicar matrices con tipos de datos complejos, pero con dimensiones correctas
        try {
            Matriz<std::complex<double>> productoComplex = OperacionesBasicas<std::complex<double>>::multiplicacion(matrizComplex, matrizComplex);
            std::cout << "Resultado de la multiplicación de matrices complejas:" << std::endl;
            productoComplex.imprimirMatriz();
        } catch (const std::exception& e) {
            std::cout << "Error multiplicando matrices complejas: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cout << "Excepción inesperada: " << e.what() << std::endl;
    }

    return 0;
}
