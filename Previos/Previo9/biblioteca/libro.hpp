#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string> // Incluye la biblioteca de manejo de cadenas de texto.

// Define la clase Libro.
class Libro {
public:
    // Constructor que inicializa un libro con título y autor.
    Libro(const std::string& titulo, const std::string& autor);

    // Muestra la información del libro.
    void mostrarInfo() const;

private:
    std::string titulo; // Variable para guardar el título del libro.
    std::string autor; // Variable para guardar el nombre del autor del libro.
};

#endif // Fin de la condición para evitar la inclusión múltiple del archivo.
