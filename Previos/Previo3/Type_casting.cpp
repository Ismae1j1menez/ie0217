#include <iostream>
using namespace std; 

int main() {
    // Se inicializa una variable con un valor entero
    int num_int = 9; 

    // Se declara una variable tipo duble
    double num_double; 

    // Se realiza la conversión implicita que proviene 
    // de la conversión sin epecificar al asignar un valor tipo
    // int a una variable tipo double
    num_double = num_int; 

    cout << "num_int = " << num_int << endl; 
    cout << "num_double = " << num_double << endl; 
    return 0; 
}