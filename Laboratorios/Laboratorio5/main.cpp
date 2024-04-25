#include <iostream>
// Libreria para la creación de contenedores tipo vector
#include <vector>
#include <algorithm>
#include <string>
#include "libro.hpp"
#include "biblioteca.hpp"

int main() {
    // Se instancia el objeto tipo biblioteca
    Biblioteca miBiblioteca;
    // Se agregan libros
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"Harry Potter y la piedra filosofal", "J.K. Rowling", 1997});
    miBiblioteca.agregarLibro({"Orgullo y prejuicio", "Jane Austen", 1813});
    miBiblioteca.agregarLibro({"Romeo y Julieta", "William Shakespeare", 1597});
    miBiblioteca.agregarLibro({"Moby Dick", "Herman Melville", 1851});

    std::cout << "Libros desordenados" << std::endl; 
    miBiblioteca.mostrarLibros();
    std::cout << std::endl << std:: endl;
    miBiblioteca.ordenarLibrosPorAnio();
    std::cout << "Libros ordenados" << std::endl; 
    miBiblioteca.mostrarLibros();
    std::cout << std::endl << std:: endl;

    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    return 0;
}
