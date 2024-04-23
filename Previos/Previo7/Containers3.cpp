#include <iostream>
#include <unordered_set>

using namespace std; 
int main () {
    // Este contendor de datos no permite numeros repetidos, pero
    // los datos pueden estar desordenados, diferente al set normal
    unordered_set<int> numbers = {1,100, 10, 70, 100};

    cout << "Numbers are: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    return 0; 
}