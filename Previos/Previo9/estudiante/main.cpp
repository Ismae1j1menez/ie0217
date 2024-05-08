#include <iostream> // Incluye la biblioteca estándar para operaciones de entrada y salida.
#include "estudiante.hpp" // Incluye la definición de la clase Estudiante.

int main() {
    Estudiante estudiante("Juan", 20); // Crea un objeto de la clase Estudiante con nombre "Juan" y edad 20.
    estudiante.mostrarDatos(); // Llama al método que muestra los datos del estudiante en consola.
    return 0; // Finaliza la ejecución del programa devolviendo 0.
}
