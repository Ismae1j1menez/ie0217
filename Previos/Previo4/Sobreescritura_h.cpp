#include <iostream>
using namespace std; 

class Base {
    public: 
    void print() {
        cout << "Base Function" << endl; 
    }
};

class Derived : public Base {
    public:
     void print() {
        cout << "Derived Function" << endl; 
     }
};

int main() {
    Derived derived1, derived2;
    derived1.print();

    // Se accesa al print de la función de la clase Base
    derived2.Base::print();
    return 0; 
}