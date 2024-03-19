#include <iostream>
using namespace std; 

// Se define la estructura de datos
struct Person {
    // En este caso se declara un arreglo de caracteres, almacena 49 caracteres
    // más el carácter nulo \o
    char name[50];
    int age; 
    float salary; 
}; 

int main() {
    // Creamos una variable p1 de tipo Person. Esto es como decir que tenemos la "estructura de datos de la persona 1"
    Person p1; 
    // Pedimos y almacenamos la información de la persona
    cout << "Enter Full name: "; 
    // Con esto, leemos el nombre completo desde la entrada estándar 
    // y lo almacenamos en la estructura de datos de la persona 1, específicamente en el campo name.
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    // Aquí leemos la edad desde la entrada estándar y la almacenamos 
    // en la estructura de datos de la persona 1, en el campo age.
    cin >> p1.age; 
    cout << "Enter salary: "; 
    // De forma similar, leemos el salario y lo almacenamos en la 
    // estructura de datos de la persona 1, en el campo salary.
    cin >> p1.salary;

    // Mostramos la información que acabamos de ingresar
    cout << "\nDispĺay Information." << endl; 
    cout << "Name: " << p1.name << endl; 
    cout << "Age: " << p1.age << endl; 
    cout << "Salary: " << p1.salary << endl; 

    return 0; 
}