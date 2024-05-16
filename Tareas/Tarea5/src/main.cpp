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

