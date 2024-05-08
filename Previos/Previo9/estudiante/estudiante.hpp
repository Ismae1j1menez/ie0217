#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string> // Incluye la biblioteca para utilizar cadenas de texto.

// Define la clase Estudiante.
class Estudiante {
public:
    // Constructor que inicializa un estudiante con nombre y edad.
    Estudiante(const std::string& nombre, int edad);

    // Método para mostrar los datos del estudiante.
    void mostrarDatos();

private:
    std::string nombre; // Almacena el nombre del estudiante.
    int edad; // Almacena la edad del estudiante.
};

#endif // Previene la inclusión múltiple del archivo de cabecera.
