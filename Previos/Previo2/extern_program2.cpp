#include <iostream>
// Se declara la variable que es externa y esta en el programa extern_program1.cpp
extern int count; 

// Se define la funcion que es utilizada con el extern del programa extern_program1.cpp
void write_extern(void) {
    std::cout << "Count is " << count << std::endl; 
}