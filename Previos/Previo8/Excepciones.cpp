#include <iostream> 

using namespace std;

int main() {
    double numerator, denominator, divide; // Declarar variables para el numerador, denominador y resultado.

    cout << "Enter numerator: "; // Pedir el numerador.
    cin >> numerator; // Leer el numerador.

    cout << "Enter denominator: "; // Pedor el denominador.
    cin >> denominator; // Leer el denominador.

    try {
        // Intentar realizar la división.
        if (denominator == 0) 
            throw 0; // Lanzar una excepción si el denominador es cero.

        divide = numerator / denominator; // Calcular la división si el denominador no es cero.
        cout << numerator << " / " << denominator << " = " << divide << endl; 
    }
    catch (int num_exception) {
        // Capturar la excepción si el denominador es cero,
        // y mostrar el mensaje de error
        cout << "Error: Cannot divide by " << num_exception << endl; 
    }

    return 0;
}
