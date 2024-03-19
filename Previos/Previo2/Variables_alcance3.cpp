#include <iostream>
using namespace std; 

// Función que crea una variable estática, su vida comienza cuando se llama a la función
// y termina cuando finaliza el programa
void test() {
    static int var = 0; 
    ++var; 
    cout << var << endl; 
}

int main() {
    // Primer llamado a la función
    test(); 
    // Segundo llamado a la función
    test(); 
    return 0; 
}