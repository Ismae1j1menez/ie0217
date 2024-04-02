#include <iostream>
using namespace std; 

class Molde {
    // Access specifier
    public: 
        // Data members
        double largo; 
        double ancho; 
        double alto; 

        // Se le llama el contstructor, es el incializador de todo lo necesario, se considera función miembro especial
        // Primera manera, ambas opciones hacen lo mismo. (Metodo preferido)
        Molde (double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto_p) {
            cout << "Probando si se puede imprimir" << endl; 
        }

        // Destructor, cuando termina el alcance de la variable pared se ejecuta
        ~Molde() {
            cout << "Saludos desde el destructor de la clase Molde" << endl; 
        }

        // Segunda manera
        /*Molde(double largo_p, double ancho_p, double alto_p){
            largo = largo_p;
            ancho = ancho_p;
            alto = alto_p;  
        }*/

    // Member functions
    double calcularArea() {
        return largo * ancho;
    }

    double calcularVolumen() {
        return largo * ancho * alto; 
    }
};          

int main() {
    int variable_entera;
    Molde pared(10.0, 20.0, 35.0); 

    cout << "El area es: " << pared.calcularArea() << endl; 
    cout << "El area es: " << pared.calcularVolumen() << endl; 
    return 0;
    /*cout << pared.largo << endl; // Impresión antes de modificar el miembro
    pared.largo = 20.0; // Se accede al miembro de la clase Molde
    cout << pared.largo << endl; // Impresión despues de modificar el miembro
    pared.ancho = 13.2;
    pared.alto = 23.4;
    */
}