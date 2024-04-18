#include "Funciones.hpp"

// Función de algoritmo de ordenamiento bubble sort
void bubbleSort(int arr[], int n) { // Recibe un array y un entero
    // Loop donde se revisa la comparación de valores y se hace el swap
    for (int i = 0; i < n - 1; ++i) { 
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función de algoritmo de ordenamiento slection sort
void selectionSort(int arr[], int n) {
    // Compara indice por indice si es mayor o menor, cambia y luego seleccoina este nuevo 
    // indice para comparar
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Función de algoritmo de ordenamiento insertion sort
void insertionSort(int arr[], int n) {
    // Slecciona el key y hace la comparación con el array
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Función lla mada en el quickSort, es fundamental para partir en base al pivote
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

// Algoritmo de ordenamiento quickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// El arreglo es la referencia en memoria del primer elemento
void generateRandomAarry(int arr[], int n){
    srand(time(0)); // Base donde se comienza a generar números aleatorios
    for (int i = 0; i < n; ++i){
        arr[i] = rand() % 10000; 
    }
}

// Recibe un puntero a una función, ademas recibe un arreglo de anteros
void measuringShortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName){
    //Se divide en tipo, variable y nombre de la asignación
    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, n);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;
}

// Como quick sort tiene diferentes argumentos hay que arreglar la función para que pueda obtener estos?
void measureQuickShortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName){
    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, low, high);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;
}