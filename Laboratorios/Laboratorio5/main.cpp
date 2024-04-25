#include <iostream>
// Libreria para la creación de contenedores tipo vector
#include <vector>
#include <algorithm>
#include <string>

// Definición de la clase Libro
class Libro {
public:
    // Miembros públicos
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    // Constructor que inicializa los miembros
    Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

    // Sobrecarga del operador < para comparar libros por año de publicación
    bool operator<(const Libro& l) const {
        return anioPublicacion < l.anioPublicacion;
    }
};

// Definición de la clase Biblioteca
class Biblioteca {
private:
    // Contenedor privado de libros tipo vector
    std::vector<Libro> libros;

public:
    // Método para agregar un libro al contenedor
    void agregarLibro(const Libro& libro) {
        // Agrega el objeto tipo libro al vector
        libros.push_back(libro);
    }

    // Método para mostrar los libros en la biblioteca
    void mostrarLibros() {
        // En el vector libros agarra un objeto libro y lo imprime
        for (const auto& libro : libros) {
            std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
        }
    }

    // Método para ordenar los libros por año de publicación
    void ordenarLibrosPorAnio() {
        // sort ordena pero por la sobrecarga de operadores ordena por año
        std::sort(libros.begin(), libros.end());
    }

    // Método para buscar un libro por título y devolver un iterador al libro encontrado
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo) {
        // Utiliza std::find_if para buscar un libro con el título especificado, el rango es
        // libros.begin() y libros.end(). Luego la condición es que el titulo en l, sea igual al capturado
        return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
            return l.titulo == titulo;
        });
    }

    // Método para obtener un iterador que señala al final del contenedor de libros
    std::vector<Libro>::iterator end() {
        return libros.end();
    }
};

int main() {
    Biblioteca miBiblioteca;
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"Harry Potter y la piedra filosofal", "J.K. Rowling", 1997});
    miBiblioteca.agregarLibro({"Orgullo y prejuicio", "Jane Austen", 1813});
    miBiblioteca.agregarLibro({"Romeo y Julieta", "William Shakespeare", 1597});
    miBiblioteca.agregarLibro({"Moby Dick", "Herman Melville", 1851});

    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();

    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    return 0;
}
