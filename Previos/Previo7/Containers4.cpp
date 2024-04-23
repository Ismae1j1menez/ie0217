#include <iostream>
#include <map>

using namespace std;

int main () {
    map<int, string> student;  // Crea un mapa para almacenar estudiantes con un entero como clave y un string como valor

    student[1] = "Jacqueline";  // Asigna el nombre Jacqueline a la clave 1 en el mapa
    student[2] = "Blake";       // Asigna el nombre Blake a la clave 2 en el mapa

    student.insert(make_pair(3, "Denise"));  // Inserta el par en el mapa usando insert
    student.insert(make_pair(4, "Blake"));   // Inserta el par en el mapa usando insert

    student[5] = "Timothy";  // Asigna el nombre Timothy a la clave 5 en el mapa
    student[5] = "Aron";     // Sobrescribe el nombre Timothy con Aron en la clave 5 en el mapa

    for (int i = 1; i <= student.size(); ++i){ 
        cout << "Student[" << i << "]" << student[i] << endl;  // Imprime el nombre del estudiante en la posición i
    }
    return 0;  
}