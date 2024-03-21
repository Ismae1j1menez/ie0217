#include <iostream>
using namespace std;

int main() {
    int var = 5; 
    
    // Declaración del del pointVar, que almacena la dirección de memoria
    int* pointVar;

    // Se le asigna la dirección de memoria
    pointVar = &var; 

    cout << "var = " << var << endl; 
    cout << "pointVar = " << *pointVar << endl
         << endl; 
    cout << "Change value of var to 7: " << endl;

    // Inicialización de la nueva variable
    var = 7; 

    // Se revisa que a pesar de que se cambió la variable
    // mantiene su dirección
    cout << "var = " << var << endl;
    cout << "*pointVar = " << *pointVar <<  endl
         << endl; 
    cout << "Changing value of *pointVar to 16: " << endl; 

    // Se cambia el valor por medio del puntero
    *pointVar = 16; 

    cout << "var = " << var << endl; 
    cout << "*pointVar = " << *pointVar << endl;

    return 0; 
}