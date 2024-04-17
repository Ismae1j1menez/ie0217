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

#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP
#include <string>
#include "Node.hpp"
#include <cstdlib>
#include <cstring>

/**
 * @class ListaEnlazada
 * @brief Clase que implementa una lista enlazada para gestionar contactos.
 *
 * Esta clase utiliza nodos (Node) para almacenar y gestionar una lista enlazada de contactos.
 * Proporciona métodos para agregar, eliminar, ordenar y mostrar contactos almacenados.
 */
class ListaEnlazada {
public:
    // Miembro que apunta al la clase Node
    Node* head; ///< Puntero al primer nodo de la lista enlazada, que almacena contactos.

     /**
     * @brief Constructor por defecto de ListaEnlazada.
     *
     * Inicializa la cabeza de la lista (head) en nullptr, indicando una lista vacía.
     */
    ListaEnlazada();

    /**
     * @brief Destructor de ListaEnlazada.
     *
     * Libera todos los recursos de la lista, eliminando todos los nodos y liberando la memoria asociada.
     */
    ~ListaEnlazada();

    /**
     * @brief Agrega un nuevo contacto a la lista enlazada.
     * @param nombre Nombre del contacto a agregar.
     * @param telefono Teléfono del contacto a agregar.
     */
    void agregarContacto(const char* nombre, const char* telefono);

    /**
     * @brief Elimina un contacto específico de la lista enlazada.
     * @param nombre Nombre del contacto a eliminar.
     * @param numTel Teléfono del contacto a eliminar.
     */
    void eliminarContacto(const std::string& nombre, const std::string& numTel);

    /**
     * @brief Ordena la lista de contactos alfabéticamente por el nombre.
     */
    void ordenarAlfabeticamente();

    /**
     * @brief Muestra todos los contactos de la lista.
     *
     * Imprime la información de cada contacto almacenado en la lista enlazada.
     */
    void mostrarContactos();
};

#endif