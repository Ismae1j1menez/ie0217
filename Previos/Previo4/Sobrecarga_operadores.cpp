#include <iostream>
using namespace std;

class Fraccion {
    int numerador, denominador; 
    public:
    // Constructor
    Fraccion(int n, int d) : numerador(n), denominador(d) {}
    
    // Es una definición de como sumar dos objetos de tipo fracción
    // &f es el denominador del otro objeto
    Fraccion operator+ (const Fraccion &f) {
        Fraccion resultado(
            numerador * f.denominador + f.numerador * denominador,
            denominador * f.denominador
        );
        return resultado;
    }

    void imprimir() {
        cout << numerador << "/" << denominador << endl; 
    }
};

int main() {
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);

    // Ahora aqui se pueden sumar dos objetos de tipo fracción por la sobrecarga de operadores
    Fraccion f3 = f1 + f2;
    f3.imprimir();

    return 0; 
}