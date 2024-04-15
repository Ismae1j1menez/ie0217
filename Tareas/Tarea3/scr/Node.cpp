#include "Node.hpp"
// Constructor que inicializa next con un puntero nulo y almacena un objeto tipo contacto en el miembro contacto
Node::Node(const char* nombre, const char* telefono) : next(nullptr) {
    contacto = new Contacto(nombre, telefono);
}

// Destructor de contacto, para se llama cuando se quiere eliminar un nodo
Node::~Node() {
    delete contacto;
}