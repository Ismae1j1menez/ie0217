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

#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include "Node.hpp"


/**
 * @class TablaHash
 * @brief Clase que implementa una tabla hash para gestionar contactos.
 *
 * Utiliza un vector de punteros a Node para almacenar los contactos. Proporciona métodos
 * para insertar, buscar y eliminar contactos, así como para imprimir el estado actual de la tabla.
 */
class TablaHash {
    private:
        // Se usa un vector para el contendor de direcciones de la tabla hash
        std::vector<Node*> contenedor_direcciones;  ///< Contenedor que almacena direcciones de nodos.
        int size;                                   ///< Tamaño de la tabla hash.

        /**
         * @brief Función hash que determina la posición de un contacto en la tabla.
         * @param key La clave que se utiliza para calcular la posición hash, basada en el nombre del contacto.
         * @return El índice calculado en el vector contenedor.
         */
        int hashFunction(const std::string& key);

    public:
        /**
         * @brief Constructor de TablaHash.
         * @param size Tamaño de la tabla hash a crear.
         */
        TablaHash(int size);

        /**
         * @brief Destructor de TablaHash.
         * 
         * Limpia todos los recursos asociados con la tabla hash, incluyendo la liberación de todos los nodos almacenados.
         */
        ~TablaHash();

        /**
         * @brief Inserta un nuevo contacto en la tabla hash.
         * @param nombre El nombre del contacto a insertar.
         * @param numTel El número de teléfono del contacto a insertar.
         */
        void insertarContacto(const std::string& nombre, const std::string& numTel);

        /**
         * @brief Busca un contacto en la tabla hash por nombre y número de teléfono.
         * @param nombre El nombre del contacto a buscar.
         * @param numTel El número de teléfono del contacto a buscar.
         * @return Un puntero al nodo que contiene el contacto, o nullptr si no se encuentra.
         */
        Node* buscarContacto(const std::string& nombre, const std::string& numTel);

        /**
         * @brief Elimina un contacto de la tabla hash.
         * @param nombre El nombre del contacto a eliminar.
         * @param numTel El número de teléfono del contacto a eliminar.
         */
        void eliminarContacto(const std::string& nombre, const std::string& numTel);

        /**
         * @brief Imprime todos los contactos almacenados en la tabla hash.
         * 
         * Esta función recorre el vector de direcciones imprimiendo cada nodo.
         */
        void imprimirTabla();
};


#endif