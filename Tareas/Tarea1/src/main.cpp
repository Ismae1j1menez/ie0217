//MIT License
//
//Copyright (c) 2024 Ismael Jiménez Carballo
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

/**
 * @file main.cpp
 * @brief Programa principal para el juego del ahorcado.
 * 
 * Este archivo contiene el flujo principal del juego del ahorcado, incluyendo la configuración inicial,
 * la ejecución del juego, y la interacción con el usuario. Se utilizan diversas funciones definidas en
 * otros archivos para manejar la lógica del juego, la manipulación de palabras, y la interacción con el usuario.
 */

// Se usa el UpperCamelCase para nombrar estructuras y enums
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

/**
 * @enum Opciones
 * @brief Enumeración para las opciones del menú principal.
 */
enum Opciones {
    DIFICULTAD = 1,
    INICIAR,
    AGREGAR_PALABRA,
    VER_DICCIONARIO,
    SALIR
};

/**
 * @enum Dificultad
 * @brief Enumeración para los niveles de dificultad del juego.
 */
enum Dificultad {
    FACIL = 1,
    INTERMEDIO, 
    DIFICIL
};

/**
 * @brief Función principal que ejecuta el juego del ahorcado.
 * 
 * Maneja la lógica principal del juego, incluyendo la presentación del menú, la selección de opciones,
 * y el ciclo principal del juego. Permite al usuario elegir la dificultad, iniciar el juego, agregar
 * palabras al diccionario, y ver las palabras disponibles.
 * 
 * @return int El código de salida del programa.
 */
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
            cout << "Dificultad establecida. ¡Prepárate para el reto!\n";
            break;
        case INICIAR:
            Juego = true;
            if (intentos_dificultad != 0){
                // Se asigna a la Estructura las configuraciones inciales del juegos
                palabra_adivinadas[cantidad_adivinadas] = iniciar_juego(diccionario_palabras, num_palabras, intentos_dificultad);
                //cout << "Palabra a adivinar: " << palabra_adivinadas[cantidad_adivinadas].palabra_adivinar << endl; 
                // Bucle incial del juego, se mantiene hasta que se adivine o se acaben los intenos
                while (Juego == true) {
                    verificar_letras(palabra_adivinadas, cantidad_adivinadas);
                    Juego = adivinanza(palabra_adivinadas, &cantidad_adivinadas);
                    imprimir_linea_decorativa();
                }
            } else {
                cout << "No se ha seleccionado ninguna dificultad.";
            }
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