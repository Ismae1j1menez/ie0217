// Librería utilizada para manejar objetos de salida y entrada como cout
#include <iostream>

// Función principal del código
int main () {
    std::cout << "Hola Mundos, estudiantes de IE0217!\n";
    // Inicialización y declaración de var1 y var 2
    int var1 = 0; 
    int var2;

    // Es una condición con el operador ?
    // Si var1 es igual a 3, var2 es igual a 15, sino es igual a 27
    var2 = (var1 == 3) ? 15 : 27;
    std::cout << "var2: \n" << var2 << "\n";
    return 0; 
}