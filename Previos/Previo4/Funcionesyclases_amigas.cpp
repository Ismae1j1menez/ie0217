#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;

        // Función amiga
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
};

int addFive(Distance d) {
    // Se accesa a el miembro privado de la clase
    d.meter +=5;
    return d.meter;
}

int main() {
    Distance D; 
    cout << "Distance: " << addFive(D) << endl;
    return 0; 
}