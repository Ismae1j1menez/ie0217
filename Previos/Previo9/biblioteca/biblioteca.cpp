#include <iostream> // Incluye la biblioteca estándar para manejo de entrada y salida.
#include "biblioteca.hpp" // Incluye la definición de la clase Biblioteca.

// Método para agregar un nuevo libro al catálogo de la biblioteca.
void Biblioteca::agregarLibro(const std::string& titulo, const std::string& autor) {
    // Agrega un libro al final del vector 'catalogo' sin crear un objeto temporal.
    catalogo.emplace_back(titulo, autor);
}

// Método para mostrar toda la información de los libros en el catálogo.
void Biblioteca::mostrarCatalogo() {
    // Recorre todos los libros en 'catalogo' y muestra su información.
    for (const auto& libro : catalogo) {
        libro.mostrarInfo();
    }
}
