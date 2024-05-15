#include <iostream>
#include <vector>
#include "expresion_reg.cpp"

int main() {
    ValidadorEmail validador;
    std::vector<std::string> correos = {
        "example@example.com",    // Válido
        "test.email@domain.co.uk", // Válido
        "usuario@dominio.com",    // Válido
        "bademail@domain..com",   // Inválido: dos puntos seguidos en el dominio
        "incorrect@domain",       // Inválido: no hay extensión
        "noatsign.com",           // Inválido: falta '@'
        "example@.com",           // Inválido: punto al inicio del dominio
        "name@domain.c",          // Inválido: extensión muy corta
        "name@domain.toolongextension", // Inválido: extensión muy larga
        ".name@domain.com",       // Inválido: nombre comienza con punto
        "name@domain-.com",       // Inválido: dominio termina con guion
        "name@domain.com.",       // Inválido: punto al final del correo
        "name@domain.com.co",     // Válido: extensión compuesta
        "user______@example.com", // Válido: guiones bajos consecutivos en el nombre
        "user..1234@domain.com",   // Inválido: dos puntos seguidos en el nombre
        "nam_e@domain.com",       // Válido: guión bajo en el nombre
        "user@do-main.com",       // Válido: guión en el dominio
        "user@domain.co.jp",      // Válido: extensión compuesta
        "user@domain.web",        // Válido: extensión válida
        "user@domain..biz",       // Inválido: dos puntos seguidos en el dominio
        "user@domain.-com",       // Inválido: guion al inicio de la extensión
        "user@domain.com-",       // Inválido: guion al final del dominio
        "us..er@domain.com",      // Inválido: dos puntos seguidos en el nombre
        "user12345@domain.com",   // Válido: números en el nombre
        "user@123domain.com",     // Inválido: números al inicio del dominio
        "-user@domain.com",       // Inválido: nombre empieza con guión
        "user@domain-.co",        // Inválido: dominio termina con guión
        "user@domain.com.a1",     // Inválido: números en la extensión
        "user@domain",            // Inválido: falta la extensión
        "user@do..main.com"       // Inválido: dos puntos seguidos en el dominio
    };

    for (const auto& correo : correos) {
        std::cout << "Validando: " << correo << std::endl;
        try {
            validador.validarCorreo(correo);
            std::cout << "Resultado: Válido" << std::endl;
        } catch (const EmailValidationException& e) {
            std::cerr << "Resultado: Inválido - " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
