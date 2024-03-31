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
    "biblioteca", "caleidoscopio", "dinosaurio", "ecuación", 
    "faraón", "galaxia", "horizonte", "ilustración", 
    "jirafa", "kilómetro", "laberinto", "misterio", 
    "nebulosa", "órbita", "pirámide", "química", 
    "ruinas", "símbolo", "tesoro", "universo", 
    "volcán", "wéstern", "zodíaco", "acertijo", "biología",
    "criptografía", "delfín"
};
int num_palabras = 31;

enum Opciones {
    DIFICULTAD = 1,
    INICIAR,
    AGREGAR_PALABRA,
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
    int opcion; 
    int dificultad; 
    bool Juego = true;

    do {
        cout << "\nMenu:\n";
        cout << "\n1. Elegir la dificultad del juego\n";
        cout << "\n2. Iniciar el juego\n";
        cout << "\n3. Agregar palabra\n";
        cout << "\n4. Salir\n";
        cout << "\nIngrese su opcion: \n";
        cin  >> opcion;

        switch (opcion)
        {
        case DIFICULTAD:
            cout << "\nSeleccione la dificultad:\n";
            cout << "\n1. Facil\n";
            cout << "\n2. Intermedio\n";
            cout << "\n3. Dificil\n";
            cout << "\nIngrese su opcion: \n";
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
            cout << "Dificultad antes de ingresar a la estructura: " << palabra_adivinadas[0].intentos_maximos << endl;
            break;
        case INICIAR:
            if (intentos_dificultad != 0){
                cout << "Dificultad prueba1: " << palabra_adivinadas[0].intentos_maximos << endl;
                palabra_adivinadas[cantidad_adivinadas] = iniciar_juego(diccionario_palabras, num_palabras, intentos_dificultad);
                cout << "Dificultad prueba3: " << palabra_adivinadas[0].intentos_maximos << endl;
                while (Juego == true) {
                    verificar_letras(palabra_adivinadas, cantidad_adivinadas);
                    cout << "Dificultad prueba4: " << palabra_adivinadas[0].intentos_maximos << endl;
                    Juego = adivinanza(palabra_adivinadas);
                    cout << "Dificultad prueba5: " << palabra_adivinadas[0].intentos_maximos << endl;
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
            cantidad_adivinadas++;
            //cout << cantidad_adivinadas;
            break;
        case AGREGAR_PALABRA:
            agregar_palabra(diccionario_palabras, &num_palabras);
            break; 
        case SALIR:
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo...\n";
            break; 
        }
    } while (opcion != SALIR); 
    return 0;
}