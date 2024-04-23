#include <iostream>
#include <set>
using namespace std;

int main() {
    // Se inicializa un contenedor de datos tipo set
    // Ordena y no permite que hayan numeros repetidos
    set<int> numbers = {1, 100, 10, 70, 100};

    cout << "Numbers are: ";
    for(auto &num: numbers) {
        cout << num << ", ";
    }

    return 0; 
}