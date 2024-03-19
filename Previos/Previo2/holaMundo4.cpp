#include <iostream> // Incluye la biblioteca de entrada/salida estándar.

// La función main puede recibir argumentos de la línea de comandos.
// argc (argument count) es el número de argumentos pasados, incluyendo el nombre del programa.
// argv (argument vector) es un arreglo de cadenas que contiene los argumentos pasados al programa.
int main(int argc, char* argv[]) { 
    // Imprime el nombre del programa.
    std::cout << "argv[0]: " << argv[0] << std::endl; 
    // Imprime el primer argumento pasado al programa.
    std::cout << "argv[1] " << argv[1] << std::endl; 
    // Imprime el segundo argumento pasado al programa.
    std::cout << "argv[2] " << argv[2] << std::endl; 
    // Imprime el tercer argumento pasado al programa.
    std::cout << "argv[3] " << argv[3] << std::endl; 
    // Termina la ejecución del programa exitosamente.
    return 0; 
}
