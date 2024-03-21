#include <iostream>
using namespace std; 

// Protipo de la función, para que el main sepa que 
// más adelante se define la función
int factorial(int); 

int main() {
    int n, result; 

    cout << "Enter a non negative number: "; 
    cin >> n; 

    result = factorial(n); 
    cout << "Factorial of " << n << " = " << result << endl; 

    return 0; 
}

// Definición de la función, es recursiva ya que siempre que
// n sea mayor a uno se vuelve a llamar a la función con n-1
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1); 
    } else {
        return 1; 
    }
 }