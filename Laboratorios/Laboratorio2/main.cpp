#include <iostream>
#include "EmpleadoAsalariado.hpp"
#include "EmpleadoPorHoras.hpp"

int main(){
    EmpleadoAasalariado emp1("Marito", 30, 2000);
    EmpleadoPorHoras emp2("Juana", 23, 10, 40);

    std::cout << "Detalles del empleado asalariado: " << std::endl; 
    emp1.mostrarDetalles();
    std::cout << "Pago: $" << emp1.calcularPago() << std::endl; 
    

    std::cout << "\nDetalles del empleado por horas:" << std::endl;
    emp2.mostrarDetalles();
    std::cout << "Pago: $" << emp2.calcularPago() << std::endl; 
    return 0; 
}