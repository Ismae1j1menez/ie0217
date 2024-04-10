#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right; 
    // Constructor
    Node(int data) { 
        // Inicializar el nodo con el valor pasado
        this->data = data; 
        // Inicializar los punteros a NULL
        left = right = NULL; 
    }
};


void preorderTraversal(struct Node* node) {
    if (node == NULL) 
        return;
    cout << node->data << " -> "; 
    preorderTraversal(node->left); 
    preorderTraversal(node->right);
}

// Recibe un puntero a un nodo
void postorderTraversal(struct Node* node) { 
    if (node == NULL)
        return;
    // Llamada recursiva al nodo izquierdo
    postorderTraversal(node->left); 
    // Llamada recursiva al nodo derecho
    postorderTraversal(node->right); 
    cout << node->data << " -> ";
}


void inorderTraversal(struct Node* node) { 
    if (node == NULL)
        return;
    inorderTraversal(node->left); 
    cout << node->data << " -> ";
    inorderTraversal(node->right);
}

int main() {
    // Crear un nodo con el de valor 1, el new asigna memoria en el heap
    struct Node* root = new Node(1); 
    // Asigna al nodo izquierdo de root
    root->left = new Node(12);
    // Asigna al nodo derecho de root 
    root->right = new Node(9); 
    // Asigna al nodo izquierdo del nodo izquierdo de root
    root->left->left = new Node(5);
    // Asigna al nodo izquierdo del nodo izquierdo de root
    root->left->right = new Node(6); 

    cout << "Recorrido inorden: ";
    inorderTraversal(root);

    cout << "\nRecorrido preorden: ";
    preorderTraversal(root);

    cout << "\nRecorrido postorden: ";
    postorderTraversal(root);
}