#include <iostream>
#include <string>
using namespace std; 

class Animal {
    private:
        string color; 

    protected:
        string type; 
    
    // Métodos
    public:
        void run() { cout << "I can run -- Base!" << endl;}
        void eat() { cout << "I can eat!" << endl;}
        void sleep() { cout << "I can sleep" << endl;}
        void setColor(string clr) { color = clr; }
        string getColor() { return color;}
};

//Clase derivada que herada de la clase animal
class Dog : public Animal {
    public:
        // Se sobreescribe la clase base
        void run() { cout << "I can run --- DERIVED!" << endl; }
        // Nuevos métodos de la clase perro
        // Este método tiene acceso a el miembro type porque es protegido, es decir
        // las  clases derivadas pueden acceder a el
        void setType(string tp) { type = tp; }
        void displayInfo(string c) {
            cout << "I am a " << type << endl; 
            cout << "My color is " << c << endl; 
        }
        void bark() { cout << "I can bark! Woof Woof!!" << endl; }
};

int main() {
    Dog dog1; 
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());
    return 0; 
}