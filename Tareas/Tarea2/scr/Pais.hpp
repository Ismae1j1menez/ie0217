#ifndef PAIS_HPP
#define PAIS_HPP
#include <iostream>
#include <string>
using namespace std; 

class Pais {
private:
    std::string nombre;

public:
    Pais();
    Pais(const std::string& nombre);
    void setNombre(const std::string& nombre);
    std::string getNombre() const;
};

#endif