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
 * @file Funciones.hpp
 * @brief Archivo de cabecera que declara las funciones utilizadas en el juego del ahorcado.
 *
 * Este archivo contiene las declaraciones de las funciones para iniciar un juego nuevo,
 * agregar palabras al diccionario, verificar letras adivinadas, y determinar el resultado
 * del juego, así como una función auxiliar para imprimir una línea decorativa.
 */


#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include "Estructura.hpp"

/**
 * @brief Inicia una nueva partida del juego del ahorcado.
 * 
 * Esta función selecciona una palabra aleatoria del diccionario proporcionado y
 * establece el estado inicial del juego basado en la dificultad seleccionada.
 * 
 * @param diccionario_palabras Un puntero al arreglo de palabras disponibles para el juego.
 * @param num_palabras La cantidad de palabras en el diccionario.
 * @param intentos_dificultad El número de intentos permitidos, determinado por la dificultad.
 * @return Estructura La configuración inicial del juego, incluyendo la palabra a adivinar.
 */
// Prototipos de la funciones que luego son definidas en Funciones.cpp
Estructura iniciar_juego(std::string* diccionario_palabras, int num_palabras, int intentos_dificultad); 

/**
 * @brief Agrega una palabra nueva al diccionario de palabras del juego.
 * 
 * @param diccionario_palabras Un puntero al arreglo que contiene el diccionario de palabras.
 * @param num_palabras Un puntero al contador del número total de palabras en el diccionario.
 */
void agregar_palabra(std::string* diccionario_palabras, int* num_palabras);

/**
 * @brief Verifica si la letra ingresada por el usuario está presente en la palabra a adivinar.
 * 
 * @param palabra_adivinadas Un puntero al arreglo de estructuras que contienen el estado del juego.
 * @param cantidad_adivinadas El índice de la palabra actualmente jugada en el arreglo de estructuras.
 */
void verificar_letras(Estructura* palabra_adivinadas, int cantidad_adivinadas);

/**
 * @brief Determina el estado del juego, revisando si el jugador ha ganado, perdido o puede seguir jugando.
 * 
 * @param palabra_adivinadas Un puntero al arreglo de estructuras del juego.
 * @param cantidad_adivinadas Un puntero al número de palabras correctamente adivinadas hasta el momento.
 * @return int Retorna un entero que indica si el juego debe continuar (1) o si ha terminado (0).
 */
int adivinanza(Estructura* palabra_adivinadas, int* cantidad_adivinadas);

/**
 * @brief Imprime una línea decorativa en la consola.
 * 
 * Esta función se utiliza para separar visualmente distintas secciones de la interfaz del juego,
 * mejorando la estética y la legibilidad de la salida en consola.
 */
void imprimir_linea_decorativa();


#endif