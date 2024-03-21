#include <iostream>
using namespace std;

int main() {
    // Declarar una variable entera 
    int var = 2050; 
    // Declarar un puntero a entero
    int* ptr_var; 
    // Asigno la dirección de memoria 
    ptr_var = &var;

    // Imprimo el valor y la dirección de memoria 
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    // Declaro un puntero doble a entero 
    int** ptr_ptr_var; 
    // Asigno la dirección de memoria
    ptr_ptr_var = &ptr_var; 

    // Imprimo la dirección de memoria almacenada
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

    // Imprimo la dirección de memoria 
    cout << "&ptr_var: " << &ptr_var << endl;

    // Imprimo  la dirección de memoria 
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}