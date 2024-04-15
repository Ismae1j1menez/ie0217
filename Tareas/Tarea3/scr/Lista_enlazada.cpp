//Lista_enlazada.cpp
#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP
#include <string>
#include "Contacto.cpp"

class Node {
public:
    // Direcciona ala lista enlazada contacto
    Contacto* contacto;
    Node* next;

    Node(const char* nombre, const char* telefono) : next(nullptr) {
        contacto = new Contacto(nombre, telefono);
    }

    ~Node() {
        delete contacto;
    }
};

#endif // LISTA_ENLAZADA_HPP