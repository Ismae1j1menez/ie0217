#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP
#include "Empleado.hpp"

// Heredad de forma publica, se hereda todo sin cambios
class EmpleadoAasalariado: public Empleado {
    public: 
        EmpleadoAasalariado(std::string _nombre, int edad, double _salario);
        double calcularPago() const override; // Sobrescribe el método virtual
};


#endif