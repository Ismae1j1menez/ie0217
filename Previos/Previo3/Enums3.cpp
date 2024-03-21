#include <iostream>
using namespace std; 

// Manera de hacer código escalable, legible y mantenible 
// Se hace con la palabra clave enum, luego el nombre y finalmente los miembros
enum suit {
    club = 0, 
    diamonds = 10, 
    hearts = 20, 
    spades = 3
}   card; 
// card es una variable del tipo enum suit, capaz de almacenar cualquiera 
// de los valores de miembros definidos (club, diamonds, hearts, spades).

int main() {
    // Aquí, card se asigna el valor club, indicando que representa el miembro del enum.
    card = club; 
    // Al usar sizeof en card o cualquier miembro de enum suit (como club), el tamaño reportado es de 4 bytes. 
    // Esto se debe a que el tipo de la enumeración es un int, común en plataformas de 32 y 64 bits.
    cout << "Size of enum vairable " << sizeof(card) << " bytes." << endl; 
    return 0; 
}