#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int *ptr;
    // calloc inicializa la memoria asignada a 0, esta es la diferencia con malloc.
    // calloc recibe -> el número de elementos y el tamaño de cada elemento.
    ptr = (int *)calloc(5, sizeof(int)); 
    if (!ptr) {
        cout << "Fallo en asignación de memoria";
        exit(1);
    }
    cout << "Inicializando valores..." << endl << endl;
    for (int i = 0; i < 5; i++) {
        // Accede al i-ésimo elemento del arreglo.
        ptr[i] = i * 2 + 1; 
    }
    cout << "Valores inicializados" << endl;
    for (int i = 0; i < 5; i++) {
        
        cout << *(ptr + i) << endl;
    }
    free(ptr);
    return 0;
}