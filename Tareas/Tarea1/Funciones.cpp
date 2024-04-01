#include "Funciones.hpp"
#include <string>
#include <random>
using namespace std;

Estructura iniciar_juego(std::string* diccionario_palabras, int num_palabras, int intentos_dificultad){
    std::random_device rd;  // Genera una semilla diferente en cada ejecución
    std::mt19937 gen(rd()); // Inicializar el motor de generación con la semilla anterior
    std::uniform_int_distribution<int> distrib(0, num_palabras - 1); // Es una clase que genera numeros aleatorios en un rango
    std::string palabra_seleccionada = diccionario_palabras[distrib(gen)]; // Selecciona la palabra, gen es la semilla anterior
    //cout << "Palabra seleccionada aleatoriamente: " << palabra_seleccionada << std::endl;
    //cout << palabra_seleccionada.length() << endl;
    Estructura palabra_a_adiviniar;
    palabra_a_adiviniar.palabra_adivinar = palabra_seleccionada;
    palabra_a_adiviniar.estado_actual = std::string(palabra_seleccionada.length(), '_');
    palabra_a_adiviniar.intentos_maximos = intentos_dificultad;
    palabra_a_adiviniar.intentos_actuales = 0; 
    

    //Impresiones para el juego
    //cout << "\n\n\n\n";
    cout << "Bienvenido al juego del ahorcado!" << std::endl;
    cout << "Tienes " << intentos_dificultad << " intentos para adivinar la palabra." << std::endl;
    cout << "Palabra a adivinar: " << palabra_a_adiviniar.estado_actual << endl;
    return palabra_a_adiviniar;
}

void agregar_palabra(std::string* diccionario_palabras, int* num_palabras) {
    if (*num_palabras < 100){
        cout << "Ingrese la palabra que desea agreagar: "; 
        cin >> diccionario_palabras[(*num_palabras)++]; 
        cout << "Palabra agregada correctamente.";
    } else {
        cout << "No hay espacio para más palabras." << endl; 
    }
}

void verificar_letras(Estructura* palabra_adivinadas, int cantidad_adivinadas) {
    char letra_ingresada;
    std::string palabra_verficar = palabra_adivinadas[cantidad_adivinadas].palabra_adivinar; 
    cout << "Ingrese la letra a verificar: ";
    cin >> letra_ingresada;
    bool letra_encontrada = false; 

    for (int i = 0; i < palabra_verficar.length(); i++){
        if (palabra_verficar[i] == letra_ingresada) {
            palabra_adivinadas[cantidad_adivinadas].estado_actual[i] = letra_ingresada;
            letra_encontrada = true;
        }
    }

    if (letra_encontrada) {
        cout << "¡Bien! La letra '" << letra_ingresada << "' está en la palabra." << endl;
    } else {
        cout << "Lo siento, la letra '" << letra_ingresada << "' no está en la palabra." << endl;
        palabra_adivinadas[0].intentos_actuales += 1; 
    }
    cout << "Progreso: " << palabra_adivinadas[cantidad_adivinadas].estado_actual << endl;
}


int adivinanza(Estructura* palabra_adivinadas, int* cantidad_adivinadas) {
    int intentos_actuales = palabra_adivinadas[0].intentos_actuales; 
    int intentos = palabra_adivinadas[0].intentos_maximos;
    std::string estado_actual_revision = palabra_adivinadas[*cantidad_adivinadas].estado_actual;
    std::string palabra_adivinar_revision = palabra_adivinadas[*cantidad_adivinadas].palabra_adivinar;

    cout << "Intentos fallidos: " << intentos_actuales << endl;
    cout << "Intentos máximos: " << intentos << endl;
        if (intentos == intentos_actuales ){
            cout << "Palabras adivinadas: " << *cantidad_adivinadas << endl; 
            cout << "Se acabaron la cantidad de intentos. Lo siento, has perdido.\n";
            *cantidad_adivinadas = 0;
            return false; 
        } else if (estado_actual_revision == palabra_adivinar_revision) {
            cout << "¡Felicidades! Adivinaste la palabra: " << palabra_adivinar_revision << endl; 
            *cantidad_adivinadas += 1; 
            cout << "Palabras adivinadas: " << *cantidad_adivinadas << endl; 
            return false;
        } 

        return true;
}

void imprimir_linea_decorativa() {
    cout << "\n========================================\n";
}