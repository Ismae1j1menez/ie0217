#include <iostream>
using namespace std; 

class ClassB;

class ClassA {
    private: 
        // Atributo privado de la clase A
        int numA;
        // clase amiga
        friend class ClassB;
};

class ClassB {
    private:
        int numB;

    public: 
        ClassB() : numB(1) {}
    
    int add() {
        ClassA objectA;
        // Accede a numA que es privada de la clase A
        return objectA.numA + numB;
    }
};


int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add() << endl;
    return 0; 
}