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
    for (Node*& bucket : contenedor_direcciones) {
        while (bucket != nullptr) {
            Node* toDelete = bucket;
            bucket = bucket->next;
            delete toDelete;  
        }
    }
}

// Aqui crea un contacto nuevo y incerta la direccion en el indice dada por el key
void TablaHash::insertarContacto(const std::string& nombre, const std::string& numTel) {
    Node* nuevo = new Node(nombre.c_str(), numTel.c_str());  
    int index = hashFunction(nombre + numTel);   
    nuevo->next = contenedor_direcciones[index];
    contenedor_direcciones[index] = nuevo;  
}

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


void TablaHash::eliminarContacto(const std::string& nombre, const std::string& numTel) {
    int index = hashFunction(nombre + numTel);
    Node* current = contenedor_direcciones[index];
    Node* prev = nullptr;

    while (current != nullptr) {
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
}

void TablaHash::imprimirTabla() {
    std::cout << "Hash Table:" << std::endl;
    for (int i = 0; i < size; ++i) {
        Node* current = contenedor_direcciones[i];
        std::cout << "Bucket " << i << ": ";
        while (current != nullptr) {
            std::cout << "[" << current->contacto->nombre << ", " << current->contacto->telefono << "] -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
}
