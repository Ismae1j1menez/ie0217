#include "EmpleadoPorHoras.hpp"

// Constructor, este hereda datos de empleado
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}

// Sobreescribe el método virtual puro
double EmpleadoPorHoras::calcularPago() const {
    return salario * horasTrabajadas;
}