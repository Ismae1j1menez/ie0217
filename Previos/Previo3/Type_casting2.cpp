#include <iostream>
using namespace std; 

int main() {
    // Se inicializa la variable de tipo double
    double num_double = 3.46;
    cout << "num_double = " << num_double << endl; 

    // Ambos castings de tipo explicito porque se especifica totalmente
    // Se le hace un casting de double a entero con el método (int)
    int num_int1 = (int)num_double; 
    cout << "num_int1 = " << num_int1 << endl; 

    // Se le hace un casting de double a entero con el método int()
    int num_int2 = int(num_double); 
    cout << "num_int2 = " << num_int2 << endl; 
    return 0; 
}