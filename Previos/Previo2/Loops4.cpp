#include <iostream> 
using namespace std; 

int main() {
    // Declaración de i que aumenta en 1 en cada ciclo
    int i = 1;

    // While que se ejecuta una vez, si se cumple la condicion se 
    // sigue ejecutando hasta que no se cumpla mas
    do {
        cout << i << " "; 
        ++i; 
    }
    while (i <= 5); 

    cout << "\n"; 
}