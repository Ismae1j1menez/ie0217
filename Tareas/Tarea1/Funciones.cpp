#include "Funciones.hpp"
#include <string>
#include <random>
using namespace std;

Estructura iniciar_juego(){
    std::random_device rd;  // Genera una semilla diferente en cada ejecución
    std::mt19937 gen(rd()); // Inicializar el motor de generación con la semilla anterior
    std::uniform_int_distribution<int> distrib(0, num_palabras - 1); // Es una clase que genera numeros aleatorios en un rango
    std::string palabra_seleccionada = diccionario_palabras[distrib(gen)]; // Selecciona la palabra, gen es la semilla anterior
    cout << "Palabra seleccionada: " << palabra_seleccionada << " Indice del diccionario: " << distrib(gen) << std::endl;
    cout << palabra_seleccionada.length() << endl;
    Estructura palabra_a_adiviniar;
    palabra_a_adiviniar.palabra_adivinar = palabra_seleccionada;
    for (int i = 0; i < palabra_seleccionada.length(); i++){
        cout << "_ "; 
    }
    cout << endl; 
    return palabra_a_adiviniar;
}

void agregar_palabra() {
    if (num_palabras < 100){
        cout << "Ingrese la palabra que desea agreagar: "; 
        cin >> diccionario_palabras[num_palabras++]; 
        cout << "Palabra agregada correctamente.";
    } else {
        cout << "No hay espacio para más palabras." << endl; 
    }
}

void verificar_letras() {
    std::string palabra_verficar = "casa"; 
    char letra_ingresada;
    cout << "Ingrese la letra a verificar: ";
    cin >> letra_ingresada;
    for (int i = 0; i < palabra_verficar.length(); i++){
        if (palabra_verficar[i] == letra_ingresada) {
            cout << letra_ingresada << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl; 
    cout << "No se encontro ninguna letra que coincida con la letra ingresada";
}

int adivinanza() {
    int ret_verificar = 1; 
    int intentos = 3; 
    if (intentos == 3 || ret_verificar == 1){
        return 1; 
    } else {
        return 0;
    }
}