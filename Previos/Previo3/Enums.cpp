#include <iostream>
using namespace std; 

// Manera de hacer código escalable, legible y mantenible 
// Se hace con la palabra clave enum, luego el nombre y finalmente los miembros
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32}; 
int main() {
    // Se declara el dato tipo season, puede tener el valor de los cuatro miembros de season
    seasons s; 
    s = summer;
    cout << "Summer = " << s << endl; 
    return 0; 
}