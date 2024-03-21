#include <iostream>
using namespace std;

// Ahora se intercambian las dos variables a travez de punteros
void swap(int* n1, int* n2) {
    // Dentro se hace la dereferencia, porque *algo es el contenido de...
    // Por lo tanto se toma la dirección de los argumentos punteros y luego 
    // se de busca lo que esta en esa dirección
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    // Se inicializan las variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;

    // Se llama a la función con las referencias para guardarlas en los punteros que 
    // son los argumetnos de la función
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
