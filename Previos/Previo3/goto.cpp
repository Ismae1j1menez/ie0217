#include <iostream>
using namespace std; 

int main() {
    float num, average, sum =0; 
    int i, n; 
    cout << "Maximun number of inputs: ";
    cin >> n; 

    // Loop que suma un valor siempre y cuando el numero de dato 
    // sea menor a n
    for(i = 1; i <= n; ++i) {
        cout << "Enter n" << i << ": ";
        cin >> num; 

        // Siempre que num ingresado sea menor a 0, salta al label jump
        if(num < 0.0) {
            goto jump;
        }
        sum += num; 
    }

// Solo se utiliza a menos que se cumpla la condición de arriba
jump:
    // se obtiene el average, siempre se llega aunque no se 
    // ejecute el jump
    average = sum / (i - 1); 
    cout << "\nAverage = " << average << endl; 
    return 0;  
}