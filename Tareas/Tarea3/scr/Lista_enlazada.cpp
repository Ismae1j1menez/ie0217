#include "Lista_enlazada.hpp"

// Constructor, inicializa el puntero inicial en nullptr
ListaEnlazada::ListaEnlazada() : head(nullptr) {}

// Este destructor elimina toda la cadena de nodos
ListaEnlazada::~ListaEnlazada() {
    Node* current = head;
    while (current != nullptr) {
        Node* toDelete = current;
        current = current->next;
        delete toDelete;
    }
}


void ListaEnlazada::agregarContacto(const char* nombre, const char* telefono) {
    Node* nuevo = new Node(nombre, telefono);
    nuevo->next = head;
    head = nuevo;
}

void ListaEnlazada::mostrarContactos() {
    Node* current = head;
    while (current != nullptr) {
        current->contacto->mostrar();
        current = current->next;
    }
} 

void ListaEnlazada::eliminarContacto(const std::string& nombre, const std::string& numTel) {
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (strcmp(current->contacto->nombre, nombre.c_str()) == 0 && strcmp(current->contacto->telefono, numTel.c_str()) == 0) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current; 
            return;
        }
        prev = current;
        current = current->next;
    }
}
