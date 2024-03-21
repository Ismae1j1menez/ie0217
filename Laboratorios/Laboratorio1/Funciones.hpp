#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include "Contacto.hpp"

// Prototipos de la funciones que luego son definifas en Funciones.cpp
void agregarContacto(Contacto listaContactos[], int &numContactos);
void mostrarContactos(const Contacto listaContactos[], int numContactos);
void buscarContacto(const Contacto listaContactos[], int numContactos);

#endif