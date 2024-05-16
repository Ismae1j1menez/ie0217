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
 * @brief Aplicación principal para la validación de correos electrónicos.
 *
 * Este archivo contiene la función principal que ejecuta la aplicación para validar
 * direcciones de correo electrónico. Utiliza un menú para permitir al usuario
 * seleccionar la validación de un correo electrónico y manejar las excepciones
 * asociadas a errores de validación.
 */
#include <iostream>
#include <string>
#include <stdexcept>
#include "expresion_reg.hpp"
#include "Menu.hpp"

int main() {
    ValidadorEmail validador;
    int option = 0;

    // Loop para el menu
    while (true) {
        // Revisa que la opcion sea valida
        option = getValidMenuOption();

        if (option == Salir) {
            std::cout << "=============================================" << std::endl;
            std::cout << "Saliendo del programa..." << std::endl;
            std::cout << "=============================================" << std::endl;
            break;
        } else if (option == ValidarCorreo) {
            std::string email;
            std::cout << "=============================================" << std::endl;
            std::cout << "Ingrese la dirección de correo electrónico a validar: ";
            std::getline(std::cin, email);

            try {
                validador.validarCorreo(email);
                std::cout << "La dirección de correo electrónico es válida." << std::endl;
            } catch (const EmailValidationException& e) {
                std::cout << "Validación fallida: " << e.what() << std::endl;
            }
            std::cout << "=============================================" << std::endl;
        }
    }

    return 0;
}

