#include "Menu.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

void printMenu() {
    std::cout << "\nMenú:\n";
    std::cout << "1 - Validar dirección de correo electrónico\n";
    std::cout << "2 - Salir\n";
    std::cout << "Ingrese su opción: ";
}

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
                std::cout << "Opción inválida, por favor intente de nuevo.\n";
            }
        } catch (const std::invalid_argument& ia) {
            std::cout << "Entrada inválida, por favor ingrese un número.\n";
        } catch (const std::out_of_range& oor) {
            std::cout << "Número demasiado grande, por favor intente de nuevo.\n";
        }
    }
}
