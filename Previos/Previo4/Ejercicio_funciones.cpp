#include "Ejercicio_funciones.hpp"
#include <iostream>

void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2; 
    std::cout << "Average Marks = " << average << std::endl;
}
