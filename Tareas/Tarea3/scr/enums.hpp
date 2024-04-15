#ifndef ENUMS_HPP
#define ENUMS_HPP
enum Opciones {
    AGREGAR_CONTACTO = 1,
    ELIMINAR_CONTACTO,
    IMPRIMIR_HASH,
    MOSTRAR_TODOS_CONTACTOS,
    SALIR
};

enum opcion_agregar_contacto {
    AGREGAREL_CONTACTO = 1, 
    NO_AREGAR
};

enum opcion_elimninar_contacto {
    ELIMINAR_ALMACENAMIENTO_INTERNO,
    ELIMINAR_CLOUD,
    ELIMINAR_AMBAS,
    NO_ELIMINAR
};

#endif