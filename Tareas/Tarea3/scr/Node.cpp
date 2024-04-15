#include "Node.hpp"
Node::Node(const char* nombre, const char* telefono) : next(nullptr) {
    contacto = new Contacto(nombre, telefono);
}

Node::~Node() {
    delete contacto;
}