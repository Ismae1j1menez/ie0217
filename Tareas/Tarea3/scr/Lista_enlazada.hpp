#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP
#include <string>
#include "Node.hpp"
#include <cstdlib>
#include <cstring>

class ListaEnlazada {
public:
    // Miembro que apunta al la clase Node
    Node* head;

    ListaEnlazada();
    ~ListaEnlazada();
    void agregarContacto(const char* nombre, const char* telefono);
    void mostrarContactos();
    void eliminarContacto(const std::string& nombre, const std::string& numTel);
};

#endif