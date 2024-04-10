#include <iostream>
using namespace std;

int main() {

    // Puntero entero
    int* pointInt;

    // Puntero flotante
    float* pointFloat;

    // Asigna la memoria dinámicamente
    // Asignación de un entero de 4 bytes en el heap y devuelve la dirección de memoria.
    pointFloat = new float;
    pointInt = new int; 

    // Asignar valor en memoria
    *pointInt = 45;
    *pointFloat = 45.45f; // f es float

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // Liberar memoria
    // Liberar la memoria asignada en el heap, muy importante para evitar fugas de memoria.
    delete pointInt;
    delete pointFloat;

    return 0;
}