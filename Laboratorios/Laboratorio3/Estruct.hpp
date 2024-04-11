#ifndef ESTRUCT_HPP
#define ESTRUCT_HPP
#include <iostream>
#include <string>
using namespace std; 

// Se crea la estructura con los miembros
// Es un contenedor de datos
struct Libro {
    string titulo;
    string autor; 
    string genero; 
    // Es un puntero que se llama siguiente, de tipo libro puntero, direccion de memoria
    // igual a esta, es una estructura diferente
    Libro* siguiente; 
};




#endif