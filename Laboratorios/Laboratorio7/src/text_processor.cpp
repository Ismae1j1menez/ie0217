#include "text_processor.hpp"
#include <fstream>
#include <regex>

// Constructor que guarda los nombres de los archivos de entrada y salida.
TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename)
    : input_filename(input_filename), output_filename(output_filename){}

// Función que reemplaza un patrón de texto en el archivo de entrada y guarda el resultado en el archivo de salida.
void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string){
    // Abre el archivo de entrada para leer.
    std::ifstream input_file(input_filename);
    
    // Abre el archivo de salida para escribir.
    std::ofstream output_file(output_filename);
    
    // Variable para guardar cada línea leída del archivo de entrada.
    std::string line;

    // Crea una expresión regular con el patrón que queremos buscar.
    std::regex pattern(search_pattern);

    // Revisar que ambos archivos se abran correctamente.
    if (input_file && output_file) {
        // Lee el archivo de entrada línea por línea.
        while (getline(input_file, line)) {
            // Reemplaza el patrón en la línea actual.
            std::string replaced = std::regex_replace(line, pattern, replace_string);
            
            // Escribe la línea modificada en el archivo de salida.
            output_file << replaced << "\n";
        }
    }
}
