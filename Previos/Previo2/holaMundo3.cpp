// Librería utilizada para manejar objetos de salida y entrada como cout
#include <iostream>

// Función principal del código
int main () {
    std::cout << "Hola Mundos, estudiantes de IE0217!\n";
    // Inicialización y declaración de var1 y var 2
    int var1 = 2; 
    // int var2 = 2; 
    // int var3 = 2; 

    // swich, es una caja donde se evaluan condiciones
    // se verifica el valor de var1, y cual sea el valor se ejecuta ese case
    switch (var1)  {
        // case 1, si el calor de var1=1
        case 1: 
            std::cout << "Case 1!\n";
            // importante el brake para que no siga revisando condiciones
            break;
        // case 2 y 3 ejecutan el mismo comando, si var1 es 1 o 2
        // se imprime el mensaje "Case Final"
        case 2: 
        case 3: 
            std::cout << "Case Final!\n";
            break;
        
        // para casos donde no se tenga niguna de las otras condiciones
        // por lo tanto se ejecuta la condición de default
        default: 
            break;
    }
    return 0; 
}