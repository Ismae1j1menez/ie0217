#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> numbers; // Crea un stack para almacenar números enteros

    numbers.push(1);   // Número 1 al tope de la pila
    numbers.push(100); // Número 100 al tope de la pila
    numbers.push(10);  // Número 10 al tope de la pila

    cout << "Numbers are: ";
    while(!numbers.empty()){          // Realiza el bucle
        cout << numbers.top() << ", "; // Imprime el número en el tope de la pila
        numbers.pop();                 // Elimina el número en el tope de la pila
    }

    return 0;
}
