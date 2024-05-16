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
//SOFTWARE.#include <iostream>

/**
 * @file ValidadorEmail.hpp
 * @brief Validador de direcciones de correo electrónico.
 *
 * Este archivo contiene las declaraciones de clases y métodos utilizados para validar
 * direcciones de correo electrónico. Se incluyen funciones para validar diferentes
 * componentes de una dirección de correo, como el nombre, el dominio y la extensión.
 */
#include <regex>
#include <stdexcept>
#include "expresion_reg.hpp"
#include <limits>

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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
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
    validarExtension(extension);
}


// Validar nombre 
void ValidadorEmail::validarNombre(const std::string& name) {
    // Especifica el formato del name
    // No permite 2 caracteres especiales
    // No permite mas de 15 caracteres
    // No empieza o termina con punto, guion o guion bajo
    // Permite mayusculas, minusculas, numeros, puntos, guiones y guiones bajos
    std::string nameFormat = R"(^[^\W_](?!.*[._\-]{2})([a-zA-Z0-9._-]+)[^\W_]$)";
    // Verifica si el nombre cumple con el regex general
    if (!std::regex_match(name, std::regex(nameFormat))) {
        // Verifica si el nombre comienza o termina con punto, guion o guion bajo
        if (name.front() == '.' || name.front() == '-' || name.front() == '_' ||
            name.back() == '.' || name.back() == '-' || name.back() == '_') {
            throw EmailValidationException("Error en el nombre: no debe comenzar ni terminar con punto, guión o guión bajo.");
        }

        // Verifica si el nombre contiene dos caracteres especiales consecutivos
        if (std::regex_search(name, std::regex(R"([._\-]{2})"))) {
            throw EmailValidationException("Error en el nombre: contiene dos caracteres especiales consecutivos.");
        }

        // Si no se cumple ninguna condición específica anterior, lanzar error general
        throw EmailValidationException("Error en el nombre: no cumple con los requisitos de formato.");
    }
    // Contar caracteres válidos excluyendo puntos, guiones y guiones bajos
    int validCharCount = 0;
    for (char c : name) {
        if (c != '.' && c != '-' && c != '_') {
            validCharCount++;
        }
    }
    // Verifica si el nombre tiene más de 15 caracteres válidos
    if (validCharCount > 15) {
        throw EmailValidationException("Error en el nombre: contiene más de 15 caracteres válidos.");
    }
}

void ValidadorEmail::validarDominio(const std::string& domain) {
    // Especifica el formato del dominio
    // No permite menos de 3 ni mas de 30 caracteres
    // No empieza ni termina con punto, guion o guion bajo
    // No permite el doble punto
    std::string domainFormat = R"(^[^.-](?!.*[-.]{2})[\w.\w]([a-zA-Z0-9.-]+)+[^.-]$)";
    // Verifica si el dominio cumple con el regex general
    if (!std::regex_match(domain, std::regex(domainFormat))) {
        // Verifica si el dominio comienza o termina con punto o guion
        if (domain.front() == '.' || domain.front() == '-' ||
            domain.back() == '.' || domain.back() == '-') {
            throw EmailValidationException("Error en el dominio: no debe comenzar ni terminar con punto o guión.");
        }

        // Verifica si el dominio contiene dos caracteres especiales consecutivos
        if (std::regex_search(domain, std::regex(R"([-.]{2})"))) {
            throw EmailValidationException("Error en el dominio: contiene dos caracteres especiales consecutivos.");
        }

        // Si no se cumple ninguna condición específica anterior, lanzar error general
        throw EmailValidationException("Error en el dominio: no cumple con los requisitos de formato.");
    }
    // Contar caracteres válidos excluyendo puntos
    int validCharCount = 0;
    for (char c : domain) {
        if (c != '.') {
            validCharCount++;
        }
    }
    // Verifica si el dominio tiene entre 3 y 30 caracteres válidos
    if (validCharCount < 3 || validCharCount > 30) {
        throw EmailValidationException("Error en el dominio: debe tener entre 3 y 30 caracteres válidos, excluyendo los puntos.");
    }
}

void ValidadorEmail::validarExtension(const std::string& extension) {
    // Especifica el formato del extension
    // Tiene de 2 a 6 letras
    // no se permiten numeros expeciales
    // Puedes ser compuesta
    std::string extensionFormat = R"(^(?!.*\.\.)([a-zA-Z.]{2,6}(\.[a-zA-Z]{2,6})*)$)";
    if (!std::regex_match(extension, std::regex(extensionFormat))) {
        // Verificar si contiene números o caracteres especiales
        if (std::regex_search(extension, std::regex("[^a-zA-Z.]"))) {
            throw EmailValidationException("Error en la extensión: contiene números o caracteres especiales no permitidos.");
        }

        // Verificar si hay segmentos que no cumplen con la longitud de 2 a 6 letras
        if (std::regex_search(extension, std::regex(R"([a-zA-Z]{1,1}|[a-zA-Z]{7,})"))) {
            throw EmailValidationException("Error en la extensión: cada segmento debe tener entre 2 y 6 letras.");
        }

        // Si no se cumple ninguna de las condiciones específicas anteriores, lanzar un error general
        throw EmailValidationException("Error en la extensión: no cumple con los requisitos.");
    }
}