#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresar número total de estudiantes: ";
    cin >> num;
    float* ptr;

    // Se asigna en memoria con num flotantes
    // Asigna un arreglo de flotantes de tamaño num
    ptr = new float[num];

    cout << "Ingresar promedio (GPA) de los estudiantes." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Estudiante " << i + 1 << ": ";
        // El operador *(ptr + i) se usa para acceder al por iteración de puneteros
        // a los elemento del arreglo.
        cin >> *(ptr + i); 
    }

    cout << "\nMostrando GPA de los estudiantes." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Estudiante " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Liberar memoria de ptr
    // Importante para evitar fugas
    delete[] ptr; 

    return 0;
}