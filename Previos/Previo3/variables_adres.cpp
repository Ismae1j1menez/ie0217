#include <iostream>
using namespace std; 

int main() {
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;
    
    // Muestra la dirección de la variables var1, var2 y var3
    cout << "Andress of var1: " << &var1 << endl;
    cout << "Andress of var2: " << &var2 << endl;
    cout << "Andress of var3: " << &var3 << endl;

    return 0; 
}