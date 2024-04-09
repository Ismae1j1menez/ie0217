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
            miPlaneta.imprimir_info_detallada();
            break;
        case COMPARE_CONTRIES: {
            std::string nombrePais1, nombrePais2;
            cout << "Ingrese el nombre del primer país para comparar: ";
            cin.ignore();
            getline(cin, nombrePais1);
            cout << "Ingrese el nombre del segundo país para comparar: ";
            getline(cin, nombrePais2);
            Pais* pais1 = miPlaneta.buscarPaisPorNombre(nombrePais1);
            Pais* pais2 = miPlaneta.buscarPaisPorNombre(nombrePais2);

            if (!pais1 || !pais2) {
                cout << "Uno o ambos países no se pudieron encontrar.\n";
            } else {
                if (*pais1 == *pais2) {
                    cout << "Los países son 'iguales' según el criterio de comparación de números primos.\n";
                } else {
                    cout << "Los países no son 'iguales'.\n";
                }
            }
            }
            break; 
        case ADD_CONTRIE: {
            int tipoPais;
            unsigned long identificador;
            unsigned int poblacion;
            bool tieneTecnologia5G, tieneCentroInvestigacion;
            
            imprimir_linea_decorativa();
            cout << "Ingrese el nombre del nuevo país: ";
            cin.ignore();
            getline(cin, nombrePais);
            
            imprimir_linea_decorativa();
            identificador = generar_numero_aleatorio_1_a_300();
            
            imprimir_linea_decorativa();
            cout << "Ingrese la población del nuevo país: ";
            cin >> poblacion;
            
            imprimir_linea_decorativa();
            if (es_primo(identificador) == 1) {
                tipoPais = 1;
            } else {
                tipoPais = 2; 
            }
            
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
                    break;
                default:
                    imprimir_linea_decorativa();
                    cout << "Opción no válida. Intente de nuevo...\n";
                    imprimir_linea_decorativa();
                    continue;
            }

            if (selec_continent != EXIT_CONTINENT && !nombreContinente.empty()) {
                if (tipoPais == 1) {
                    cout << "Tiene tecnología 5G? (1 para sí, 0 para no): ";
                    cin >> tieneTecnologia5G;
                    
                    cout << "Tiene centro de investigación? (1 para sí, 0 para no): ";
                    cin >> tieneCentroInvestigacion;
                    
                    PaisPrimerMundo nuevoPaisPrimerMundo(nombrePais, identificador, poblacion, tieneTecnologia5G, tieneCentroInvestigacion);
                    miPlaneta.agregarPaisPrimerMundoAContinente(nuevoPaisPrimerMundo, nombreContinente);
                } else if (tipoPais == 2) {
                    PaisEnDesarrollo nuevoPaisEnDesarrollo(nombrePais, identificador, poblacion);
                    miPlaneta.agregarPaisEnDesarrolloAContinente(nuevoPaisEnDesarrollo, nombreContinente);
                }
            }
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