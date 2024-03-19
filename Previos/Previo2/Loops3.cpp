#include <iostream> 
using namespace std; 

int main() {
    // Declaración de i que aumenta en 1 en cada ciclo
    int i = 1;
    // Loop while que se ejecuta siempre y cuando i sea menor a 5
    while (i <= 5) {
        cout << i << " "; 
        ++i; 
    } 
    
    cout << "\n"; 
}