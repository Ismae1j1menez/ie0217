#include <iostream>
using namespace std; 

// Se define una función del valor absoluto, donde si es menor a 0
// el valor absoluto es -var, es tipo float los argumentos y el retorno
float absolute(float var){
    if (var < 0.0)
         var = -var; 
    return var; 
}

// Se define una función del valor absoluto, donde si es menor a 0
// el valor absoluto es -var, es tipo int los argumentos y el retorno
int absolute(int var) {
    if (var < 0)
        var = -var; 
    return var; 
}

int main() {
    // Se llama a la función, como el argumento es de tipo entero 
    // la función que se llama es la de tipo entero también
    cout << "Absolute value of -5 = " << absolute(-5) << endl; 

    // Se llama a la función, como el argumento es de tipo flotante
    // la función que se llama es loa de tipo flotante
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl; 

    return 0;
}