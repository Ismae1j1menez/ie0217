#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include "libro.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
// Definición de la clase Biblioteca
class Biblioteca {
private:
    // Contenedor privado de libros tipo vector
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void mostrarLibros();
    void ordenarLibrosPorAnio();
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);
    std::vector<Libro>::iterator end();
};

#endif