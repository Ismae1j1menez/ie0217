#include <iostream>
using namespace std; 

int main() {
    int num; 
    // Se le pide al usuario que ingrese un entero
    cout << "Enter an integer: ";
    cin >> num; 

    // Primera condicion que revisa si el numero es difernte de 0
    // If externo
    if (num != 0) {
        // if y else internos
        // Mayor a 0, es positivo
        if (num > 0) {
            cout << "The number is positive." << endl; 
        }
        // Cualquier otro caso, es negativo
        else {
            cout << "The number is negative." << endl; 
        }
    }
    // Else externo
    else {
        cout << "The number is 0 and it is neither positive or negative." << endl; 
    }

    // Impresion fuera de las condiciones
    cout << "This line is always printed." << endl; 
    return 0; 
}