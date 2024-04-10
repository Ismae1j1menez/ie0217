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
 * @brief Define funciones útiles para el programa, incluyendo impresión de líneas decorativas, 
 * verificación de números primos y generación de números aleatorios.
 *
 * Este archivo de cabecera declara varias funciones auxiliares que se utilizan en diferentes partes 
 * del programa para realizar tareas como imprimir líneas decorativas, verificar si un número es primo,
 * y generar un número aleatorio dentro de un rango específico.
 */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

/**
 * @brief Imprime una línea decorativa para separar secciones de salida en la consola.
 */
void imprimir_linea_decorativa();

/**
 * @brief Determina si un número dado es primo.
 * @param numero El número a verificar.
 * @return true si el número es primo, false de lo contrario.
 */
bool es_primo(int numero);

/**
 * @brief Genera un número aleatorio entre 1 y 300.
 * @return Un número aleatorio entre 1 y 300, exclusivo de números ya seleccionados.
 */
int generar_numero_aleatorio_1_a_300();
#endif // FUNCIONES_HPP