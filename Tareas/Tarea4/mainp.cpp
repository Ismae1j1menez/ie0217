#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include <type_traits>
#include <complex>
#include <cstdlib>
#include <ctime>
#include "Operacionesbasicas.hpp"
#include "Validacion.hpp"
#include "Matriz.hpp"

enum class DataType {
    Int,
    Float,
    Complex
};

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Show,
    Randomize,
    Quit
};

DataType chooseDataType() {
    int choice;
    std::cout << "\n================== Menu Data Type ==================\n";
    std::cout << "Choose data type (select a number):\n";
    std::cout << "1. Integer\n";
    std::cout << "2. Float\n";
    std::cout << "3. Complex\n";
    std::cout << "==================================================\n";
    std::cin >> choice;
    switch (choice) {
        case 1: return DataType::Int;
        case 2: return DataType::Float;
        case 3: return DataType::Complex;
        default:
            std::cout << "Invalid choice, defaulting to Integer.\n";
            return DataType::Int;
    }
}

Operation displayMenu() {
    int choice;
    std::cout << "\n================== Main Menu ==================\n";
    std::cout << "1. Add matrices\n";
    std::cout << "2. Subtract matrices\n";
    std::cout << "3. Multiply matrices\n";
    std::cout << "4. Show matrices\n";
    std::cout << "5. Generate random matrices\n";
    std::cout << "6. Quit\n";
    std::cout << "==================================================\n";
    std::cin >> choice;
    switch (choice) {
        case 1: return Operation::Add;
        case 2: return Operation::Subtract;
        case 3: return Operation::Multiply;
        case 4: return Operation::Show;
        case 5: return Operation::Randomize;
        case 6: return Operation::Quit;
        default:
            std::cout << "Invalid choice, exiting.\n";
            return Operation::Quit;
    }
}

template<typename T>
void performOperation(Matriz<T>& m1, Matriz<T>& m2, Operation op) {
    switch (op) {
        case Operation::Add:
            // Aquí iría la lógica de suma, la cual deberías implementar en tus funciones de operación básica o directamente aquí
            std::cout << "\nResult of Addition:\n";
            // OperacionesBasicas<T>::suma(m1, m2).imprimirMatriz();
            break;
        case Operation::Subtract:
            // Lógica de resta
            std::cout << "\nResult of Subtraction:\n";
            // OperacionesBasicas<T>::resta(m1, m2).imprimirMatriz();
            break;
        case Operation::Multiply:
            // Lógica de multiplicación
            std::cout << "\nResult of Multiplication:\n";
            // OperacionesBasicas<T>::multiplicacion(m1, m2).imprimirMatriz();
            break;
        case Operation::Show:
            std::cout << "\nMatrix 1:\n";
            m1.imprimirMatriz();
            std::cout << "Matrix 2:\n";
            m2.imprimirMatriz();
            break;
        case Operation::Randomize:
            std::cout << "\nGenerating random data for matrices...\n";
            m1.generarDatosAleatorios();
            m2.generarDatosAleatorios();
            m1.imprimirMatriz();
            m2.imprimirMatriz();
            break;
        case Operation::Quit:
            std::cout << "Quitting the application...\n";
            break;
    }
}

int main() {
    std::srand(std::time(nullptr));  // Initialize random seed

    DataType dataType = chooseDataType();
    int n;
    std::cout << "Enter the size of matrices (n x n): ";
    std::cin >> n;

    if (dataType == DataType::Int) {
        Matriz<int> m1(n, n), m2(n, n);
        m1.llenarMatriz();
        m2.llenarMatriz();
        while (true) {
            Operation op = displayMenu();
            if (op == Operation::Quit) break;
            performOperation(m1, m2, op);
        }
    } else if (dataType == DataType::Float) {
        Matriz<float> mf1(n, n), mf2(n, n);
        mf1.llenarMatriz();
        mf2.llenarMatriz();
        while (true) {
            Operation op = displayMenu();
            if (op == Operation::Quit) break;
            performOperation(mf1, mf2, op);
        }
    } else if (dataType == DataType::Complex) {
        Matriz<std::complex<double>> mc1(n, n), mc2(n, n);
        mc1.llenarMatriz();
        mc2.llenarMatriz();
        while (true) {
            Operation op = displayMenu();
            if (op == Operation::Quit) break;
            performOperation(mc1, mc2, op);
        }
    }

    return 0;
}
