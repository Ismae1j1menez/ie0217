#include "libro.hpp"
// Constructor que inicializa los miembros
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

// Sobrecarga del operador < para comparar libros por año de publicación
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}