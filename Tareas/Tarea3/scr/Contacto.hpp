#ifndef CONTACTO_HPP
#define CONTACTO_HPP

class Contacto {
    public:
        // Apunta al primer caracter del string nombre y telefono
        char* nombre;
        char* telefono;

        Contacto(const char* nom, const char* tel);
        ~Contacto();
        void mostrar() const;
};


#endif