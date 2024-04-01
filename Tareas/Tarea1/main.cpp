// Se usa el UpperCamelCase para nombrar estructuras y enum
// Se usa snake_case para nombrar variables, funciones y atributos
// Para los valores del enum se usa la UPPER_CASE
#include <iostream>
#include "Funciones.hpp"
#include "Estructura.hpp"
using namespace std; 
#define MAX_PALABRAS 100

std::string diccionario_palabras[MAX_PALABRAS] = {
    "casa", "bola", "planta", "aventura",
    "biblioteca", "caleidoscopio", "dinosaurio", "elefante",
    "flauta", "galaxia", "horizonte", "imaginacion",
    "jirafa", "kiosco", "laberinto", "misterio",
    "nebulosa", "objeto", "piramide", "quimera",
    "ruinas", "satelite", "tesoro", "universo",
    "volcan", "western", "zodiaco", "acertijo", "biologia",
    "criptografia", "delfin"
};
int num_palabras = 31;

enum Opciones {
    DIFICULTAD = 1,
    INICIAR,
    AGREGAR_PALABRA,
    VER_DICCIONARIO,
    SALIR
};

enum Dificultad {
    FACIL = 1,
    INTERMEDIO, 
    DIFICIL
};

int main() {
    Estructura palabra_adivinadas[MAX_PALABRAS];
    int cantidad_adivinadas = 0;
    int intentos_dificultad;
    int palabrasPorLinea;
    int opcion; 
    int dificultad; 
    bool Juego;

    do {
        imprimir_linea_decorativa();
        cout << "Menu Principal:\n";
        imprimir_linea_decorativa();
        cout << "1. Elegir la dificultad del juego\n";
        cout << "2. Iniciar el juego\n";
        cout << "3. Agregar palabra\n";
        cout << "4. Ver diccionario de palabras\n";
        cout << "5. Salir\n";
        imprimir_linea_decorativa();
        cout << "Ingrese su opcion: ";
        cin  >> opcion;

        switch (opcion)
        {
        case DIFICULTAD:
            imprimir_linea_decorativa();
            cout << "Seleccione la dificultad:\n";
            imprimir_linea_decorativa();
            cout << "1. Facil (7 intentos)\n";
            cout << "2. Intermedio (5 intentos)\n";
            cout << "3. Dificil (3 intentos)\n";
            imprimir_linea_decorativa();
            cout << "Ingrese su opcion: ";
            cin  >> dificultad;
            switch (dificultad)
            {
                case FACIL:
                    intentos_dificultad = 7; 
                break;
                case INTERMEDIO: 
                    intentos_dificultad  = 5; 
                break;
                case DIFICIL:
                    intentos_dificultad = 3;  
                break;
            }
            //cout << "Dificultad antes de ingresar a la estructura: " << palabra_adivinadas[0].intentos_maximos << endl;
            cout << "Dificultad establecida. ¡Prepárate para el reto!\n";
            break;
        case INICIAR:
            Juego = true;
            if (intentos_dificultad != 0){
                //cout << "Dificultad prueba1: " << palabra_adivinadas[0].intentos_maximos << endl;
                //cout << "Cantidad prueba1: " << cantidad_adivinadas << endl;
                //cout << "Intentos prueba1: " << palabra_adivinadas[0].intentos_actuales << endl;
                palabra_adivinadas[cantidad_adivinadas] = iniciar_juego(diccionario_palabras, num_palabras, intentos_dificultad);
                //cout << "Dificultad prueba3: " << palabra_adivinadas[0].intentos_maximos << endl;
                cout << "Palabra a adivinar: " << palabra_adivinadas[cantidad_adivinadas].palabra_adivinar << endl; 
                //cout << "Cantidad prueba2: " << cantidad_adivinadas << endl;
                //cout << "Intentos prueba2: " << palabra_adivinadas[0].intentos_actuales << endl;
                while (Juego == true) {
                    verificar_letras(palabra_adivinadas, cantidad_adivinadas);
                    //cout << "Dificultad prueba4: " << palabra_adivinadas[0].intentos_maximos << endl;
                    //cout << "Cantidad prueba3: " << cantidad_adivinadas << endl;
                    //cout << "Intentos prueba3: " << palabra_adivinadas[0].intentos_actuales << endl;
                    Juego = adivinanza(palabra_adivinadas, &cantidad_adivinadas);
                    //cout << "Dificultad prueba5: " << palabra_adivinadas[0].intentos_maximos << endl;
                    //cout << "Cantidad prueba4: " << cantidad_adivinadas << endl;
                    //cout << "Intentos prueba4: " << palabra_adivinadas[0].intentos_actuales << endl;
                    imprimir_linea_decorativa();
                }
            } else {
                cout << "No se ha seleccionado ninguna dificultad.";
            }
            /*cout << "Actual verificacion: " << palabra_adivinadas[0].estado_actual << endl; 
            cout << "Actual verificacion: " << palabra_adivinadas[1].estado_actual << endl;
            cout << "Actual verificacion: " << palabra_adivinadas[2].estado_actual << endl;
            cout << "Palabra diccionario: " << diccionario_palabras[num_palabras -1] << endl; 
            cout << "Palabra diccionario: " << diccionario_palabras[31] << endl; 
            cout << "Palabra a adivinar 1: " << palabra_adivinadas[0].palabra_adivinar << endl;
            cout << "Palabra a adivinar 2: " << palabra_adivinadas[1].palabra_adivinar << endl;
            cout << "Palabra a adivinar 3: " << palabra_adivinadas[2].palabra_adivinar << endl;
            cout << "Palabra a adivinar 4: " << palabra_adivinadas[cantidad_adivinadas].palabra_adivinar << endl; */
            //cantidad_adivinadas++;
            //cout << cantidad_adivinadas;
            break;
        case AGREGAR_PALABRA:
            agregar_palabra(diccionario_palabras, &num_palabras);
            break; 
        case VER_DICCIONARIO: 
            palabrasPorLinea = 0; 
            cout << "A continuación se imprimirá el diccionario: " << endl; 
            for(int i = 0; i < num_palabras; i++) {
                cout << diccionario_palabras[i];
                if (i < num_palabras - 1) { 
                    cout << ", ";
                }
                palabrasPorLinea++;
                if (palabrasPorLinea >= 5) { 
                    cout << endl; 
                    palabrasPorLinea = 0; 
                }
            }
            cout << endl; 
            break;
        case SALIR:
            imprimir_linea_decorativa();
            cout << "Gracias por jugar. ¡Hasta la próxima!\n";
            imprimir_linea_decorativa();
            break;
        default:
            imprimir_linea_decorativa();
            cout << "Opcion no valida. Intente de nuevo...\n";
            imprimir_linea_decorativa();
            break; 
        }
    } while (opcion != SALIR); 
    return 0;
}