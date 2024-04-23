#include <iostream>
#include <vector>

using namespace std; 

int main() {
    // Se inicializa el vector de enteros
    // Es un contenedor
    vector<int> numbers = {1, 100, 10, 70, 100};

    cout << "Number are: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }

    return 0; 
}