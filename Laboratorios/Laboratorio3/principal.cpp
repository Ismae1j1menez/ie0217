#include <iostream>
#include <string>
#include "Estruct.hpp"
#include "Funciones.hpp"
using namespace std; 

// Enum para las opciones del switch
enum {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS,
    SALIR, 
    OPCIONES_MAX
};

int main(){
    Libro* listaLibros = nullptr;
    int opcion; 
    // Menu con switch
    do{
        cout << "Selecciones su opcion: " << endl; 
        cout << "1. Agregar un libro" << endl; 
        cout << "2. Mostrar todos los libros" << endl; 
        cout << "3. Salir" << endl; 
        cin >> opcion;

        switch (opcion){
            case AGREGAR_LIBRO: 
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBROS:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl; 
                break; 
        }
    } while (opcion != 3);
    // Importante liberar la memoria
    liberarMemoria(listaLibros);
    return 0; 
}
