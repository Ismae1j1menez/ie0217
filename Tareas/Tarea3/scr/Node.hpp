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

#ifndef NODE_HPP
#define NODE_HPP
#include "Contacto.hpp"

/**
 * @class Node
 * @brief Clase para representar un nodo en una lista enlazada de contactos.
 *
 * Cada nodo contiene un puntero a un objeto Contacto, que almacena la información del contacto,
 * y un puntero al siguiente nodo en la lista, formando así la estructura de la lista enlazada.
 */
class Node {
public:
    // Direcciona ala lista enlazada contacto
    Contacto* contacto; ///< Puntero al contacto almacenado en este nodo.
    Node* next; ///< Puntero al siguiente nodo en la lista enlazada

     /**
     * @brief Constructor de Node.
     * @param nombre Nombre del contacto a almacenar en el nodo.
     * @param telefono Teléfono del contacto a almacenar en el nodo.
     *
     * Crea un nuevo objeto Contacto y lo asigna al miembro contacto. El puntero next
     * se inicializa a nullptr, indicando que no hay siguiente nodo aún vinculado.
     */
    Node(const char* nombre, const char* telefono);

    /**
     * @brief Destructor de Node.
     *
     * Libera la memoria asignada al contacto, asegurando que no haya fugas de memoria
     * cuando el nodo sea eliminado.
     */
    ~Node();
};

#endif