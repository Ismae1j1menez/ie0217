#include <iostream>
using namespace std; 

// Clase base
class Animal {
    // Pueden acceder todas las clases y funciones
    //Metodo de setear la edad
    public: 
    void setEdad(int age) {
        edad = age; 
    }

    // Metodo de conseguir la edad
    int getEdad() {
        return edad; 
    }

    // Solo pueden acceder clases, funciones amigas y las clases derivadas 
    protected:
        string nombre; 
    
    // Solo pueden acceder clases, funciones amigas
    private:
     int edad; 
};

// Clase que hereda de la clase Animal
class Perro : public Animal {
    public:
        void setNombre(string n) {
            nombre = n; 
        }
        string getNombre() {
            return nombre;
        }
};

int main() {
    // Se instancia un objeto de la clase perro
    Perro miPerro; 
    // Member function de la clase base
    miPerro.setNombre("Toby");
    // Member function de la clase que hereda a la base
    miPerro.setEdad(3);

    cout << "Mi perro se llama " << miPerro.getNombre() << endl; 
    cout << "y tiene " << miPerro.getEdad() << " años." << endl;  
}