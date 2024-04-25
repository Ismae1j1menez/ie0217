#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <iostream>
// Definición de la clase Libro
class Libro {
public:
    // Miembros públicos
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    Libro(std::string t, std::string a, int anio);
    bool operator<(const Libro& l) const;
};

#endif