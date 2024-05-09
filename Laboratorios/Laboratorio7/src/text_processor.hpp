#ifndef TEXT_PROCESSOR_HPP
#define TEXT_PROCESSOR_HPP

#include <string>

// La clase TextProcessor se encarga de procesar texto.
// Tiene funciones para buscar y reemplazar texto en un archivo.
class TextProcessor {
    private:
        // El nombre del archivo de entrada donde se busca el texto.
        std::string input_filename;
        
        // El nombre del archivo de salida donde se guarda el resultado.
        std::string output_filename;

    public:
        // Constructor que guarda los nombres de los archivos de entrada y salida.
        TextProcessor(const std::string& input_filename, const std::string& output_filename);
        
        // Función que reemplaza un patrón de texto en el archivo de entrada
        // y guarda el resultado en el archivo de salida.
        void replace(const std::string& search_pattern, const std::string& replace_string);
};

#endif
