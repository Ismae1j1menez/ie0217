#include "Lista_enlazada.hpp"
#include "Node.hpp"
#include <iostream>

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

// Función que ordena alfabeticamente para luego poder mostrar los contactos 
void ListaEnlazada::ordenarAlfabeticamente() {
    if (!head || !head->next) return;
    bool swapped;
    do {
        swapped = false;
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->next != nullptr) {
            // Usando strcmp para comparar
            if (strcmp(current->contacto->nombre, current->next->contacto->nombre) > 0) {
                Node* tmp = current->next;
                current->next = tmp->next;
                tmp->next = current;

                if (prev == nullptr) {
                    head = tmp;
                } else {
                    prev->next = tmp;
                }

                swapped = true;
                prev = tmp; 
            } else {
                prev = current;
                current = current->next;
            }
        }
    } while (swapped);
    mostrarContactos(); 
}

// Muestra los cóntactos, como ya estan ordenados alfabeticamente entonces solo se imprimen
void ListaEnlazada::mostrarContactos() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->contacto->nombre << ": " << current->contacto->telefono << std::endl;
        current = current->next;
    }
}