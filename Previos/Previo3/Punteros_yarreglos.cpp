#include <iostream>
using namespace std;

int main() {
    // Se declara el arreglo de 3 elementos de tipo flotante
    float arr[3];

    // Se declara el puntero de tipo flotante
    float *ptr;

    cout << "Displaying address using arrays: " << endl;

    // Con el loop se imprime la dirección de cada elemento
    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<<endl;

    // Se imprime la dirección de todo el arreglo con la notación de punteros,
    // es decir ptr + 1, ptr + 2, ptr + 3...
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " =" << ptr + i << endl;
    }

    return 0;
}
