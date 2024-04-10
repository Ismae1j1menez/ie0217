#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    // Constructor 
    Student() : age(12) {}

    // Método para obtener la edad
    void getAge() {
        cout << "Edad = " << age << endl;
    }
};

int main() {
    // Declarar dinámicamente el objeto tipo Estudiante
    Student* ptr = new Student();

    // Llama al método getAge()
    ptr->getAge(); 

    // Libera memoria asignada a ptr
    delete ptr;

    return 0;
}