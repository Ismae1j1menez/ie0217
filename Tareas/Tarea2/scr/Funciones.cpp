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
 * @file Funciones.cpp
 * @brief Implementación de funciones definidas en Funciones.hpp.
 *
 * Este archivo implementa las funciones declaradas en Funciones.hpp, proporcionando
 * funcionalidades como impresión de líneas decorativas, verificación de primos y
 * generación de números aleatorios dentro de un rango específico.
 */

#include "Funciones.hpp"
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void imprimir_linea_decorativa() {
    cout << "\n========================================\n";
}

// Revisa si el argumento recibido es primo o no, se implementa con if y for
bool es_primo(int numero) {
    if (numero <= 1) {
        return false; 
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false; 
    }
    for (int i = 5; i * i <= numero; i += 6) {
        // Revisa si el reciduo es 0
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false; 
        }
    }
    return true; 
}

// Inicializa la lista con los numeros disponibles, es una lista con los números del
// tamaño = tam
void inicializar_numeros_disponibles(int numeros_disponibles[], int tam) {
    for (int i = 0; i < tam; ++i) {
        numeros_disponibles[i] = i + 1; 
    }
}

// Función para generar un identificador aleatorio unico
int generar_numero_aleatorio_1_a_300() {
    static int numeros_disponibles[300];
    static int tam_disponibles = 300;

    // Cuando no se ha inicializado es false
    static bool inicializado = false;
    if (!inicializado) {
        srand(static_cast<unsigned int>(time(nullptr)));
        inicializar_numeros_disponibles(numeros_disponibles, 300);
        // A partir de aqui no vuelve a entrar, ya queda incializado
        inicializado = true;
    }

    if (tam_disponibles == 0) {
        cerr << "No hay más números disponibles." << endl;
        return -1;
    }

    // Se selecciona un numero random
    int indice = rand() % tam_disponibles; 
    // El numero es el numero en el indice de numeros_disponibles (array)
    int numero = numeros_disponibles[indice]; 

    // Se envia el numero al final de la lista y se reduce para que no se pueda volver a ingresar
    numeros_disponibles[indice] = numeros_disponibles[tam_disponibles - 1];
    tam_disponibles--; 

    return numero;
}