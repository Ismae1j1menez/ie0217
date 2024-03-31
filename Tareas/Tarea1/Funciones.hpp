#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include "Estructura.hpp"

// Prototipos de la funciones que luego son definifas en Funciones.cpp
Estructura iniciar_juego(std::string* diccionario_palabras, int num_palabras, int intentos_dificultad); 
void agregar_palabra(std::string* diccionario_palabras, int* num_palabras);
void verificar_letras(Estructura* palabra_adivinadas, int cantidad_adivinadas);
int adivinanza(Estructura* palabra_adivinadas);


#endif