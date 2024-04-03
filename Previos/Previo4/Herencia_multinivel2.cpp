#include <iostream>
using namespace std; 

class Mamma1 {
    public:
        // Contructor, se inicializa al ejecutar el archivo
        Mamma1() {
            cout << "Mamma1s can give direct birth." << endl;
        }
};

class WingedAnimal {
    public:
        // Contructor, se inicializa al ejecutar el archivo
        WingedAnimal() {
            cout << "Winged animal can flap." << endl; 
        }
};

// Tiene acceso a ambas clases
class Bat: public Mamma1, public WingedAnimal {};

int main() {
    Bat b1;
}