#include <iostream>
#include <cstring>

using namespace std; 

// Se define la estructura de datos
struct Books {
    // Se declaran los erreglos de carácteres
    char title[50]; 
    char author[50]; 
    char subject[100];
    int book_id; 
}; 

int main() {
    // Se crea la variable Book1 de tipo Books
    struct Books Book1;
    struct Books Book2; 
     
    // Asignamos algunos datos a Book 1
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "Programming Languages"); 
    Book1.book_id = 6495407;

    // Asignamos algunos datos a Book 2SS
    strcpy(Book2.title, "Advanced C++ Programming");
    strcpy(Book2.author, "Author Name");
    strcpy(Book2.subject, "C++ Programming"); 
    Book2.book_id = 6495700;

    // Se imprime los datos de la estructura
    cout << "Book 1 title : " << Book1.title << endl; 
    cout << "Book 1 author: " << Book1.author << endl; 
    cout << "Book 1 subject: " << Book1.subject << endl; 
    cout << "Book 1 id : " << Book1.book_id << endl; 
    
    cout << "Book 2 title : " << Book2.title << endl; 
    cout << "Book 2 author: " << Book2.author << endl; 
    cout << "Book 2 subject: " << Book2.subject << endl; 
    cout << "Book 2 id : " << Book2.book_id << endl; 


    return 0;
}