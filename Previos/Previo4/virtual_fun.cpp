#include <iostream>
using namespace std; 
class Base {
    public: virtual void print() {
        cout << "Base Function" << endl; 
    }
};

class Derived : public Base {
    // Se debe sobreescribir la función porque en la clase Base es una función virtual
    // Sobrescribe la función virtual de la clase Base. Cuando un puntero de la clase Base
    // apunta a un objeto de la clase Derived y se llama a esta función, se ejecuta
    // esta versión de la función (Derived Function), no la versión Base.
    public: void print() {
        cout << "Derived Function" << endl; 
    }
};

int main() {
    Derived derived1; // Crea un objeto de la clase Derived.

    // Crea un puntero de tipo Base y lo asigna a la dirección de un objeto Derived.
    // Esto es posible debido a la herencia entre Base y Derived.
    Base* base1 = &derived1;
    
    // A pesar de que base1 es un puntero de tipo Base, cuando se llama a print(),
    // se ejecuta la versión de la función en la clase Derived, si el objeto real
    // apuntado es de la clase Derived. Esto demuestra el polimorfismo:
    // la capacidad de tratar diferentes tipos derivados de manera uniforme a través
    // de una interfaz común definida por la clase base. El tipo del puntero (Base*)
    // no limita la llamada a la versión de Base de print(); el sistema de tiempo de ejecución
    // elige la versión correcta basada en el tipo real del objeto (Derived).
    base1->print();
    return 0;
}