//MIT License
//
//Copyright (c) 2024 Ismael Jiménez Carballo
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.


/**
 * @file ListaEnlazada.cpp
 * @brief Implementación de la clase ListaEnlazada.
 *
 * Este archivo contiene la implementación de la clase ListaEnlazada, que representa una lista
 * enlazada para almacenar y gestionar contactos. Incluye funciones para agregar, eliminar,
 * ordenar alfabéticamente y mostrar contactos almacenados en la lista.
 *
 * La clase ListaEnlazada utiliza nodos (Node) para construir la lista enlazada, con cada nodo
 * conteniendo la información de un contacto y un puntero al siguiente nodo en la lista.
 */
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
    if (current == nullptr) {
        std::cout << "No se encontro el contacto en el almacenamiento interno..." << std::endl; 
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