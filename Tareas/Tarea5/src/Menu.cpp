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

