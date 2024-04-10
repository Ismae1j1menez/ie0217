// Implementación de Cola en C++
#include <iostream>
#define SIZE 5
using namespace std;

class Queue {
private:
    // front y rear son índices para el frente y la parte trasera de la cola
    // items[] almacena los elementos en la cola
    int items[SIZE], front, rear; 

public:
    Queue() { 
        // Inicializar frente
        front = -1; 
        // Inicializar frente
        rear = -1; 
    }

    bool isFull() { 
        if (front == 0 && rear == SIZE - 1) { 
            return true;
        }
        return false;
    }

    bool isEmpty() { 
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "Cola llena";
        } else {
            if (front == -1) front = 0; 
            rear++; 
            // Añadir elemento al índice trasero
            items[rear] = element;
            cout << endl << "Insertado " << element << endl;
        }
    }

    int deQueue() {
        // Elemento que se eliminará 
        int element; 
        if (isEmpty()) { 
            cout << "Cola vacía" << endl;
            return -1;
        } else {
            element = items[front];
            if (front >= rear) { 
                front = -1; 
                rear = -1; 
            } else {
                front++; 
            }
            cout << endl << "Eliminado -> " << element << endl;
            return element;
        }
    }

    // Se muestran los elementos de la cola
    void display() {
        int i;
        if (isEmpty()) {
            cout << "Cola vacía" << endl;
        } else {
            cout << endl << "Índice del frente -> " << front << endl
                 << "Items -> ";
            for (i = front; i <= rear; i++) 
                cout << items[i] << " ";
            cout << endl << "Índice trasero -> " << rear << endl;
        }
    }
};

int main() {
    Queue q;

    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6);

    q.display();

    q.deQueue();

    q.display();

    return 0;
}
