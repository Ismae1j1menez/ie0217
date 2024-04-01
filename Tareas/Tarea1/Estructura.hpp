#ifndef ESTRUCTURA_HPP
#define ESTRUCTURA_HPP
#include <iostream>
// Esta libreria maneja automáticamente la asignación y designación de memoria
// lo que evita errores de fuga de memoria.
// También tiene métodos para realizar operaciones comunes con cadenas, como 
// concatenación, búsqueda, acceso y modificación de caracteres, comparación
// Por último permite trabajar con cadenas de longitud variable de manera segura 
// y eficiente, ajustando dinámicamente el tamaño de la memoria conforme se modifican 
// los contenidos de la cadena.
#include <string>

// Se crea la estructura con los miembros
// Es un contenedor de datos
struct Estructura {
    std::string palabra_adivinar;
    std::string estado_actual;
    int intentos_maximos;
    int intentos_actuales;
};

#endif