#include <iostream>
#include <string>
#include <stdexcept>
#include "expresion_reg.hpp"
#include "Menu.hpp"

int main() {
    ValidadorEmail validador;
    int option = 0;

    while (true) {
        option = getValidMenuOption();

        if (option == Salir) {
            std::cout << "Saliendo del programa...\n";
            break;
        } else if (option == ValidarCorreo) {
            std::string email;
            std::cout << "Ingrese la dirección de correo electrónico a validar: ";
            std::getline(std::cin, email);

            try {
                validador.validarCorreo(email);
                std::cout << "La dirección de correo electrónico es válida.\n";
            } catch (const EmailValidationException& e) {
                std::cout << "Validación fallida: " << e.what() << "\n";
            }
        }
    }

    return 0;
}
