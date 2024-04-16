//main.cpp
#include <iostream>
#include "Contacto.hpp"
#include "Hash_table.hpp"
#include "Lista_enlazada.hpp"
#include "Node.hpp"
#include "Funciones.hpp"
#include "enums.hpp"
using namespace std; 

int main() {
    int opciones;
    int opciones_agregar;
    int opciones_eliminar; 
    string nombre_contacto;
    string tele_contacto;
    ListaEnlazada lista;
    TablaHash hashTable(10); 



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
                do {
                    imprimir_linea_decorativa();
                    cout << "Menu de Agregar Contacto:\n";
                    imprimir_linea_decorativa();
                    cout << "1. Agregar contacto en el almacenamiento interno y el cloud.\n";
                    cout << "2. Volver al menu principal.\n";
                    imprimir_linea_decorativa();
                    cout << "Ingrese su opcion: ";
                    cin >> opciones_agregar;
                    cin.ignore(); 

                    switch (opciones_agregar) {
                        case AGREGAREL_CONTACTO:
                            imprimir_linea_decorativa();
                            cout << "Ingrese el nombre del contacto: ";
                            getline(cin, nombre_contacto);
                            cout << "Ingrese el número de teléfono: ";
                            getline(cin, tele_contacto);
                            lista.agregarContacto(nombre_contacto.c_str(), tele_contacto.c_str());
                            hashTable.insertarContacto(nombre_contacto, tele_contacto);
                            break;
                        case NO_AREGAR:
                            cout << "Volviendo al menu principal..." << endl;
                            break;
                        default:
                            imprimir_linea_decorativa();
                            cout << "Opcion no valida. Intente de nuevo...\n";
                            imprimir_linea_decorativa();
                            break;
                    }
                } while (opciones_agregar != NO_AREGAR);
                break;
            case ELIMINAR_CONTACTO:
                do {
                    imprimir_linea_decorativa();
                    cout << "Menu de Eliminación de Contactos:\n";
                    imprimir_linea_decorativa();
                    cout << "1. Eliminar contacto solo del almacenamiento interno.\n";
                    cout << "2. Eliminar contacto solo del cloud.\n";
                    cout << "3. Eliminar contacto de ambos, almacenamiento interno y cloud.\n";
                    cout << "4. Volver al menú principal.\n";
                    imprimir_linea_decorativa();
                    cout << "Ingrese su opción: ";
                    cin >> opciones_eliminar;
                    cin.ignore(); 

                    switch (opciones_eliminar) {
                        case ELIMINAR_ALMACENAMIENTO_INTERNO:
                            cout << "Ingrese el nombre del contacto: ";
                            getline(cin, nombre_contacto);
                            cout << "Ingrese el número de teléfono: ";
                            getline(cin, tele_contacto);
                            cout << "Eliminando contacto del almacenamiento interno...\n";
                            lista.eliminarContacto(nombre_contacto, tele_contacto);
                            break; 
                        case ELIMINAR_CLOUD:
                            cout << "Ingrese el nombre del contacto: ";
                            getline(cin, nombre_contacto);
                            cout << "Ingrese el número de teléfono: ";
                            getline(cin, tele_contacto);
                            cout << "Eliminando contacto del cloud...\n";
                            hashTable.eliminarContacto(nombre_contacto, tele_contacto);
                            break;
                        case ELIMINAR_AMBAS:
                            cout << "Ingrese el nombre del contacto: ";
                            getline(cin, nombre_contacto);
                            cout << "Ingrese el número de teléfono: ";
                            getline(cin, tele_contacto);
                            cout << "Eliminando contacto de ambos almacenamientos...\n";
                            lista.eliminarContacto(nombre_contacto, tele_contacto);
                            hashTable.eliminarContacto(nombre_contacto, tele_contacto);
                            break;
                        case NO_ELIMINAR:
                            cout << "Volviendo al menú principal..." << endl;
                            break;
                        default:
                            imprimir_linea_decorativa();
                            cout << "Opción no válida. Intente de nuevo...\n";
                            imprimir_linea_decorativa();
                            break;
                    }
                } while (opciones_eliminar != NO_ELIMINAR);
                break;
            case IMPRIMIR_HASH:
                hashTable.imprimirTabla();
                break;
            case MOSTRAR_TODOS_CONTACTOS:
                lista.ordenarAlfabeticamente();
                //lista.mostrarContactos();
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
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