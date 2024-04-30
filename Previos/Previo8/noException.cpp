#include <iostream> 
#include <stdexcept> // Incluir la biblioteca estándar de excepciones.

using namespace std;

int main() {
    int numerador, denominador, resultado; // Declaración de variables para el numerador, denominador y resultado.

    // Esto que se hace aqui es mala práctica pues no se aplican la captura de excepciones.
    cout << "Ingrese el numerador: ";
    cin >> numerador; 

    cout << "Ingrese el denominador: "; 
    cin >> denominador;

    resultado = numerador / denominador; 
    cout << "El resultado es: " << resultado << endl; 

    return 0; 
}
