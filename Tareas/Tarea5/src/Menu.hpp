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
 * @file Menu.hpp
 * @brief Definiciones para el menú de la aplicación de validación de correos electrónicos.
 *
 * Este archivo de cabecera contiene las definiciones relacionadas con el menú de la aplicación.
 * Define una enumeración para las opciones del menú y declara funciones para mostrar el menú y
 * obtener una opción válida del mismo.
 * 
 * @version 1.0
 * @date 2024
 */
#ifndef MENU_HPP
#define MENU_HPP

/**
 * @enum MenuOption
 * @brief Opciones disponibles en el menú de la aplicación.
 *
 * Enumeración que define las opciones que el usuario puede seleccionar en el menú principal.
 */
// Enum para las opciones
enum MenuOption {
    ValidarCorreo = 1,
    Salir = 2
};

/**
 * @brief Muestra el menú de opciones en la consola.
 *
 * Imprime las opciones del menú en la consola, permitiendo al usuario elegir entre validar
 * una dirección de correo electrónico o salir del programa.
 */
void printMenu();


/**
 * @brief Obtiene una opción válida del menú.
 *
 * Lee la entrada del usuario desde la consola y verifica que sea una opción válida según
 * la enumeración MenuOption. Si la entrada no es válida, solicita al usuario que ingrese
 * una opción nuevamente.
 * 
 * @return int La opción válida seleccionada por el usuario.
 */
int getValidMenuOption();
#endif // MENU_HPP
