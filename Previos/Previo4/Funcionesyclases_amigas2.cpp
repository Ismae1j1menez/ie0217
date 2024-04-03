#include <iostream>
using namespace std; 

class ClassB;

class ClassA {
    public:
        ClassA() : numA(12) {}

    private: 
        // Atributo privado de la clase A
        int numA;
        // Funcion amiga
        friend int add(ClassA, ClassB);
};

class ClassB {
    public: 
        ClassB() : numB(1) {}

    private:
        // Atributo privado de clase B
        int numB;
        // Funcion amiga
        friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    //  Accede a los atributos privados de las clases
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB) << endl;
    return 0; 
}