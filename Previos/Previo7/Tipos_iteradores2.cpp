#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums{1, 2, 3, 4};  // Crea una lista doblemente enlazada

    list<int>::iterator itr = nums.begin(); 
    cout << "Moving forward: " << endl; 

    while (itr != nums.end()) {
        cout << *itr << ", ";
        itr++;  // Avanza el iterador al siguiente elemento de la lista
    }
    
    cout << endl << "Moving backward" << endl; 
    itr--;  // Retrocede el iterador al último elemento 
    while (itr != nums.begin()) {  
        cout << *itr << ", "; 
        itr--;  // Retrocede el iterador al elemento anterior
    }
    cout << *itr << endl;  // Imprime el primer elemento de la lista

    return 0; 
}
