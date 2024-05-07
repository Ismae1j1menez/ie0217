#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>

// Inicia la clase matriz, la cual inicializa con filas y columnas una matriz, agrega datos por el usuario
template<typename T>
class Matriz {
private:
    // Contenedor STL, vector
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:
    // Constructor que inicializa la matriz con dimensiones y valores predeterminados
    Matriz(int filas, int columnas, const T& valorInicial = T()) {
        if (filas <= 0 || columnas <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas.");
        }
        this->filas = filas;
        this->columnas = columnas;
        // Inicializa la matriz con vector
        data = std::vector<std::vector<T>>(filas, std::vector<T>(columnas, valorInicial));
    }

    // Destructor
    ~Matriz() {}

    // Establecer dimensiones de la matriz
    void setDimensiones(int nuevasFilas, int nuevasColumnas) {
        if (nuevasFilas <= 0 || nuevasColumnas <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores que cero.");
        }
        filas = nuevasFilas;
        columnas = nuevasColumnas;
        data.resize(filas);
        for (auto& fila : data) {
            fila.resize(columnas);
        }
    }

    // Método para llenar la matriz con datos del usuario
    void llenarMatriz() {
        std::cout << "Ingrese los elementos de la matriz:" << std::endl;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cout << "Elemento [" << i << "][" << j << "]: ";
                std::cin >> data[i][j];
            }
        }
    }

    // Método para imprimir la matriz
    void imprimirMatriz() const {
        int width = 10;  
        std::cout << "\n+" << std::string(columnas * width, '-') << "+\n";  
        for (const auto& fila : data) {
            std::cout << "|";
            for (const auto& elemento : fila) {
                std::cout << std::setw(width) << elemento;  
            }
            std::cout << "|\n";  
        }
        std::cout << "+" << std::string(columnas * width, '-') << "+\n";  
    }

    // Getters para acceder a las propiedades privadas
    // Es para obtener datos como filas, columnas, data...
    int getFilas() const { return filas; }
    int getColumnas() const { return columnas; }
    std::vector<std::vector<T>>& getData() { return data; }
    const std::vector<std::vector<T>>& getData() const { return data; }
};

