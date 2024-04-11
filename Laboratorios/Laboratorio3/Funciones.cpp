#include "Funciones.hpp"

// Funcion que agrega el libro
void agregarLibro(Libro*& lista){
    Libro* nuevoLibro = new Libro; 
    cout << "Ingrese el titulo del libro: " << endl; 
    // Para limpiar el registro, se le dice limpiar buffer
    // Esto significa que quedan caracteres basura en el registro con el que se trabja
    // por lo que se limpia con el cin.ignore()
    cin.ignore();
    // El getline es para poder agrrar mas de 1 palabra en la terminal
    getline(cin, nuevoLibro->titulo);

    cout << "Ingrese el autor del libro: " << endl; 
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: " << endl; 
    getline(cin, nuevoLibro->genero);

    // En el miembro siguiente en nuevo libro agregamos lo que se tiene a lista
    nuevoLibro -> siguiente = lista; 
    lista = nuevoLibro;

    cout << "Libro agregado conrrectamente " << endl; 
}

// Funcion para mostrar libros
void mostrarLibros(Libro* lista) {
    // Revisa que el lista sea un puntero nulo para imprimir que no hay libros
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

// Función para liberar memoria
void liberarMemoria(Libro*& lista){
    // Hace el ciclo hasta que el miembro siguiente no apunte a nada
    // esto significa que no hay más miembros siguientes
    while(lista != nullptr){
        // Guarda la lista actual en temp, esto luego se elimina
        Libro* temp = lista;
        // Esta es la nueva lista base, donde comienza la interación
        lista = lista -> siguiente;
        delete temp;
    }
}