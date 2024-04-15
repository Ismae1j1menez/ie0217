#ifndef NODE_HPP
#define NODE_HPP
#include "Contacto.hpp"

class Node {
public:
    // Direcciona ala lista enlazada contacto
    Contacto* contacto;
    Node* next;

    Node(const char* nombre, const char* telefono);
    ~Node();
};

#endif