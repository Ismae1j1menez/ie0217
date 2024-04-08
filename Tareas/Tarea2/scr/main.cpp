// Se usa el UpperCamelCase para nombrar estructuras, enums y clases
// Se usa snake_case para nombrar variables, funciones y atributos
// Para los valores del enum se usa la UPPER_CASE
#include <iostream>
#include "Funciones.hpp"
#include "Pais.hpp"
#include "Planeta.hpp"
#include "Paisendesarrollo.hpp"
#include "Paisprimermundo.hpp"
#include "Continentes.hpp"

using namespace std; 

enum Opciones {
    PRINT_INFO = 1,
    COMPARE_CONTRIES,
    ADD_CONTRIE,
    DELETE_CONTRIE,
    EXIT
};

enum SelecContinente {
    AMERICA = 1,
    EUROPA, 
    OCEANIA, 
    ASIA, 
    AFRICA,
    EXIT_CONTINENT
};

int main() {
    int opcion; 
    int selec_continent;
    Planeta miPlaneta;
    string nombrePais;
    string nombreContinente;

    do {
        imprimir_linea_decorativa();
        cout << "Menu Principal:\n";
        imprimir_linea_decorativa();
        cout << "1. Imprimir la información de todos los países.\n";
        cout << "2. Comparar países.\n";
        cout << "3. Agregar un nuevo país.\n";
        cout << "4. Eliminar un país.\n";
        cout << "5. Salir.\n";
        imprimir_linea_decorativa();
        cout << "Ingrese su opcion: ";
        cin  >> opcion;

        switch (opcion)
        {
        case PRINT_INFO:
            miPlaneta.imprimir_info();
            break;
        case COMPARE_CONTRIES:
            /* code */
            break;
        case ADD_CONTRIE: {
            imprimir_linea_decorativa();
            cout << "Ingrese el nombre del nuevo país: ";
            cin >> nombrePais;
            Pais nuevoPais(nombrePais);  
            

            do {
                imprimir_linea_decorativa();
                cout << "Seleccione el continente al que pertenece tu país:\n";
                imprimir_linea_decorativa();
                cout << "1. América.\n";
                cout << "2. Europa.\n";
                cout << "3. Oceanía.\n";
                cout << "4. Asia.\n";
                cout << "5. África.\n";
                cout << "6. Salir.\n";
                imprimir_linea_decorativa();
                cout << "Ingrese su opción: ";
                cin >> selec_continent;

                switch (selec_continent) {
                case AMERICA:
                    nombreContinente = "América";
                    break;
                case EUROPA:
                    nombreContinente = "Europa";
                    break;
                case OCEANIA:
                    nombreContinente = "Oceanía";
                    break;
                case ASIA:
                    nombreContinente = "Asia";
                    break;
                case AFRICA:
                    nombreContinente = "África";
                    break;
                case EXIT_CONTINENT:
                    continue;  // Sale del bucle interno directamente
                default:
                    imprimir_linea_decorativa();
                    cout << "Opción no válida. Intente de nuevo...\n";
                    imprimir_linea_decorativa();
                    continue;
                }
                if (!nombreContinente.empty()) {
                    miPlaneta.agregarPaisAContinente(nuevoPais, nombreContinente);
                    break;  // Sale del bucle después de agregar el país
                }
            } while (true);
            break;
        }
        case DELETE_CONTRIE:
            do {
                imprimir_linea_decorativa();
                cout << "Seleccione el continente al que pertenece tu país:\n";
                imprimir_linea_decorativa();
                cout << "1. América.\n";
                cout << "2. Europa.\n";
                cout << "3. Africa.\n";
                cout << "4. Oceanía.\n";
                cout << "5. Asia.\n";
                imprimir_linea_decorativa();
                cout << "Ingrese su opcion: ";
                cin  >> selec_continent;

                switch (selec_continent)
                {
                case AMERICA:
                    /* code */
                    break;
                case EUROPA:
                    /* code */
                    break;
                case OCEANIA:
                    /* code */
                    break;
                case ASIA:
                    /* code */
                    break;
                case AFRICA:
                    /* code */
                    break;
                default:
                imprimir_linea_decorativa();
                cout << "Opcion no valida. Intente de nuevo...\n";
                imprimir_linea_decorativa();
                break; 
                }
            } while (selec_continent != EXIT_CONTINENT);
            break;
        case EXIT:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            imprimir_linea_decorativa();
            cout << "Opcion no valida. Intente de nuevo...\n";
            imprimir_linea_decorativa();
            break; 
        }
    } while (opcion != EXIT);
    return 0; 
}