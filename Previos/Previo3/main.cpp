#include <iostream>
// Include del encabezado .hpp
#include "sum.hpp"

int main() {
    // Inicializacion de variables 
    int num1 = 9; 
    int num2 = 3; 
    // Se llama a la función
    int result = sum(num1, num2); 
    std::cout << "El resultado de la suma " << num1 << " y " << num2 << " es " << result << std::endl;
    return 0; 
}