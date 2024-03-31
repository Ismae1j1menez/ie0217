#include "Funciones.hpp"
#include <string>
#include <random>
using namespace std;

Estructura iniciar_juego(std::string* diccionario_palabras, int num_palabras, int intentos_dificultad){
    std::random_device rd;  // Genera una semilla diferente en cada ejecución
    std::mt19937 gen(rd()); // Inicializar el motor de generación con la semilla anterior
    std::uniform_int_distribution<int> distrib(0, num_palabras - 1); // Es una clase que genera numeros aleatorios en un rango
    std::string palabra_seleccionada = diccionario_palabras[distrib(gen)]; // Selecciona la palabra, gen es la semilla anterior
    cout << "Palabra seleccionada aleatoriamente: " << palabra_seleccionada << std::endl;
    cout << palabra_seleccionada.length() << endl;
    Estructura palabra_a_adiviniar;
    palabra_a_adiviniar.palabra_adivinar = palabra_seleccionada;
    palabra_a_adiviniar.estado_actual = std::string(palabra_seleccionada.length(), '_');
    palabra_a_adiviniar.intentos_maximos = intentos_dificultad;
    cout << "Adivina la palabra: " << palabra_a_adiviniar.estado_actual << endl;
    return palabra_a_adiviniar;
}

void agregar_palabra(std::string* diccionario_palabras, int* num_palabras) {
    if (*num_palabras < 100){
        cout << "Ingrese la palabra que desea agreagar: "; 
        cin >> diccionario_palabras[*num_palabras++]; 
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
    cout << "Intentos: " << palabra_adivinadas[0].intentos_actuales << endl;
}


int adivinanza(Estructura* palabra_adivinadas) {
    int intentos_actuales = palabra_adivinadas[0].intentos_actuales; 
    int intentos = palabra_adivinadas[0].intentos_maximos;
    cout << "Intentos actuales: " << intentos_actuales << endl;
    cout << "Intentos máximos: " << intentos << endl;
        if (intentos == intentos_actuales ){
            return false; 
            cout << "Se acabaron la cantidad de intentos: " << endl; 
        } else {
            return true;
        }
}