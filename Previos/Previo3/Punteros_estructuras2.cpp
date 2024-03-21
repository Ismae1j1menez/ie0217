#include <iostream>
using namespace std; 

struct Distance {
    int feet;
    float inch;
};

int main() {
    // Se declara un puntero y una variable d tipo Distance
    Distance *ptr, d; 
    // Al puntero se le asigna al puntero la dirección de la estructura d
    ptr = &d;

    cout << "Enter feet: ";
    // Pointer es la dirección de memoria de la estructura d, se hace la dereferencia
    // es decir en el contenido de ptr.feet le agregamos el valor del usuario.
    // El () se póne para que primero haga el *ptr y luego el .feet
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Display information." << endl; 
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches" << endl;
    return 0;
}