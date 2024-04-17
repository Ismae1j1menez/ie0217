#include <iostream>
using namespace std;

// Función para ordenar el array usando el algoritmo de Bubble Sort
void bubbleSort(int array[], int size){
    // Itera a través del array
    for(int step = 0; step < (size-1); ++step){
        // Variable para optimización, permite ahorrar interaciones no necesarias
        int swapped = 0;
        for(int i=0; i < (size-step-1); ++i){
            // Compara dos valores del arreglo
            if(array[i]> array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = 1;
            }
        } 
        if (swapped == 0)
            break;
    }

}

// Función para imprimir el array
void printArray(int array[], int size){
    for (int i=0; i <size; ++i){
        cout << " " << array[i];
    }
    cout << "\n";
}

// Se prueba la implementación
int main() {
    int data[] = {-2,45,0, 11, -9};  
    int size = sizeof(data) /sizeof(data[0]);
    bubbleSort(data, size); 
    cout << "Sorted Array in Ascending Order: \n";  
    printArray(data, size); 
}
