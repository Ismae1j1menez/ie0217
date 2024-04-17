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
#ifndef ENUMS_HPP
#define ENUMS_HPP
/**
 * @enum Opciones
 * @brief Enumeración para las opciones principales del menú de la aplicación.
 *
 * Estas opciones son utilizadas para controlar las acciones principales en la interfaz de usuario del programa.
 */
enum Opciones {
    AGREGAR_CONTACTO = 1,      ///< Opción para agregar un nuevo contacto.
    ELIMINAR_CONTACTO,         ///< Opción para eliminar un contacto existente.
    IMPRIMIR_HASH,             ///< Opción para imprimir la estructura de datos hash interna.
    MOSTRAR_TODOS_CONTACTOS,   ///< Opción para mostrar todos los contactos almacenados.
    SALIR                      ///< Opción para salir del programa.
};

/**
 * @enum opcion_agregar_contacto
 * @brief Enumeración para decidir sobre la adición de un contacto.
 *
 * Estas opciones determinan si un contacto debe ser agregado o no después de ser propuesto.
 */
enum opcion_agregar_contacto {
    AGREGAREL_CONTACTO = 1,    ///< Confirmar la adición del contacto.
    NO_AREGAR                  ///< Rechazar la adición del contacto.
};

/**
 * @enum opcion_eliminar_contacto
 * @brief Enumeración para las opciones de eliminación de contactos.
 *
 * Permite al usuario elegir cómo y dónde se debe eliminar la información del contacto.
 */
enum opcion_elimninar_contacto {
    ELIMINAR_ALMACENAMIENTO_INTERNO = 1, ///< Eliminar contacto del almacenamiento interno.
    ELIMINAR_CLOUD,                      ///< Eliminar contacto del almacenamiento en la nube.
    ELIMINAR_AMBAS,                      ///< Eliminar contacto de ambos, interno y nube.
    NO_ELIMINAR                          ///< Cancelar la eliminación del contacto.
};

#endif