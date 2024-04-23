#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec{1, 2, 3, 4}; 

    vector<int>::iterator itr_first = vec.begin();  // Obtiene un iterador apuntando al primer elemento del vector
    vector<int>::iterator itr_last = vec.end() - 1; // Obtiene un iterador apuntando al último elemento del vector

    cout << "First Element: " << *itr_first << endl;  // Imprime el primer elemento del vector
    cout << "Second Element: " << itr_first[1] << endl;  
    cout << "Second Last Element: " << *(itr_last - 1) << endl; 
    cout << "Last Element: " << *itr_last << endl; 

    return 0; 
}
