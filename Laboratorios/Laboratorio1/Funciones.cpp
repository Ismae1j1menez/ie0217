#include "Funciones.hpp"

// Función para agregar contacto, el argumento que se pasa modifica numContactos en su dirección
// en memoria
void agregarContacto(Contacto listaContactos[], int &numContactos) {
    Contacto nuevoContacto;
    std::cout << "Ingresar el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre;
    std::cout << "Ingresar el nombre del telefono: ";
    std::cin >> nuevoContacto.telefono;

    listaContactos[numContactos++] = nuevoContacto;
}

// Función para mostrar los contactos, hace un loop, donde revisa el arreglo listaContactos
// muestra todos los contactos
void mostrarContactos(const Contacto listaContactos[], int numContactos) {
    std::cout << "Lista de contactos:\n";
    for (int i = 0; i < numContactos; ++i) {
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Telegono: " << listaContactos[i].telefono << "\n";
    };
}



// En este caso lo que realiza es loop donde igualmente revisa todos los conactos hasta que coincida
// con el contacto ingresado por el usuario por medio de un for
void buscarContacto(const Contacto listaContactos[], int numContactos) {
    std::string nombreBusqueda;
    std::cout << "Ingrese el nombre buscar: ";
    std::cin >> nombreBusqueda;
    bool encontrado = false;
    for (int i = 0; i < numContactos; i++){
        if(listaContactos[i].nombre == nombreBusqueda){
            std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
            encontrado = true; 
            break; 
        }
    }
    if (!encontrado){
        std::cout << "Contacto no encontrado.\n";
    }
}