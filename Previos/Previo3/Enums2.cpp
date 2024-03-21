#include <iostream>
using namespace std; 

// Manera de hacer código escalable, legible y mantenible 
// Se hace con la palabra clave enum, luego el nombre y finalmente los miembros
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
int main() {
    // Se declara el dato tipo week, puede tener el valor de los cuatro miembros de week
    week today; 
    today = Wednesday;
    // Al imprimir se le suma 1 debido a que empieza a contar en 0
    cout << "Day = " << today+1 << endl; 
    return 0; 
}