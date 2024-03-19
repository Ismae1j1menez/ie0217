#include <iostream>
using namespace std; 

// Es un prototipo de la funcion, se declara antes del main para que 
// el programa tiene que saber que luego se le definira una funcion
int add(int, int);

int main() {
    int sum; 

    // Se llama a la funcion sin embargo todavia no esta definida
    sum = add(100, 78); 
    cout << "100 + 78 = " << sum << endl; 
    return 0; 
}

// Se define la funcion que fue llamada en el main
int add(int a, int b) {
    return (a + b); 
}