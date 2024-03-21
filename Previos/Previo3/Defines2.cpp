#include <iostream>
using namespace std; 

#define BOOK_ID_MAC 10

enum{
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX,
} casas_t; 

int main() {
    // El valor de BOOK_ID_MAX es Pr4e_procesado
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAC << endl; 
    // Imprime número de CASA_MAX en enum es decir como se les asigna un número por
    // defecto 0, 1, 2, 3 -> donde 3 es el de CASA_MAX
    cout << "La cantiadad de casas en el condiminio es: " << CASA_MAX << endl; 
    return 0; 
}