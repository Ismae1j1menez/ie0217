#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP
#include "Empleado.hpp"

// Clase heredada
class EmpleadoPorHoras : public Empleado {
    private: // Accecible en la clase y funciones amigas
        int horasTrabajadas;
    
    public: 
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        double calcularPago() const override; // Sin el override con compila, método sobreescribiendo el método virtual puro
};

#endif