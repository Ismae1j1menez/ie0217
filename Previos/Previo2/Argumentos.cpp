#include <iostream>
using namespace std; 

// Función que tiene dos parametros, un entero y un flotante
// imprime ambos parametros cuando se llama la función
// no devuelve nada, es void
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1 << "\n"; 
    cout << "The double number is " << n2 << "\n";
}

int main() {
    int num1 = 5; 
    double num2 = 5.5; 

    // Se llama a la función displayNum
    displayNum(num1, num2);

    return 0; 
}