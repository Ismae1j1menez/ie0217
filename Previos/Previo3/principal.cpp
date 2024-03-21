#include <iostream>
using namespace std; 

#define MI_PRIMER_DEFINE 925

// Manera de hacer código escalable, legible y mantenible 
// Se hace con la palabra clave enum, luego el nombre y finalmente los miembros
enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9, 
    winteer = 32 
};

// Cuando no se le da una variable al enum por defecto se le da un valor, por ejemplo
// carro = 0, casa = 1, arbol = 2 y patio = 3 
enum enumcito {
    carro,
    casa,
    arbol,
    patio,
};

int main() {
    // Se declara el dato tipo season, puede tener el valor de los cuatro miembros de season
    seasons s; 
    // Inicializo con un miembro de season
    s = summer; 
    cout << "Summer = " << s << endl;
    cout << "Define: " << MI_PRIMER_DEFINE << endl; 
    cout << "arbol: " << arbol << endl; 
    return 0;  
}
