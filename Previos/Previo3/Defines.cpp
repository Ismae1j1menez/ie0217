#include <iostream>
using namespace std; 

// Los defines son procesados en el tiempo de precompilación
// Todo logar donde diga BOOK_ID_MAX se va a quitar y se sustituye un 10
#define BOOK_ID_MAX 10

int main() {
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl; 
    return 0; 
}