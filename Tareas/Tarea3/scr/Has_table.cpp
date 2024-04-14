#include <vector>
#include <string>
#include "Lista_enlazada.cpp"

class TablaHash {
private:
    std::vector<Node*> contenedor_direcciones;
    int size;

    int hashFunction(const std::string& key1, const std::string& key2) {
        int total = 0; 
        for (int i = 0; i < key1.size(); i++) {
            total += static_cast<int>(key1[i]); 
        }
        for (int i = 0; i < key2.size(); i++) {
            total += static_cast<int>(key2[i]);  
        }
        return total % size;  
    }

public:
    TablaHash(int size) : size(size), contenedor_direcciones(size, nullptr) {}

    ~TablaHash() {
        for (Node*& bucket : contenedor_direcciones) {
            Node* current = bucket;
            while (current != nullptr) {
                Node* next = current->next;
                delete current; 
                current = next;
            }
        }
    }

    void insertarContacto(const std::string& nombre, const std::string& numTel) {
        Node* nuevo = new Node(nombre, numTel);
        int index = hashFunction(nombre, numTel);
        nuevo->next = contenedor_direcciones[index]; // Encadenamiento en caso de colisión
        contenedor_direcciones[index] = nuevo; // Insertar al inicio de la lista en ese bucket
    }

    Node* buscarContacto(const std::string& nombre, const std::string& numTel) {
        int index = hashFunction(nombre, numTel);
        Node* temp = contenedor_direcciones[index];
        while (temp != nullptr) {
            if (temp->nombre == nombre) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};
