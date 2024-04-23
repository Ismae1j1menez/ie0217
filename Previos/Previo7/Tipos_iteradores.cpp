#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};  // Crea una lista simplemente enlazada

    forward_list<int>::iterator itr = nums.begin();  

    while (itr != nums.end()) { 
        int original_value = *itr;  // Almacena el valor actual al que apunta el iterador
        *itr = original_value * 2;  // Duplica el valor del elemento actual en la lista
        itr++; 
    }
    
    for (int num: nums) {  // Recorre todos los elementos de la lista 
        cout << num << ", ";
    }
    return 0; 
}
