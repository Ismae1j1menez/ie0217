#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Asignar memoria para un entero a un puntero
    // Malloc asigna memoria en el heap y devuelve un puntero tipo void* que luego se convierte a int*.
    int* ptr = (int*) malloc(sizeof(int)); 

    // Asignar el valor 5 a ptr, es memoria asignada con malloc
    *ptr = 5;

    // Imprime el valor del puntero
    cout << *ptr;

    return 0;
}
