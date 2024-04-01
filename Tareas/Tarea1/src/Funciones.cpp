/**
 * @file Funciones.hpp
 * @brief Este archivo contiene las funciones utilizadas para el juego del ahorcado.
 */

#include "Funciones.hpp"
#include <string>
#include <random>
using namespace std;

/**
 * @brief Inicia una nueva sesión del juego del ahorcado seleccionando una palabra al azar del diccionario.
 * 
 * @param diccionario_palabras Un puntero al arreglo de palabras disponibles para jugar.
 * @param num_palabras El número de palabras en el diccionario.
 * @param intentos_dificultad El número de intentos permitidos para adivinar la palabra.
 * @return Estructura Una instancia de la estructura Estructura con la configuración inicial del juego.
 */
Estructura iniciar_juego(std::string* diccionario_palabras, int num_palabras, int intentos_dificultad){
    std::random_device rd;  // Genera una semilla diferente en cada ejecución
    std::mt19937 gen(rd()); // Inicializar el motor de generación con la semilla anterior
    std::uniform_int_distribution<int> distrib(0, num_palabras - 1); // Es una clase que genera numeros aleatorios en un rango
    std::string palabra_seleccionada = diccionario_palabras[distrib(gen)]; // Selecciona la palabra, gen es la semilla anterior
    // Se genera variable tipo estructura, con el objetivo de que cuando se llame dicha función se se le asigne los 
    // valores requeridos en la estructura original, es decir la configuración inicial
    Estructura palabra_a_adiviniar;
    palabra_a_adiviniar.palabra_adivinar = palabra_seleccionada;
    palabra_a_adiviniar.estado_actual = std::string(palabra_seleccionada.length(), '_'); // Inicializa el estado actual con "_"
    palabra_a_adiviniar.intentos_maximos = intentos_dificultad; // Se asigna los intentos máximos a la estructura 
    palabra_a_adiviniar.intentos_actuales = 0; // Cada vez que se inicia el juego se reinicia los intentos
    

    //Impresiones para el juego
    cout << "Bienvenido al juego del ahorcado!" << std::endl;
    cout << "Tienes " << intentos_dificultad << " intentos para adivinar la palabra." << std::endl;
    cout << "Palabra a adivinar: " << palabra_a_adiviniar.estado_actual << endl;
    return palabra_a_adiviniar;
}

/**
 * @brief Agrega una nueva palabra al diccionario de palabras del juego.
 * 
 * Esta función permite al usuario agregar una nueva palabra al diccionario, siempre y cuando haya espacio disponible.
 * 
 * @param diccionario_palabras Un puntero al arreglo de palabras del juego.
 * @param num_palabras Un puntero al número actual de palabras en el diccionario. Este valor se incrementa si se agrega una palabra.
 */
void agregar_palabra(std::string* diccionario_palabras, int* num_palabras) {
    if (*num_palabras < 100){
        cout << "Ingrese la palabra que desea agreagar: "; 
        cin >> diccionario_palabras[(*num_palabras)++]; 
        cout << "Palabra agregada correctamente.";
    } else {
        cout << "No hay espacio para más palabras." << endl; 
    }
}

/**
 * @brief Verifica si la letra ingresada por el usuario está en la palabra a adivinar y actualiza el estado del juego.
 * 
 * @param palabra_adivinadas Un puntero a la estructura del juego actual.
 * @param cantidad_adivinadas El índice de la palabra actual en el juego.
 */
void verificar_letras(Estructura* palabra_adivinadas, int cantidad_adivinadas) {
    char letra_ingresada;
    // Acceder a un indice del arreglo es desrefernciar, por lo que se puede acceder con "." al miembro
    std::string palabra_verficar = palabra_adivinadas[cantidad_adivinadas].palabra_adivinar; 
    cout << "Ingrese la letra a verificar: ";
    cin >> letra_ingresada;
    bool letra_encontrada = false; 

    // Itera sobre la palabra a adivinar para verificar si la alguna letra coincide
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
        // Si no se encuentra alguna letra que coincida entonces se aumenatan los intentos (fallos)
        palabra_adivinadas[0].intentos_actuales += 1; 
    }
    cout << "Progreso: " << palabra_adivinadas[cantidad_adivinadas].estado_actual << endl;
}

/**
 * @brief Evalúa si el jugador ha adivinado la palabra o si se han agotado los intentos.
 * 
 * @param palabra_adivinadas Un puntero a la estructura del juego.
 * @param cantidad_adivinadas Un puntero al contador de palabras adivinadas.
 * @return int Retorna falso (0) si el juego ha terminado (por victoria o derrota) o verdadero (1) si el juego debe continuar.
 */
int adivinanza(Estructura* palabra_adivinadas, int* cantidad_adivinadas) {
    // Solo se trabaja con el índice 0, es decir se sobrescribe el índice 0 en la estructura
    int intentos_actuales = palabra_adivinadas[0].intentos_actuales; 
    int intentos = palabra_adivinadas[0].intentos_maximos;
    std::string estado_actual_revision = palabra_adivinadas[*cantidad_adivinadas].estado_actual;
    std::string palabra_adivinar_revision = palabra_adivinadas[*cantidad_adivinadas].palabra_adivinar;

    std::cout << "Intentos fallidos: " << intentos_actuales << std::endl;
    std::cout << "Intentos máximos: " << intentos << std::endl;
    // Revisa si los fallos son iguales a los intentos máximos
    if (intentos == intentos_actuales) {
        std::string intento_palabra;
        std::cout << "Última oportunidad, ingresa la palabra completa: ";
        std::cin >> intento_palabra;
        // Revisa si acertó en la última oportunidad, se ingresa la palabra completa
        if (intento_palabra == palabra_adivinar_revision) {
            std::cout << "¡Felicidades! Adivinaste la palabra: " << palabra_adivinar_revision << std::endl; 
            *cantidad_adivinadas += 1; 
            std::cout << "Palabras adivinadas: " << *cantidad_adivinadas << std::endl;
            // Se reinicia los intentos para la siguiente palabra
            palabra_adivinadas[0].intentos_actuales = 0; 
            return false; 
        } else {
            std::cout << "Palabras adivinadas: " << *cantidad_adivinadas << std::endl; 
            std::cout << "Incorrecto. Game Over.\n";
            *cantidad_adivinadas = 0; 
            // Se reinicia los intentos para la siguiente palabra
            palabra_adivinadas[0].intentos_actuales = 0;
            return false; 
        }
    // Se revisa si el estado actual de la estructura es igual a la palabra adivinada
    // en ese caso se aumentan las palabras adivinadas
    } else if (estado_actual_revision == palabra_adivinar_revision) {
        std::cout << "¡Felicidades! Adivinaste la palabra: " << palabra_adivinar_revision << std::endl; 
        *cantidad_adivinadas += 1; 
        std::cout << "Palabras adivinadas: " << *cantidad_adivinadas << std::endl;
        // Se reinicia los intentos para la siguiente palabra
        palabra_adivinadas[0].intentos_actuales = 0;
        return false; 
    }
        return true; 
}

/**
 * @brief Imprime una línea decorativa en la consola.
 * 
 * Esta función se utiliza para mejorar la legibilidad de la salida en la consola separando diferentes secciones del juego.
 */
void imprimir_linea_decorativa() {
    cout << "\n========================================\n";
}