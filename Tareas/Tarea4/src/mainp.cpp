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
    None
};

int obtenerEntero() {
    int num;
    while (true) {
        std::cin >> num;
        if (std::cin.fail()) {
            std::cout << "Entrada inválida. Introduzca un número entero válido: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return num;
        }
    }
}

void showMenu() {
    std::cout << "\nMenú\n";
    std::cout << "1. Establecer tamaño de ambas matrices y sus respectivos valores\n";
    std::cout << "2. Elegir el tipo de datos que va a recibir la matriz: enteros, flotantes o complejos\n";
    std::cout << "3. Elegir la operación que se desea realizar: sumar, restar o multiplicar\n";
    std::cout << "4. Generar datos aleatorios para las matrices\n";
    std::cout << "5. Mostrar las matrices ingresadas\n";
    std::cout << "6. Ejecutar la operación ingresada\n";
    std::cout << "7. Finalizar el programa\n";
}

template <typename T>
void establecerTamanioYValores(Matriz<T>& matriz1, Matriz<T>& matriz2) {
    int filas1, columnas1, filas2, columnas2;

    std::cout << "Ingrese el número de filas de la primera matriz: ";
    filas1 = obtenerEntero();
    std::cout << "Ingrese el número de columnas de la primera matriz: ";
    columnas1 = obtenerEntero();
    matriz1.setDimensiones(filas1, columnas1);
    matriz1.llenarMatriz();

    std::cout << "Ingrese el número de filas de la segunda matriz: ";
    filas2 = obtenerEntero();
    std::cout << "Ingrese el número de columnas de la segunda matriz: ";
    columnas2 = obtenerEntero();
    matriz2.setDimensiones(filas2, columnas2);
    matriz2.llenarMatriz();
}

