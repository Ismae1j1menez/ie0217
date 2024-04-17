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
 * @file Node.cpp
 * @brief Implementación de la clase Node.
 *
 * Este archivo contiene la implementación de la clase Node, que representa un nodo en una lista enlazada.
 * Cada nodo contiene un puntero al siguiente nodo en la lista y un objeto de tipo Contacto que almacena la información del contacto.
 * Se proporciona un constructor que inicializa el puntero al siguiente nodo como nulo y crea un nuevo objeto de tipo Contacto con
 * los parámetros proporcionados, así como un destructor que libera la memoria del objeto de tipo Contacto.
 */
#include "Node.hpp"
// Constructor que inicializa next con un puntero nulo y almacena un objeto tipo contacto en el miembro contacto
Node::Node(const char* nombre, const char* telefono) : next(nullptr) {
    contacto = new Contacto(nombre, telefono);
}

// Destructor de contacto, para se llama cuando se quiere eliminar un nodo
Node::~Node() {
    delete contacto;
}