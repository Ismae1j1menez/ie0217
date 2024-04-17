#include <iostream>
using namespace std;

// Función para imprimir el array
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";  
    }
    cout << endl;
}

// Función para ordenar el array conel algoritmo de Insertion Sort
void insertionSort(int array[], int size){
    // El bucle externo comienza desde el segundo elemento (índice 1) hasta el último.
    for (int step = 1; step < size; step++) {
        int key = array[step];  
        int j = step - 1;       

        // Este bucle interno mueve elementos de la porción ordenada que son mayores que key
        // hacia la derecha para hacer espacio para insertar key en la ubicación correcta.
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];  
            --j;                      
        }
        array[j + 1] = key;  // Inserta key en su posición correcta en la porción ordenada.
    }
}

// Prueba el funcionamiento del algoritmo implementado
int main(){
    int data[] = {9,5,1,4,3};  
    int size = sizeof(data) / sizeof(data[0]); 
    insertionSort(data, size); 
    cout << "Sorted array in Ascending Order: \n";
    printArray(data, size); 
}
