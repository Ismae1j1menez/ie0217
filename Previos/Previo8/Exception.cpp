#include <iostream> 
#include <stdexcept> // Incluir la biblioteca de excepciones estándar.

using namespace std; 

int main() {
    int numerador, denominador, resultado; // Declarar variables para el numerador, denominador y resultado.

    cout << "Ingrese el numerador: "; 
    cin >> numerador; 

    cout << "Ingrese el denominador: ";
    cin >> denominador; 

    try { // Bloque de intento para manejar excepciones.
        if (denominador == 0) { // Verificar si el denominador es cero.
            throw runtime_error("Error: el denominador no puede ser cero."); // Lanzar una excepción si el denominador es cero.
        }
        resultado = numerador / denominador; // Realizar la división si el denominador no es cero.
        cout << "El resultado es: " << resultado << endl; // Mostrar el resultado de la división.
    }
    catch (const exception& e) { // Capturar cualquier excepción que venga de std::exception.
        cerr << e.what() << endl;
    }

    return 0;
}
