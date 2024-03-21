#include <iostream>
using namespace std;

// Se intercambia n1 con n2. Los argumentos son referencias de n1 y n2,
// con las referencias cualquier cambio que hagas a las variables a través 
// de sus referencias dentro de la función se refleja en las variables 
// originales fuera de la función
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    // Se inicializan las variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    // Se llama a la función y se verifica que se hayan intercambiado
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
