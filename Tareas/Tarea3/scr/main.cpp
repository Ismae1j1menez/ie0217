//main.cpp
#include <iostream>
#include "Contacto.hpp"
#include "Hash_table.hpp"
#include "Lista_enlazada.hpp"
#include "Node.hpp"
#include "Funciones.hpp"
using namespace std; 


enum Opciones {
    AGREGAR_CONTACTO = 1,
    ELIMINAR_CONTACTO,
    IMPRIMIR_HASH,
    MOSTRAR_TODOS_CONTACTOS,
    SALIR
};

int main() {
    int opciones; 

    do{
        imprimir_linea_decorativa();
        cout << "Menu Principal:\n";
        imprimir_linea_decorativa();
        cout << "1. Agregar contacto.\n";
        cout << "2. Eliminar contacto.\n";
        cout << "3. Imprimir la Hash-Table y la Lista Enlazada.\n";
        cout << "4. Mostrar todos los contactos.\n";
        cout << "5. Salir.\n";
        imprimir_linea_decorativa();
        cout << "Ingrese su opcion: ";
        cin  >> opciones;

        switch (opciones){
            case AGREGAR_CONTACTO:
                break;
            case ELIMINAR_CONTACTO:
                break; 
            case IMPRIMIR_HASH:
                break;
            case MOSTRAR_TODOS_CONTACTOS:
                break;
            case SALIR:
                break;
            default:
                imprimir_linea_decorativa();
                cout << "Opcion no valida. Intente de nuevo...\n";
                imprimir_linea_decorativa();
                break; 
        }
    } while (opciones != SALIR);
    return 0; 
}

/*int main() {
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
}*/