#include <iostream>
#include <fstream> // Incluye la biblioteca necesaria para trabajar con archivos.

class Archivo {
    private:
        std::fstream archivo; // Miembro de datos para manejar el archivo.

    public:
        // Constructor que intenta abrir un archivo con el nombre proporcionado.
        // El modo std::ios::in | std::ios::app permite lectura y añadir al final.
        // std::ios::out permite escritura
        Archivo(std::string nombre_archivo) {
            // Intenta abrir el archivo en modo lectura, escritura y append (añadir al final).
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
            // Verifica si el archivo se ha abierto correctamente.
            if (!archivo.is_open()) {
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl; 
            }
        }

        // Destructor que cierra el archivo si está abierto.
        ~Archivo() {
            // Verifica si el archivo está abierto antes de intentar cerrarlo.
            if (archivo.is_open()) {
                archivo.close();
            }
        }
};

int main() {
    // Crea una instancia de la clase Archivo, intentando abrir "datos.txt".
    Archivo mi_archivo("datos.txt");

    // hacer algo con el archivo

    return 0; 
}
