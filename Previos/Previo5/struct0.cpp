#include <iostream>
#include <cstdlib>

#define MAX 10
int size = 0;

// Creando un stack
struct stack {
    // Elementos del stack
    int items[MAX]; 
    // Índice del elemento superior
    int top;
};
// st es un alias de struct stack
typedef struct stack st; 

// Ahora se crea un stack vacio
// Se usa st *s, esto pasa la dirección de memoria de la pila a la función.
void createEmptyStack(st *s) { 
    // Se inicializa el índice superior como -1
    s->top = -1;
}

// Verificar si la pila está llena
// Se usa st *s, esto pasa la dirección de memoria de la pila a la función.
int isfull(st *s) {
    if (s->top == MAX - 1) 
        return 1;
    else
        return 0;
}

// Verificar si la pila está vacía
// Se usa st *s, esto pasa la dirección de memoria de la pila a la función.
int isempty(st *s) { 
    // Si el índice superior es igual a -1, la pila está vacía.
    if (s->top == -1) 
        return 1;
    else
        return 0;
}

// Se añade elementos al stack
// int newItem se usa para pasar el nuevo elemento a añadir a la stack.
void push(st *s, int newItem) { 
    if (isfull(s)) { 
        std::cout << "PILA LLENA";
    } else { 
        // Se aumenta el índice del elemento superior.
        s->top++; 
        s->items[s->top] = newItem; // Se añade el nuevo elemento a al stack.
        size++; // Se incrementa el tamaño del stack
    }
}

// Se elimina un elemento del stack
void pop(st *s) { 
    if (isempty(s)) {
        std::cout << "\nPILA VACÍA\n";
    } else {
        std::cout << "Elemento retirado: " << s->items[s->top];
        // Se disminuye el índice del elemento superior.
        s->top--; 
        // Se disminuye el tamaño de la pila.
        size--; 
    } 
    std::cout << std::endl;
}

// Se imprimen elementos de la fila
void printStack(st *s) {
    std::cout << "Pila: ";
    for (int i = 0; i < size; i++) {
        std::cout << s->items[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    st *s = (st *)malloc(sizeof(st)); 
    createEmptyStack(s);

    push(s, 1); 
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    std::cout << "\nDespués de retirar:\n";
    printStack(s);

    return 0;
}
