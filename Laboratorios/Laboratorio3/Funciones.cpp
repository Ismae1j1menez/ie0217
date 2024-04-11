#include "Funciones.hpp"
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