int main() {
    DataType dataType = DataType::Int;
    Operation operation = Operation::None;
    bool matricesSet = false;
    bool matricesInitialized = false;
    bool exitProgram = false;

    Matriz<int> matrizInt1(1, 1), matrizInt2(1, 1), resultInt(1, 1);
    Matriz<float> matrizFloat1(1, 1), matrizFloat2(1, 1), resultFloat(1, 1);
    Matriz<std::complex<float>> matrizComplex1(1, 1), matrizComplex2(1, 1), resultComplex(1, 1);

    while (!exitProgram) {
        showMenu();
        int choice;
        std::cout << "\nIngrese una opción: ";
        choice = obtenerEntero();
        
        switch (choice) {
            case 1: // Establecer tamaño de las matrices y sus respectivos valores
                if (dataType == DataType::Int) {
                    establecerTamanioYValores(matrizInt1, matrizInt2);
                } else if (dataType == DataType::Float) {
                    establecerTamanioYValores(matrizFloat1, matrizFloat2);
                } else if (dataType == DataType::Complex) {
                    establecerTamanioYValores(matrizComplex1, matrizComplex2);
                }
                matricesSet = true;
                matricesInitialized = true;
                std::cout << "Tamaño de las matrices establecido.\n";
                break;

            case 2: // Elegir el tipo de datos
                std::cout << "\nSeleccione el tipo de datos:\n";
                std::cout << "1. Enteros\n";
                std::cout << "2. Flotantes\n";
                std::cout << "3. Complejos\n";
                int dataTypeChoice;
                dataTypeChoice = obtenerEntero();

                switch (dataTypeChoice) {
                    case 1:
                        dataType = DataType::Int;
                        std::cout << "Tipo de datos: Enteros.\n";
                        break;
                    case 2:
                        dataType = DataType::Float;
                        std::cout << "Tipo de datos: Flotantes.\n";
                        break;
                    case 3:
                        dataType = DataType::Complex;
                        std::cout << "Tipo de datos: Complejos.\n";
                        break;
                    default:
                        std::cout << "Opción no válida, eligiendo enteros por defecto.\n";
                        dataType = DataType::Int;
                        break;
                }
                matricesInitialized = false;
                break;

            case 3: // Elegir operación
                std::cout << "\nSeleccione la operación a realizar:\n";
                std::cout << "1. Sumar\n";
                std::cout << "2. Restar\n";
                std::cout << "3. Multiplicar\n";
                int operationChoice;
                operationChoice = obtenerEntero();

                switch (operationChoice) {
                    case 1:
                        operation = Operation::Add;
                        std::cout << "Operación seleccionada: Suma.\n";
                        break;
                    case 2:
                        operation = Operation::Subtract;
                        std::cout << "Operación seleccionada: Resta.\n";
                        break;
                    case 3:
                        operation = Operation::Multiply;
                        std::cout << "Operación seleccionada: Multiplicación.\n";
                        break;
                    default:
                        std::cout << "Opción no válida, eligiendo sumar por defecto.\n";
                        operation = Operation::Add;
                        break;
                }
                break;

            case 4: // Generar datos aleatorios
                if (matricesSet) {
                    if (dataType == DataType::Int) {
                        matrizInt1.generarDatosAleatorios();
                        matrizInt2.generarDatosAleatorios();
                    } else if (dataType == DataType::Float) {
                        matrizFloat1.generarDatosAleatorios();
                        matrizFloat2.generarDatosAleatorios();
                    } else if (dataType == DataType::Complex) {
                        matrizComplex1.generarDatosAleatorios();
                        matrizComplex2.generarDatosAleatorios();
                    }

                    matricesInitialized = true;
                    std::cout << "Datos aleatorios generados para las matrices.\n";
                } else {
                    std::cout << "Establezca primero el tamaño de las matrices.\n";
                }
                break;

            case 5: // Mostrar matrices
                if (matricesInitialized) {
                    std::cout << "\nMatriz 1:\n";
                    if (dataType == DataType::Int) {
                        matrizInt1.imprimirMatriz();
                    } else if (dataType == DataType::Float) {
                        matrizFloat1.imprimirMatriz();
                    } else if (dataType == DataType::Complex) {
                        matrizComplex1.imprimirMatriz();
                    }

                    std::cout << "\nMatriz 2:\n";
                    if (dataType == DataType::Int) {
                        matrizInt2.imprimirMatriz();
                    } else if (dataType == DataType::Float) {
                        matrizFloat2.imprimirMatriz();
                    } else if (dataType == DataType::Complex) {
                        matrizComplex2.imprimirMatriz();
                    }
                } else {
                    std::cout << "Primero llene las matrices.\n";
                }
                break;

            case 6: // Ejecutar operación
                if (matricesInitialized) {
                    try {
                        if (operation == Operation::Add) {
                            if (dataType == DataType::Int) {
                                resultInt = OperacionesBasicas<int>::suma(matrizInt1, matrizInt2);
                                std::cout << "\nResultado de la suma:\n";
                                resultInt.imprimirMatriz();
                            } else if (dataType == DataType::Float) {
                                resultFloat = OperacionesBasicas<float>::suma(matrizFloat1, matrizFloat2);
                                std::cout << "\nResultado de la suma:\n";
                                resultFloat.imprimirMatriz();
                            } else if (dataType == DataType::Complex) {
                                resultComplex = OperacionesBasicas<std::complex<float>>::suma(matrizComplex1, matrizComplex2);
                                std::cout << "\nResultado de la suma:\n";
                                resultComplex.imprimirMatriz();
                            }
                        } else if (operation == Operation::Subtract) {
                            if (dataType == DataType::Int) {
                                resultInt = OperacionesBasicas<int>::resta(matrizInt1, matrizInt2);
                                std::cout << "\nResultado de la resta:\n";
                                resultInt.imprimirMatriz();
                            } else if (dataType == DataType::Float) {
                                resultFloat = OperacionesBasicas<float>::resta(matrizFloat1, matrizFloat2);
                                std::cout << "\nResultado de la resta:\n";
                                resultFloat.imprimirMatriz();
                            } else if (dataType == DataType::Complex) {
                                resultComplex = OperacionesBasicas<std::complex<float>>::resta(matrizComplex1, matrizComplex2);
                                std::cout << "\nResultado de la resta:\n";
                                resultComplex.imprimirMatriz();
                            }
                        } else if (operation == Operation::Multiply) {
                            if (dataType == DataType::Int) {
                                resultInt = OperacionesBasicas<int>::multiplicacion(matrizInt1, matrizInt2);
                                std::cout << "\nResultado de la multiplicación:\n";
                                resultInt.imprimirMatriz();
                            } else if (dataType == DataType::Float) {
                                resultFloat = OperacionesBasicas<float>::multiplicacion(matrizFloat1, matrizFloat2);
                                std::cout << "\nResultado de la multiplicación:\n";
                                resultFloat.imprimirMatriz();
                            } else if (dataType == DataType::Complex) {
                                resultComplex = OperacionesBasicas<std::complex<float>>::multiplicacion(matrizComplex1, matrizComplex2);
                                std::cout << "\nResultado de la multiplicación:\n";
                                resultComplex.imprimirMatriz();
                            }
                        } else {
                            std::cout << "Seleccione una operación válida antes de ejecutarla.\n";
                        }
                    } catch (std::runtime_error& e) {
                        std::cout << "Error: " << e.what() << "\n";
                    }
                } else {
                    std::cout << "Primero llene las matrices.\n";
                }
                break;

            case 7: // Finalizar el programa
                exitProgram = true;
                std::cout << "Finalizando el programa.\n";
                break;

            default:
                std::cout << "Opción no válida. Inténtelo de nuevo.\n";
                break;
        }
    }

    return 0;
}
