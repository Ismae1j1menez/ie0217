#include <iostream>
#include <string>
using namespace std; 


struct Libro {
    string titulo;
    string autor; 
    string genero; 
    // Es un puntero que se llama siguiente, de tipo libro puntero, direccion de memoria
    // igual a esta, es una estructura diferente
    Libro* siguiente; 
};

enum {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS,
    SALIR, 
    OPCIONES_MAX
};

void agregarLibro(Libro*& lista){
    Libro* nuevoLibro = new Libro; 
    cout << "Ingrese el titulo del libro: " << endl; 
    cin.ignore();
    getline(cin, nuevoLibro->titulo);

    cout << "Ingrese el autor del libro: " << endl; 
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: " << endl; 
    getline(cin, nuevoLibro->genero);

    nuevoLibro -> siguiente = lista; 
    lista = nuevoLibro;

    cout << "Libro agregado conrrectamente " << endl; 
}


void mostrarLibros(Libro* lista) {
    if(lista == nullptr){
        cout << "La libreria no tiene libros." << endl; 
        return; 
    }

    cout << "Lista de libros: " << endl; 
    while (lista != nullptr){
        cout << "Titulo: " << lista -> titulo << endl; 
        cout << "Autor: " << lista -> autor << endl; 
        cout << "Genero: " << lista -> genero << endl << endl;
        lista = lista->siguiente; 
    }
}

void liberarMemoria(Libro*& lista){
    while(lista != nullptr){
        Libro* temp = lista;
        lista = lista -> siguiente;
        delete temp;
    }
}

int main(){
    Libro* listaLibros = nullptr;
    int opcion; 
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
    liberarMemoria(listaLibros);
    return 0; 
}
