#ifndef VALIDADOREMAIL_HPP
#define VALIDADOREMAIL_HPP

#include <iostream>
#include <regex>
#include <stdexcept>

// Comienzo de la clase de excepcion 
// Hereda de la clase geredada de runtime_error
class EmailValidationException : public std::runtime_error {
public:
    explicit EmailValidationException(const std::string& msg);
};

// Comienzo de la clase validador de email
class ValidadorEmail {
public:
    void validarCorreo(const std::string& email);

private:
    void validarNombre(const std::string& name);
    void validarDominio(const std::string& domain);
    void validarExtension(const std::string& extension);
};

#endif /* VALIDADOREMAIL_HPP */
