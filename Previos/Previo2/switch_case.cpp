// Librería utilizada para manejar objetos de salida y entrada como cout
#include <iostream>
using namespace std; 

// Función principal del código
int main () {
    // Declaracion de variables 
    char oper; 
    float num1, num2; 
    cout << "Enter an operator (+. -, *, /): ";
    cin >> oper; 
    cout << "Enter two numbers: " << endl; 
    cin >> num1 >> num2; 

    // swich, es una caja donde se evaluan condiciones
    // se verifica el valor de oper, y cual sea el valor verdadero se ejecuta ese case
    switch (oper)  {
        // Hace una operación de summa, resta, division o multiplicacion dependiendo
        // de cual sea el operador seleccionado
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
            break; 
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
            break; 
        case '*': 
            cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
            break; 
        case '/': 
            cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            break; 
        default: 
            // El operador no coincide con ninguna de las opciones anteriores
            cout << num1 << "Error! The operator is not correct" << "\n";
            break; 
    }
    return 0; 
}