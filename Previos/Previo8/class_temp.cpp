#include <iostream>
using namespace std;

// Definición de una plantilla de clase para trabajar con números.
// T es un tipo genérico, lo que permite usar esta clase con cualquier tipo numérico.
template <class T>
class Number {
private:
    T num;  // Variable para almacenar el número, de tipo T.

public:
    // Constructor que inicializa la variable num con el valor dado.
    Number(T n) : num(n) {}

    // Función para obtener el valor almacenado en num.
    T getNum() {
        return num;
    }
};

int main() {
    // Creación de un objeto de tipo Number para int.
    Number<int> numberInt(7);
    // Creación de un objeto de tipo Number para double.
    Number<double> numberDouble(7.7);

    cout << "Int Number = " << numberInt.getNum() << endl;
    cout << "Double Number = " << numberDouble.getNum() << endl;

    return 0;
}
