//main.cpp
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>

class Contacto {
public:
    // Apunta al primer caracter del string nombre y telefono
    char* nombre;
    char* telefono;

    // Constructor
    Contacto(const char* nom, const char* tel) {
        // Reserva una cantidad de memoria de la longitd del miembro + 1 (por el caracter nullo)
        nombre = (char*)malloc(strlen(nom) + 1);  
        telefono = (char*)malloc(strlen(tel) + 1);
        // Revisa si nombre y telefono son null, sino lo son entonces se copia nom y tel en la memoria
        if (nombre) strcpy(nombre, nom); 
        if (telefono) strcpy(telefono, tel); 
    }

    // Destructor, se libera la memoria reservada en nombre y telefono
    ~Contacto() {
        free(nombre);  
        free(telefono); 
    }

    // Revisar si este metodo hay que cambiarlo.
    void mostrar() const {
        std::cout << "Nombre: " << nombre << ", Teléfono: " << telefono << std::endl;
    }
};

class Node {
public:
    // Direcciona ala lista enlazada contacto
    Contacto* contacto;
    Node* next;

    Node(const char* nombre, const char* telefono) : next(nullptr) {
        contacto = new Contacto(nombre, telefono);
    }

    ~Node() {
        delete contacto;
    }
};

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

    Node* buscarContacto(const std::string& nombre, const std::string& numTel) {
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


    void eliminarContacto(const std::string& nombre, const std::string& numTel) {
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

    void imprimirTabla() {
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
};


class ListaEnlazada {
public:
    // Miembro que apunta al la clase Node
    Node* head;

    // Constructor, inicializa el puntero inicial en nullptr
    ListaEnlazada() : head(nullptr) {}

    // Este destructor elimina toda la cadena de nodos
    ~ListaEnlazada() {
        Node* current = head;
        while (current != nullptr) {
            Node* toDelete = current;
            current = current->next;
            delete toDelete;
        }
    }

 
    void agregarContacto(const char* nombre, const char* telefono) {
        Node* nuevo = new Node(nombre, telefono);
        nuevo->next = head;
        head = nuevo;
    }

    void mostrarContactos() {
        Node* current = head;
        while (current != nullptr) {
            current->contacto->mostrar();
            current = current->next;
        }
    } 

    void eliminarContacto(const std::string& nombre, const std::string& numTel) {
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
    }
};


int main() {
    ListaEnlazada lista;
    TablaHash hashTable(10); 

    const char* nombre = "John Doe";
    const char* telefono = "123-456-7890";
    const char* nombre2 = "Jane Doe";
    const char* telefono2 = "987-654-3210";

    lista.agregarContacto(nombre, telefono);
    hashTable.insertarContacto(std::string(nombre), std::string(telefono));
    lista.agregarContacto(nombre2, telefono2);
    hashTable.insertarContacto(std::string(nombre2), std::string(telefono2));

    std::cout << "Mostrando todos los contactos:" << std::endl;
    lista.mostrarContactos();

    std::cout << "Buscando a John Doe:" << std::endl;
    hashTable.buscarContacto(std::string(nombre), std::string(telefono));

    std::cout << "Imprimiendo Hash-Table:" << std::endl;
    hashTable.imprimirTabla();

    std::cout << "Eliminando a Jane Doe:" << std::endl;
    lista.eliminarContacto(std::string(nombre2), std::string(telefono2));
    hashTable.eliminarContacto(std::string(nombre2), std::string(telefono2));

    std::cout << "Contactos tras eliminar a Jane Doe:" << std::endl;
    lista.mostrarContactos();
    std::cout << "Hash-Table tras eliminar a Jane Doe:" << std::endl;
    hashTable.imprimirTabla();

    return 0;
}