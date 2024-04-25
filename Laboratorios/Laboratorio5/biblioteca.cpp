#include "biblioteca.hpp"
// Método para agregar un libro al contenedor
void Biblioteca::agregarLibro(const Libro& libro) {
    // Agrega el objeto tipo libro al vector
    libros.push_back(libro);
}

// Método para mostrar los libros en la biblioteca
void Biblioteca::mostrarLibros() {
    // En el vector libros agarra un objeto libro y lo imprime
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}

// Método para ordenar los libros por año de publicación
void Biblioteca::ordenarLibrosPorAnio() {
    // sort ordena pero por la sobrecarga de operadores ordena por año
    std::sort(libros.begin(), libros.end());
}

// Método para buscar un libro por título y devolver un iterador al libro encontrado
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    // Utiliza std::find_if para buscar un libro con el título especificado, el rango es
    // libros.begin() y libros.end(). Luego la condición es que el titulo en l, sea igual al capturado
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo;
    });
}

// Método para obtener un iterador que señala al final del contenedor de libros
std::vector<Libro>::iterator Biblioteca::end() {
    return libros.end();
}