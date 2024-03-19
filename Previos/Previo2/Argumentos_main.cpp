#include <iostream> // Incluye la biblioteca de entrada/salida estándar.

// La función main puede recibir argumentos de la línea de comandos.
// argc (argument count) es el número de argumentos pasados, incluyendo el nombre del programa.
// argv (argument vector) es un arreglo de cadenas que contiene los argumentos pasados al programa.
int main(int argc, char* argv[]) { 
    // Imprime la cantidad de argumentos y el nombre del programa
    std::cout << "Número de argumentos: " << argc << std::endl; 
    std::cout << "Nombre del programa: " << argc << std::endl; 
    
    // Si la cantidad de argumentos es mayor a 1, revisa el vector de 
    // strings con un loop y luego imrime ell argumento, argv[i]
    if (argc > 1) {
        std::cout << "Agumentos adicionales" << std::endl;
        for (int i = 1; i < argc; ++i) {
            std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
        }
    }
    return 0; 
}
