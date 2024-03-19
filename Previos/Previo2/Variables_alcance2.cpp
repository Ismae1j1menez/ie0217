#include <iostream>
// Permite usar objetos y variables de la libreria estandar
using namespace std; 
// Declaracion de variable global
int g; 

int main() {
    // Declaracion de variables locales
    int a, b; 

    // Inicializacion de variables
    a = 20; 
    b = 20;
    // Suma de ambas variables inicializadas
    g = a + b; 
    cout << g << "\n"; 
    return 0; 
}