#include <iostream>
int count; 

// Declaración de la funcion write_extern que esta en el archivo
// extern_program2.cpp
extern void write_extern(); 
int main() {
    count = 5; 
    // Se llama a la función que esta en el programa extern_program2.cpp
    write_extern(); 
    return 0; 
}