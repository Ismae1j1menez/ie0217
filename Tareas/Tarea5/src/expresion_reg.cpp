#include <iostream>
#include <regex>
#include <stdexcept>
#include "expresion_reg.hpp"

EmailValidationException::EmailValidationException(const std::string& msg) : runtime_error(msg) {}


void ValidadorEmail::validarCorreo(const std::string& email) {
    // Si no se encuentra el '@', lanzar una excepción
    size_t atPosition = email.find('@');
    if (atPosition == std::string::npos) {
        throw EmailValidationException("El correo debe contener '@'.");
    }
    
    // Dividir la cadena en nombre y resto (dominio + extensión)
    std::string name = email.substr(0, atPosition);
    std::string remainder = email.substr(atPosition + 1);
    
    // Buscar el último punto en el resto (dominio + extensión)
    size_t lastDotPosition = remainder.rfind('.');
    
    // Si no se encuentra el punto, lanzar una excepción
    if (lastDotPosition == std::string::npos) {
        throw EmailValidationException("El correo debe contener un punto en el dominio.");
    }
    
    // Extraer el dominio y la extensión
    std::string domain = remainder.substr(0, lastDotPosition);
    std::string extension;

    // Preguntar al usuario si la extensión es compuesta
    std::cout << "¿La extensión es compuesta? (Ingrese 1 para Sí o 2 para No): ";
    std::string respuesta;
    std::cin >> respuesta;
    
    // Lanzar una excepción si la respuesta no es 1 o 2
    if (respuesta != "1" && respuesta != "2") {
        throw EmailValidationException("Respuesta no válida. Por favor, responda con 1 para Sí o 2 para No.");
    }

    // Si la respuesta es si, buscar el segundo punto desde el final
    if (respuesta == "1") {
        size_t secondLastDotPosition = remainder.rfind('.', lastDotPosition - 1);
        if (secondLastDotPosition != std::string::npos) {
            domain = remainder.substr(0, secondLastDotPosition);
            extension = remainder.substr(secondLastDotPosition + 1);
        }
    } else {
        // Si no, la extensión es desde el último punto
        extension = remainder.substr(lastDotPosition + 1);
    }


    // Imprimir los componentes para verificar
    std::cout << "=============================================" << std::endl;
    std::cout << "Nombre:    " << name << std::endl;
    std::cout << "Dominio:   " << domain << std::endl;
    std::cout << "Extensión: " << extension << std::endl;
    std::cout << "=============================================" << std::endl;

    validarNombre(name);
    validarDominio(domain);
}


// Validar nombre 
void ValidadorEmail::validarNombre(const std::string& name) {
    // Especifica el formato del name
    // No permite 2 caracteres especiales
    // No permite mas de 15 caracteres
    // No empieza o termina con punto, guion o guion bajo
    // Permite mayusculas, minusculas, numeros, puntos, guiones y guiones bajos
    std::string nameFormat = R"(^[^\W_](?!.*[._\-!*?]{2})([a-zA-Z0-9._-]{1,15})[^\W_]$)";
    if (!std::regex_match(name, std::regex(nameFormat))) {
        throw EmailValidationException("Error en el nombre: no cumple con los requisitos.");
    }
}

void ValidadorEmail::validarDominio(const std::string& domain) {
    // Especifica el formato del dominio
    // No permite menos de 3 ni mas de 30 caracteres
    // No empieza ni termina con punto, guion o guion bajo
    // No permite el doble punto
    std::string domainFormat = R"(^[^.-](?!.*[-.]{2})[\w.\w]([a-zA-Z0-9.-]{3,30})+[^.-]$)";
    if (!std::regex_match(domain, std::regex(domainFormat))) {
        throw EmailValidationException("Error en el dominio: no cumple con los requisitos.");
    }
}

void ValidadorEmail::validarExtension(const std::string& extension) {
    // Especifica el formato del extension
    // Tiene de 2 a 6 letras
    // no se permiten numeros expeciales
    // Puedes ser compuesta
    std::string extensionFormat = R"(^(?!.*\.\.)([a-zA-Z]{2,6}(\.[a-zA-Z]{2,6})*)$)";
    if (!std::regex_match(extension, std::regex(extensionFormat))) {
        throw EmailValidationException("Error en la extensión: no cumple con los requisitos.");
    }
}
