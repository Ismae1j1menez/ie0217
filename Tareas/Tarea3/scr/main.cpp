#include <iostream>
#include "Contacto.cpp"
#include "Has_table.cpp"
#include "Lista_enlazada.cpp"

ListaEnlazada lista;
TablaHash hashTable(10); 


const char* nombre = "John Doe";
const char* telefono = "123-456-7890";

Lista.agregarContacto(nombre, telefono);
hashTable.insertarContacto(std::string(nombre), std::string(telefono));
