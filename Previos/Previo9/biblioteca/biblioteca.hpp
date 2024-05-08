#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector> // Incluye la biblioteca estándar que permite usar vectores.
#include "libro.hpp" // Incluye la definición de la clase Libro.

// Define la clase Biblioteca.
class Biblioteca {
public:
    // Método para agregar un libro al catálogo de la biblioteca.
    void agregarLibro(const std::string& titulo, const std::string& autor);
    
    // Método para mostrar todos los libros en el catálogo.
    void mostrarCatalogo();

private:
    // Vector que almacena objetos de la clase Libro.
    std::vector<Libro> catalogo;
};

#endif // Fin de la condición para evitar la inclusión múltiple del archivo.
