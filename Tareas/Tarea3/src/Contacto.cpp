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

#include "Contacto.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>


/**
 * @file Contacto.cpp
 * @brief Implementación de la clase Contacto.
 *
 * Este archivo contiene la implementación de la clase Contacto, que se encarga de gestionar
 * la información de un contacto individual. Incluye un constructor para inicializar los
 * contactos con su nombre y teléfono, un destructor para liberar la memoria, y un método
 * para mostrar los datos del contacto.
 *
 * La clase Contacto maneja la memoria dinámica para los nombres y teléfonos de los contactos,
 * asegurando que estos se copien correctamente desde las cadenas de entrada y se liberen
 * adecuadamente cuando el contacto ya no sea necesario.
 */

// Constructor
Contacto::Contacto(const char* nom, const char* tel) {
    // Reserva una cantidad de memoria de la longitd del miembro + 1 (por el caracter nullo)
    nombre = (char*)malloc(strlen(nom) + 1);  
    telefono = (char*)malloc(strlen(tel) + 1);
    // Revisa si nombre y telefono son null, sino lo son entonces se copia nom y tel en la memoria
    if (nombre) strcpy(nombre, nom); 
    if (telefono) strcpy(telefono, tel); 
}

// Destructor, se libera la memoria reservada en nombre y telefono
Contacto::~Contacto() {
    free(nombre);  
    free(telefono); 
}

// Revisar si este metodo hay que cambiarlo o quitarlo segun las especificaciones
void Contacto::mostrar() const {
    std::cout << "Nombre: " << nombre << ", Teléfono: " << telefono << std::endl;
}
