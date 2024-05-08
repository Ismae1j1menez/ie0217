#include <iostream> // Incluye la biblioteca estándar de entrada y salida.
#include "libro.hpp" // Incluye el archivo de definición de la clase Libro.

// Constructor de la clase Libro: inicializa los miembros titulo y autor con los valores dados.
Libro::Libro(const std::string& titulo, const std::string& autor)
: titulo(titulo), autor(autor) {}

// Método para mostrar la información del libro.
void Libro::mostrarInfo() const {
    // Imprime el título y el autor del libro en la consola.
    std::cout << "Titulo: " << titulo << ", Autor: " << autor << std::endl;
}
