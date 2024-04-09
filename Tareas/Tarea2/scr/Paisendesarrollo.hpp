#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include "Pais.hpp"

class PaisEnDesarrollo : public Pais {
public:
    PaisEnDesarrollo();
    PaisEnDesarrollo(const std::string& nombre, unsigned long id, unsigned int poblacion);
    void imprimir_info_detallada();
};

#endif
