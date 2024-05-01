#include <iostream>
using namespace std;

// Definición de una plantilla de clase con múltiples y diferentes tipos de parámetros.
template <class T, class U, class V = char> // T, U, V son tipos genéricos, V tiene un valor default.
class ClassTemplate {
private:
    T var1; 
    U var2; 
    V var3; 

public:
    // Constructor que inicializa las variables var1, var2 y var3 con los valores proporcionados.
    ClassTemplate(T v1, U v2, V v3 = V()) : var1(v1), var2(v2), var3(v3) {}

    // Método para imprimir los valores de las variables.
    void printVar() {
        cout << "Var1 = " << var1 << endl;
        cout << "Var2 = " << var2 << endl;
        cout << "Var3 = " << var3 << endl;
    }
};

int main() {
    // Creación de un objeto de ClassTemplate con int, double y char.
    ClassTemplate<int, double, char> obj1(7, 7.7, 'c');
    cout << "Obj1 values: " << endl;
    obj1.printVar();

    // Creación de un objeto de ClassTemplate con int, double y bool.
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "Obj2 values: " << endl;
    obj2.printVar(); 

    return 0;
}
