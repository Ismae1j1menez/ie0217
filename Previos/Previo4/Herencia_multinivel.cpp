#include <iostream>
using namespace std; 

class A {
    public:
        void display() {
            cout << "Base class content." << endl;
        }
};

class B : public A {};

// Esta clase derivada hereda el método de la clase A
class C : public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}