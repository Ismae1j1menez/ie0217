//Contacto.cpp
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "Has_table.cpp"
#include "Lista_enlazada.cpp"

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

/*   void mostrarContactos() {
        Node* current = head;
        while (current != nullptr) {
            current->contacto->mostrar();
            current = current->next;
        }
    } */
};