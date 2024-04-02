#include <iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl; 
        }
};

class Dog : public Animal {
    public:
    void bark() {
        cout << "I can bark! Woof Woof!!" << endl; 
    }
};

int main() {
    Dog dog1; 

    // Se llama a los metodos de la clase base
    // Dog mantiene los metodos de la clase base
    dog1.eat();
    dog1.sleep();

    // Se llama a los metodos de la clase derivada
    dog1.bark();
    return 0;  
    
}