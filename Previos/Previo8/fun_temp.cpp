#include <iostream>  
using namespace std;

// Plantilla que suma dos números
template <typename T> // T es un tipo genérico
T add(T num1, T num2) {
    return num1 + num2; 
}

int main() {
    int result1;  
    double result2; 

    // Llamada a la función add con parámetros de tipo int
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // Llamada a la función add con parámetros de tipo double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl; 
    return 0;
}
