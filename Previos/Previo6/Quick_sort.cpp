#include <iostream>

int partition(int arr[], int low, int high) {
    // Selecciona el pivote que es el último elemento
    int pivot = arr[high];  
    int i = (low - 1);  

    for (int j = low; j <= high - 1; j++) {
        // Si el elemento actual es menor o igual al pivote
        if (arr[j] <= pivot) {
            i++;  
            std::swap(arr[i], arr[j]); 
        }
    }
    std::swap(arr[i + 1], arr[high]);  
    return (i + 1); 
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
         // Ordenar la parte izquierda con referencia del pivote
        quickSort(arr, low, pi - 1); 
        // Ordenar la parte derecha con referencia del pivote
        quickSort(arr, pi + 1, high);   
    }
}

// Se prueba el funcionamiento
int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    std::cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}
