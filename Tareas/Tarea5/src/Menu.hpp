#ifndef MENU_HPP
#define MENU_HPP

enum MenuOption {
    ValidarCorreo = 1,
    Salir = 2
};

void printMenu();

int getValidMenuOption();

#endif // MENU_HPP
