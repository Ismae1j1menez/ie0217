#include <iostream>
#include <regex>
#include <stdexcept>

// Comienzo de la clase de excepcion 
// Ereda la clase geredada de runtime_error
class EmailValidationException : public std::runtime_error {
public:
    explicit EmailValidationException(const std::string& msg) : runtime_error(msg) {}
};

// Comienzo de la clase validador de email
class ValidadorEmail {
public:
    // Metodo de validar correo
    void validarCorreo(const std::string& email) {
        // Si son iguales entonces no se encontro el @
        if (email.find('@') == std::string::npos) {
            throw EmailValidationException("El correo debe contener '@'.");
        }
        
        // Busca la posicion del @
        size_t atPosition = email.find('@');
        // Asigna el nombre que es a partir del inicio a @
        std::string name = email.substr(0, atPosition);
        // Asigna el resto del @ al final 
        std::string remainder = email.substr(atPosition + 1);
        // Separa el el dominio con la extencion
        size_t dotPosition = remainder.rfind('.');
        
        // En caso de que sean iguales es que no se encontro el punto en el correo
        if (dotPosition == std::string::npos) {
            throw EmailValidationException("El correo debe contener un punto en el dominio.");
        }
        
        // Ingresa el dominio que es del punto luego del @ al punto
        std::string domain = remainder.substr(0, dotPosition);
        // Ingresa el punto al ginal en extension
        std::string extension = remainder.substr(dotPosition + 1);
        
        // Aqui llama a los metodo para verificar el regex de nombre, dominio y extension
        validarNombre(name);
        validarDominio(domain);
        validarExtension(extension);
    }

private:
    // Validar nombre 
    void validarNombre(const std::string& name) {
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

    void validarDominio(const std::string& domain) {
        // Especifica el formato del dominio
        // No permite menos de 3 ni mas de 30 caracteres
        // No empieza ni termina con punto, guion o guion bajo
        // No permite el doble punto
        std::string domainFormat = R"(^[^.-](?!.*[-.]{2})[\w.\w]([a-zA-Z0-9.-]{3,30})+[^.-]$)";
        if (!std::regex_match(domain, std::regex(domainFormat))) {
            throw EmailValidationException("Error en el dominio: no cumple con los requisitos.");
        }
    }

    void validarExtension(const std::string& extension) {
        // Especifica el formato del extension
        // Tiene de 2 a 6 letras
        // no se permiten numeros expeciales
        // Puedes ser compuesta
        std::string extensionFormat = R"(^(?!.*\.\.)([a-zA-Z]{2,6}(\.[a-zA-Z]{2,6})*)$)";
        if (!std::regex_match(extension, std::regex(extensionFormat))) {
            throw EmailValidationException("Error en la extensión: no cumple con los requisitos.");
        }
    }
};
