#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"

#define MAX_CONTACTOS 100

// Defines contenidos en un enum
enum Opciones {
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main(){
    // Declaración de listaContactos tipo contacto
    Contacto listaContactos[MAX_CONTACTOS];
    int numContactos = 0;
    int opcion;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "\n1. Agregar Contacto\n";
        std::cout << "\n2. Mostrar Contacto\n";
        std::cout << "\n3. Buscar Contacto\n";
        std::cout << "\n4. Salir\n";
        std::cout << "\nIngrese su opcion: \n";
        std::cin  >> opcion;
        
        // Switch donde se revisa cual función se llama, depende la elección
        switch (opcion)
        {
        case AGREGAR:
            agregarContacto(listaContactos, numContactos);
            break;
        case MOSTRAR:
            mostrarContactos(listaContactos, numContactos);
            break;
        case BUSCAR:
            buscarContacto(listaContactos, numContactos);
            break;
        case SALIR:
            std::cout << "Saliendo del programa...\n";
            break;
        // El default encicla el parograma, revisar
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n";
            break; 
        }

    // Si es diferente de salir entonces mantien el ciclo
    } while (opcion != SALIR);
    {
       
    }
    

    return 0;
}