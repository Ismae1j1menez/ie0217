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
 * @file TablaHash.cpp
 * @brief Implementación de la clase TablaHash.
 *
 * Este archivo contiene la implementación de la clase TablaHash, que representa una tabla hash
 * utilizada para almacenar y gestionar contactos. Incluye funciones para calcular el índice hash,
 * insertar, buscar y eliminar contactos, así como para imprimir la tabla hash completa.
 *
 * La clase TablaHash utiliza una vector de punteros a Node para almacenar las listas enlazadas de contactos
 * asignadas a cada índice de la tabla hash. Se asegura de manejar colisiones utilizando listas enlazadas
 * para permitir el almacenamiento de múltiples contactos en el mismo índice.
 */
#include "Hash_table.hpp"

// Esta es la función que crea el indice para almacenar la dirección
int TablaHash::hashFunction(const std::string& key) {
    int total = 0; 
    for (char c : key) {
        total += c;
    }
    return total % size;  
}

// Constructor que inicializa la cantidad de contactos e inicializa todo a nullptr
TablaHash::TablaHash(int size) : size(size), contenedor_direcciones(size, nullptr) {}

// Elimina todos los nodos del contendor de direcciones
TablaHash::~TablaHash() {
    // &* preprara la modificación de los buckets tipo nodo, es decir va elimnando cada bucket en cada
    // ciclo, hasta que sea todo nullptr
    for (Node*& bucket : contenedor_direcciones) {
        while (bucket != nullptr) {
            Node* toDelete = bucket;
            bucket = bucket->next;
            delete toDelete;  
        }
    }
}
// Se puede vizualizar el destructor como:
// Vector: [ Node1 -> Node2 -> Node3, NULL, Node4 -> Node5, ... ]
//          ^bucket1                     ^bucket2  ^bucket3


// Aqui crea un contacto nuevo e incerta la direccion en el indice dada por el key
// Nota: el c_str() devuelve lo siguiente:
// std::string ejemplo = "Hola";
// +---+---+---+---+---+
// | H | o | l | a | \0|
// +---+---+---+---+---+
//   ^
//   |
//   Esto es lo que devuelve ejemplo.c_str()


void TablaHash::insertarContacto(const std::string& nombre, const std::string& numTel) {
    Node* nuevo = new Node(nombre.c_str(), numTel.c_str());  
    int index = hashFunction(nombre + numTel);   
    nuevo->next = contenedor_direcciones[index];
    contenedor_direcciones[index] = nuevo;  
}
// Se puede vizualizar la inserción del contacto como:
// Antes de la Inserción:
// Índice   Contenido del Bucket
// 0        -> [Alice, 987654321] -> nullptr
// 1        -> [Bob, 234567890] -> nullptr
// 2        -> nullptr
// 3        -> [Carol, 345678901] -> nullptr
// 4        -> nullptr

// Se crea lo siguiente:
// Node* nuevo = new Node("B", "#);
// Este nodo tiene el miembro con el contacto + el miembro next:
// nuevo -> [Contacto: "B", next: nullptr]
// Luego entonces se le asigna a este nuevo nodo el principal por lo que queda:
// nuevo->next = contenedor_direcciones[2];
// nuevo -> [Contacto: "B", next: -> "A"]
// El estado final:
// [0] -> nullptr
// [1] -> nullptr
// [2] -> ["B" -> "A" -> nullptr]

// Despues d ela incerción suponiendo que el indice que se obtuvo fue 2:
// Índice   Contenido del Bucket
// 0        -> [Alice, 987654321] -> nullptr
// 1        -> [Bob, 234567890] -> nullptr
// 2        -> [John Doe, 123456789] -> nullptr
// 3        -> [Carol, 345678901] -> nullptr
// 4        -> nullptr

// Esta metdodo lo piden eliminar, es para el debug de los contactos
Node* TablaHash::buscarContacto(const std::string& nombre, const std::string& numTel) {
    int index = hashFunction(nombre + numTel);
    Node* temp = contenedor_direcciones[index];
    while (temp != nullptr) {
        if (strcmp(temp->contacto->nombre, nombre.c_str()) == 0 && strcmp(temp->contacto->telefono, numTel.c_str()) == 0) {
            std::cout << "Contacto encontrado: " << temp->contacto->nombre << ", " << temp->contacto->telefono << std::endl;
            return temp;
        }
        temp = temp->next;
    }
    std::cout << "No se encontró el contacto." << std::endl;
    return nullptr;
}

// Metodo para eliminar el contacto
void TablaHash::eliminarContacto(const std::string& nombre, const std::string& numTel) {
    // Se obtiene el indice
    int index = hashFunction(nombre + numTel);
    // Ingresa el nodo actual del contenedor de direcciones
    Node* current = contenedor_direcciones[index];
    Node* prev = nullptr;

    // Siempre que el nodo actual sea nullptr
    while (current != nullptr) {
        // Con strcmp revisa si el telefono y el nombre son iguales
        // strcmp devuelve positivo si char1=b > a char2=a
        // strcmp devuelve negativo si char1=a < a char2=b
        // devuelve 0 si son iguales
        if (strcmp(current->contacto->nombre, nombre.c_str()) == 0 && strcmp(current->contacto->telefono, numTel.c_str()) == 0) {
            if (prev == nullptr) {
                contenedor_direcciones[index] = current->next;
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
        std::cout << "No se encontro el contacto en el cloud..." << std::endl; 
    }
}

// Imprime la Hash-Table mostrando las jeys results y las listas enlazadas asignadas a cada key
void TablaHash::imprimirTabla() {
    std::cout << "Hash Table:" << std::endl;
    for (int i = 0; i < size; ++i) {
        Node* current = contenedor_direcciones[i];
        std::cout << "Index = " << i << ": ";
        while (current != nullptr) {
            std::cout << "[" << current->contacto->nombre << ", " << current->contacto->telefono << "] -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
}
