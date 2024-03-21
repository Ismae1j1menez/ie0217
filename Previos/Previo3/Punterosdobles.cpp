#include <iostream>
using namespace std;

int main() {
    // Declarar una variable entera 
    int var = 2050; 
    // Declarar un puntero a var
    int* ptr_var; 
    // Asigno la dirección de memoria 
    ptr_var = &var;

    // Imprimo el valor y la dirección de memoria 
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    // Declaro un puntero doble a var
    int** ptr_ptr_var; 
    // Asigno la dirección de memoria
    ptr_ptr_var = &ptr_var; 

    // Imprimo el valor del puntero doble
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

    // Imprimo la dirección de memoria almacenada del puntero simple 
    cout << "&ptr_var: " << &ptr_var << endl;

    // Imprimo  la dirección de memoria del puntero doble
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}