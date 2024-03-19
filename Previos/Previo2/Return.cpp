#include <iostream>
using namespace std; 

// Función que suma dos valores y los retorna como entero
int add(int a, int b) {
    return (a + b);
}

int main() {
    int sum; 

    // Analogamente se piensa que sum tiene el valor retornado de la función
    // add, es decir lo sustituye 
    sum = add(100, 78);
    cout << "100 + 78 = " << sum << endl; 
    return 0; 
}