#include <iostream>
#include "text_processor.hpp"

int main(int argc, char* argv[]){
    // Verifica si se proporcionaron suficientes argumentos.
    // Se necesitan 9 argumentos: programa, -f, filename, -o, outputfile, -search, search_pattern, -replace, replace_string
    if (argc < 9) {
        std::cerr << "Uso: " << argv[0] << " -f <filename> -o <outputfile> -search <search_pattern> -replace <replace_string>\n";
        return 1; // Termina el programa con un código de error.
    }

    // Obtiene los valores de los argumentos de la línea de comandos.
    std::string filename = argv[2];
    std::string outputfile = argv[4];
    std::string search_pattern = argv[6];
    std::string replace_string = argv[8];

    // Crea un objeto de la clase TextProcessor con el archivo de entrada y el archivo de salida.
    TextProcessor processor(filename, outputfile);
    
    // Llama a la función replace para reemplazar el patrón de búsqueda en el archivo.
    processor.replace(search_pattern, replace_string);

    return 0; 
}
