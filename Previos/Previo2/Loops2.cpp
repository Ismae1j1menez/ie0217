#include <iostream> 
using namespace std; 
int main () {
    // Declaración de una lista del 1 al 10
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Loop que recorre la lista de uno en uno y lo imprime
    for (int n : num_array) {
        cout << n << " "; 
    }
    cout << "\n";
    return 0; 
}