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
 * @file Menu.cpp
 * @brief Funciones del menú para la aplicación de validación de correos electrónicos.
 *
 * Este archivo contiene las funciones relacionadas con la interfaz del menú para el usuario.
 * Incluye funciones para mostrar el menú y validar la opción seleccionada por el usuario,
 * asegurándose de que solo se acepten entradas válidas.
 */
#include "Menu.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>


// Menu donde se le da instrucciones al usuario que ingresar
void printMenu() {
    std::cout << "\n=============================================" << std::endl;
    std::cout << "Menú:" << std::endl;
    std::cout << "1 - Validar dirección de correo electrónico" << std::endl;
    std::cout << "2 - Salir" << std::endl;
    std::cout << "=============================================" << std::endl;
    std::cout << "Ingrese su opción: ";
}

// Es una funcion que valida la entrada del usario, principalmente que sea un 1 o 2
int getValidMenuOption() {
    std::string line;
    int option = 0;
    while (true) {
        printMenu();
        std::getline(std::cin, line);
        try {
            option = std::stoi(line);
            if (option == ValidarCorreo || option == Salir) {
                return option;
            } else {
                std::cout << "Opción inválida, por favor intente de nuevo." << std::endl;
            }
        } catch (const std::invalid_argument& ia) {
            std::cout << "Entrada inválida, por favor ingrese un número." << std::endl;
        } catch (const std::out_of_range& oor) {
            std::cout << "Número demasiado grande, por favor intente de nuevo." << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

