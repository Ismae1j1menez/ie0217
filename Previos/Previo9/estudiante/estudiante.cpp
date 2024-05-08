#include <iostream> // Incluye la biblioteca estándar para operaciones de entrada y salida.
#include "estudiante.hpp" // Incluye la definición de la clase Estudiante.

// Constructor de la clase Estudiante: inicializa los miembros nombre y edad.
Estudiante::Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

// Método para mostrar los datos del estudiante en consola.
void Estudiante::mostrarDatos() {
    std::cout << "Nombre: " << nombre; // Imprime el nombre del estudiante.
    std::cout << ", Edad: " << edad << std::endl; // Imprime la edad del estudiante.
}
