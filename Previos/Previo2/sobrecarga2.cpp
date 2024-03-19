#include <iostream>
using namespace std; 

// Se define la función, donde los argumentos son de tipo flotante y entero
// luego imprime los valores
void display(int var1, double var2) {
    cout << "Integer number: " << var1; 
    cout << " and double number: " << var2 << endl; 
}

// Se define la funcion, solo es un argumento de tipó double
// luego imprime el valor
void display(double var) {
    cout << "Double number: " << var << endl; 
}

// Se define la funcion, solo es un argumento de tipo entero
// luego imprime el valor
void display(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {
    int a = 5; 
    double b = 5.5;  

    // Llama a la funcion diplay pero la que tiene un parametro de tipo entero
    display(a); 
    // Llama a la funcion display pero la que tiene un parametro de tipo double
    display(b); 
    // Llama a la funcion display pero la que tiene un parametro de tipo entero y double
    display(a, b); 
    return 0;
}