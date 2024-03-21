// Include del encabezado .hpp
// Protección contra la inclusión múltiple.
// Si SUM_H no está definido, define SUM_H y procesa el contenido del archivo.
// Esto previene problemas si el archivo es incluido múltiples veces. Por eso 
// que cuando se incluye por primera vez en el main y luego en el aqui en el sum.cpp
// no existe un problema. 
#include "sum.hpp"

// Definición de la función, donde se retorna 
// la suma de ambos argumentos
int sum(int a, int b) {
    return a + b; 
}