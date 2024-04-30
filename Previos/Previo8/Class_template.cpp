#include <iostream> 
using namespace std; 

// Definición de una plantilla de clase con múltiples parámetros y uno por defecto.
template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1; // Primer variable de tipo T.
    U var2; // Segunda variable de tipo U.
    V var3; // Tercera variable de tipo V, por defecto char.

public:
    // Constructor de la clase que inicializa las variables.
    ClassTemplate(T v1, U v2, V v3 = V()) : var1(v1), var2(v2), var3(v3) {}

    // Método para imprimir los valores de las variables.
    void printVar() {
        cout << "var1 = " << var1 << endl; // Imprime var1.
        cout << "var2 = " << var2 << endl; // Imprime var2.
        cout << "var3 = " << var3 << endl; // Imprime var3.
    }
};

int main() {
    // Crear un objeto con tipos int, double y char.
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl; 
    obj1.printVar(); // Llama al método para imprimir los valores de obj1.

    // Crear otro objeto con tipos double, char y bool.
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "obj2 values: " << endl; 
    obj2.printVar(); // Llama al método para imprimir los valores de obj2.

    return 0; 
}
