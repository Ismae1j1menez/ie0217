#ifndef PAIS_HPP
#define PAIS_HPP

#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>    

class Pais {
protected:
    unsigned long identificador; 
    unsigned int poblacion;      

private:
    std::string nombre;        

public:
    Pais();
    Pais(const std::string& nombre, unsigned long id, unsigned int poblacion);
    void setNombre(const std::string& nombre);
    std::string getNombre() const;
    void setPoblacion(unsigned int poblacion);
    unsigned int getPoblacion() const;
    unsigned long getID() const;
    virtual double generarPIB(); 
    bool operator==(const Pais& otro) const;
};

#endif
