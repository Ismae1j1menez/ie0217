#include <iostream>
#include <algorithm>
#include <vector>

// Función de comparación que determina si el primer elemento es menor que el segundo
bool myfunction (int i, int j) { return (i < j); }

struct myclass {
    bool operator() (int i, int j) { return (i < j); }
} myobject;

int main() {
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33}; 
    std::vector<int> myvector (myints, myints+8);  

    // Ordena la primera mitad del vector (primeros cuatro elementos) 
    std::sort (myvector.begin(), myvector.begin()+4);  
    
    // Ordena la segunda mitad del vector utilizando la función de comparación myfunction
    std::sort (myvector.begin()+4, myvector.end(), myfunction);  

    // Ordena todo el vector utilizando el objeto myobject como la función de comparación
    std::sort (myvector.begin(), myvector.end(), myobject);  

    std::cout << "myvector contains";  
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)  // Itera sobre cada elemento del vector
        std::cout << ' ' << *it;  
    std::cout << "\n"; 

    return 0;  
}
