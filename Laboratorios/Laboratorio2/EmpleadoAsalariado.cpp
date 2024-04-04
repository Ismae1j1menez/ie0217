#include "EmpleadoAsalariado.hpp"

// Constructor
EmpleadoAasalariado::EmpleadoAasalariado(std::string _nombre, int _edad, double _salario)
    : Empleado(_nombre, _edad, _salario) {}

// Se sobreescribe el método virtual
double EmpleadoAasalariado::calcularPago() const {
    return salario; 
}