#include "biblioteca.hpp" // Incluye el archivo con la definición de la clase Biblioteca.

int main() {
    Biblioteca biblioteca; // Crea un objeto de la clase Biblioteca.
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald"); // Agrega un libro a la biblioteca.
    biblioteca.agregarLibro("1984", "George Orwell"); // Agrega otro libro a la biblioteca.
    biblioteca.mostrarCatalogo(); // Muestra todos los libros que están en la biblioteca.
    return 0; // Termina el programa devolviendo 0.
}
