#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP
#include <string>

class Empleado {
    protected: // Accecible por clases derivadas
        std::string nombre;
        int edad;
        double salario; 
    
    public: // Accecible por cualquiera fuera de la clase
        // Constructor
        Empleado(std::string _string, int _edad, double _salario);
        // Métodos virtuales
        virtual ~Empleado(){} // Toda clase heredada tiene que tener un método calcular pago
        virtual double calcularPago() const = 0; // Método virtual puro (const = 0) es syntaxis
        // obliga a que todos los tipos de empleado tengan 
        // su función calcularPago
        virtual void mostrarDetalles() const; 
}; 

#endif