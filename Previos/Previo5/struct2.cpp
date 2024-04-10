#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

int main() {
    Node* head; // Puntero al primer nodo
    // Puntero a un nodo
    Node* one = NULL; 
    // Puntero a un nodo
    Node* two = NULL; 
    // Puntero a un nodo
    Node* three = NULL; 

    // 3 nodos
    one = new Node();
    two = new Node();
    three = new Node();

    // Se asignan los valores de value
    one->value = 1;
    two->value = 2;
    three->value = 3; 

    // Se conectan los nodos
    one->next = two;  
    two->next = three; 
    three->next = NULL; 

    
    head = one; 
    // Imprime los valores de cada nodo
    while (head != NULL) { 
        cout << head->value; 
        head = head->next; 
    }
}
