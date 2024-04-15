//Has_table.cpp
#ifndef HAS_TABLE_HPP
#define HAS_TABLE_HPP
#include <vector>
#include <string>
#include "Lista_enlazada.cpp"  

class TablaHash {
private:
    // Se usa un vector para el contendor de direcciones de la tabla hash
    std::vector<Node*> contenedor_direcciones;  
    int size;

    // Esta es la función que crea el indice para almacenar la dirección
    int hashFunction(const std::string& key) {
        int total = 0; 
        for (char c : key) {
            total += c;
        }
        return total % size;  
    }

public:
    // Constructor que inicializa la cantidad de contactos e inicializa todo a nullptr
    TablaHash(int size) : size(size), contenedor_direcciones(size, nullptr) {}

    // Elimina todos los nodos del contendor de direcciones
    ~TablaHash() {
        for (Node*& bucket : contenedor_direcciones) {
            while (bucket != nullptr) {
                Node* toDelete = bucket;
                bucket = bucket->next;
                delete toDelete;  
            }
        }
    }

    // Aqui crea un contacto nuevo y incerta la direccion en el indice dada por el key
    void insertarContacto(const std::string& nombre, const std::string& numTel) {
        Node* nuevo = new Node(nombre.c_str(), numTel.c_str());  
        int index = hashFunction(nombre + numTel);   
        nuevo->next = contenedor_direcciones[index];
        contenedor_direcciones[index] = nuevo;  
    }

/*    Node* buscarContacto(const std::string& nombre, const std::string& numTel) {
        int index = hashFunction(nombre + numTel);
        Node* temp = contenedor_direcciones[index];
        while (temp != nullptr) {
            if (temp->contacto->nombre == nombre && temp->contacto->telefono == numTel) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    } */
};

#endif