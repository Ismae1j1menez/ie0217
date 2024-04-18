#include <iostream>
#include "Funciones.hpp"


int main(){
    const int SIZE = 10000;
    int arr[SIZE];
    // Nota: como se genera un array se ordena y este es una referencia, al pasar por los otros
    // ya va a estar ordenado, por eso hay que generar un array nuevo
    generateRandomAarry(arr, SIZE);
    measuringShortingTime(bubbleSort, arr, SIZE, "Bubble Sort");

    generateRandomAarry(arr, SIZE);
    measuringShortingTime(selectionSort, arr, SIZE, "Selection Sort");
    generateRandomAarry(arr, SIZE);

    measuringShortingTime(insertionSort, arr, SIZE, "Insertion Sort");
    generateRandomAarry(arr, SIZE);

    measureQuickShortTime(quickSort, arr, 0, SIZE - 1, "Quick Sort");
    generateRandomAarry(arr, SIZE);
    return 0; 
}