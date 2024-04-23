#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<string> languages = {"Python", "C++", "Java"};  // Crea un vector que almacena strings 

    vector<string>::iterator itr;  // Declara un iterador para recorrer el vector de strings

    for(itr = languages.begin(); itr != languages.end(); itr++){  // Bucle for que comienza en el primer elemento del vector y termina en el último
        cout << *itr << ", ";  // Imprime el valor actual que apunta el iterador seguido de una coma y un espacio
    }
    return 0;  
}
