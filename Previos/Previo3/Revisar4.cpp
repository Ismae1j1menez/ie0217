#include <iostream>
using namespace std;

int main() {
    int var = 2050; // Declaro una variable entera 'var' con valor 2050
    int* ptr_var; // Declaro un puntero a entero 'ptr_var'
    ptr_var = &var; // Asigno la dirección de memoria de 'var' al puntero 'ptr_var'

    // Imprimo el valor de 'var' y la dirección de memoria almacenada en 'ptr_var'
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    int** ptr_ptr_var; // Declaro un puntero doble a entero 'ptr_ptr_var'
    ptr_ptr_var = &ptr_var; // Asigno la dirección de memoria de 'ptr_var' al puntero doble 'ptr_ptr_var'

    // Imprimo la dirección de memoria almacenada en 'ptr_ptr_var'
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

    // Imprimo la dirección de memoria de 'ptr_var'
    cout << "&ptr_var: " << &ptr_var << endl;

    // Imprimo  la dirección de memoria de 'ptr_ptr_var'
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}