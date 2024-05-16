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
#ifndef VALIDADOREMAIL_HPP
#define VALIDADOREMAIL_HPP

#include <iostream>
#include <regex>
#include <stdexcept>

/**
 * @brief Excepción para errores de validación de email.
 * 
 * Hereda de std::runtime_error. Se utiliza para manejar errores específicos
 * en la validación de direcciones de correo electrónico.
 */
// Comienzo de la clase de excepcion 
// Hereda de la clase geredada de runtime_error
class EmailValidationException : public std::runtime_error {
public:
    /**
     * @brief Constructor con mensaje de error.
     * @param msg Mensaje de error que se mostrará.
     */
    explicit EmailValidationException(const std::string& msg);
};

/**
* @brief Clase para validar direcciones de correo electrónico.
*/
// Comienzo de la clase validador de email
class ValidadorEmail {
public:
    /**
     * @brief Valida una dirección de correo electrónico completa.
     * @param email La dirección de correo electrónico a validar.
     */
    void validarCorreo(const std::string& email);

private:
     /**
     * @brief Valida la parte del nombre en la dirección de correo.
     * @param name Parte del nombre a validar.
     */
    void validarNombre(const std::string& name);

     /**
     * @brief Valida el dominio en la dirección de correo.
     * @param domain Dominio a validar.
     */
    void validarDominio(const std::string& domain);

    /**
     * @brief Valida la extensión del dominio en la dirección de correo.
     * @param extension Extensión del dominio a validar.
     */
    void validarExtension(const std::string& extension);
};

#endif /* VALIDADOREMAIL_HPP */
