//MIT License
//
//Copyright (c) 2024 Ismael Jiménez Carballo
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

/**
 * @class Contacto
 * @brief Clase para almacenar y manipular información de contactos.
 *
 * Esta clase gestiona la información básica de un contacto, que incluye el nombre y el número de teléfono.
 */
class Contacto {
    public:
        // Apunta al primer caracter del string nombre y telefono
        char* nombre;
        char* telefono;

        /**
         * @brief Constructor que inicializa un contacto con nombre y teléfono dados.
         * @param nom Puntero al primer caracter de la cadena que representa el nombre del contacto.
         * @param tel Puntero al primer caracter de la cadena que representa el teléfono del contacto.
         */
        Contacto(const char* nom, const char* tel);

        
        /**
         * @brief Destructor para la clase Contacto.
         *
         * Limpia los recursos asignados internamente, específicamente las cadenas de nombre y teléfono.
         */
        ~Contacto();

        /**
         * @brief Muestra la información del contacto.
         *
         * Imprime el nombre y el teléfono del contacto en la salida estándar.
         */
        void mostrar() const;
};


#endif