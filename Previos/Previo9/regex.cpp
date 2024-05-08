#include <iostream>
#include <regex>

int main() {
    // 'regex' es un objeto que usa una regla especial para encontrar textos específicos.
    // Aquí la regla es "(my|your) regex", que busca las frases "my regex" o "your regex".
    auto const regex = std::regex("(my|your) regex");
    
    // 'myText' es un texto donde vamos a buscar la frase.
    auto const myText = std::string("A piece of text that contains my regex.");
    // 'regex_search' busca si el texto cumple con la regla y devuelve verdadero o falso.
    bool const myTextContainsRegex = std::regex_search(myText, regex);
    
    // Otro texto para buscar la misma frase.
    auto const yourText = std::string("A piece of text that contains your regex.");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);
    
    // Un texto diferente que no contiene las frases que buscamos.
    auto const theirText = std::string("A piece of text that contains their regex.");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    // Imprime si cada texto contiene o no la frase buscada.
    std::cout << std::boolalpha
              << myTextContainsRegex << '\n'
              << yourTextContainsRegex << '\n'
              << theirTextContainsRegex << '\n';
}
