#include <iostream>
using namespace std;

int main() {
    int var = 5; 

    // Declara el puntero entero donde se guarda la dirección de la variable
    // int* es la manera de decir es un entero puntero
    int* pointVar; 

    // Se le asigna la dirección de memoria
    pointVar = &var; 

    cout << "var = " << var << endl; 

    cout << "Address of var (&var) = " << &var << endl; 

    cout << "pointVar = " << pointVar << endl; 

    // Se dereferencia, es decir ir a leer a la dirección de memoria que se guardo en pointVar
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl; 
    return 0; 
}