#include "Funciones.hpp"
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void imprimir_linea_decorativa() {
    cout << "\n========================================\n";
}

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
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false; 
        }
    }
    return true; 
}

void inicializar_numeros_disponibles(int numeros_disponibles[], int tam) {
    for (int i = 0; i < tam; ++i) {
        numeros_disponibles[i] = i + 1; 
    }
}

int generar_numero_aleatorio_1_a_300() {
    static int numeros_disponibles[300];
    static int tam_disponibles = 300;

    static bool inicializado = false;
    if (!inicializado) {
        srand(static_cast<unsigned int>(time(nullptr)));
        inicializar_numeros_disponibles(numeros_disponibles, 300);
        inicializado = true;
    }

    if (tam_disponibles == 0) {
        cerr << "No hay más números disponibles." << endl;
        return -1;
    }

    int indice = rand() % tam_disponibles; 
    int numero = numeros_disponibles[indice]; 

    numeros_disponibles[indice] = numeros_disponibles[tam_disponibles - 1];
    tam_disponibles--; 

    return numero;
}