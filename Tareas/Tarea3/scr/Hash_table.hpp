#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include "Node.hpp"

class TablaHash {
    private:
        // Se usa un vector para el contendor de direcciones de la tabla hash
        std::vector<Node*> contenedor_direcciones;  
        int size;

        int hashFunction(const std::string& key);

    public:
        TablaHash(int size);
        ~TablaHash();
        void insertarContacto(const std::string& nombre, const std::string& numTel);
        Node* buscarContacto(const std::string& nombre, const std::string& numTel);
        void eliminarContacto(const std::string& nombre, const std::string& numTel);
        void imprimirTabla();
};


#endif