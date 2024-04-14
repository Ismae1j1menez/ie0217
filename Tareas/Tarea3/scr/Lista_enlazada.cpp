#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP
#include <string>
#include "Contacto.cpp"

class Node {
public:
    Contacto* contacto;
    Node* next;

    Node(const char* nombre, const char* telefono) {
        contacto = new Contacto(nombre, telefono); 
        next = nullptr;
    }

    ~Node() {
        delete contacto;
    }
};


#endif // LISTA_ENLAZADA_HPP