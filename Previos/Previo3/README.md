# Previo 3

Este README describe el uso del Makefile para ejecutar todos los códigos presentes en la carpeta de Previos 2. La carpeta contiene una variedad de archivos que pueden ser compilados y ejecutados fácilmente con el Makefile, permitiendo también eliminar todos los archivos generados de tipo `.exe` después de su uso.

## Uso del Makefile

Para compilar y ejecutar los programas, se pueden utilizar los siguientes comandos:

- Para compilar un solo archivo:
```
make P1 <NOMBRE_DEL_ARCHIVO_SIN_EXTENSIÓN>
```

- Para compilar dos archivos simultáneamente:
```
make P2 <NOMBRE_DEL_ARCHIVO_1_SIN_EXTENSIÓN> <NOMBRE_DEL_ARCHIVO_2_SIN_EXTENSIÓN>
```

- Para limpiar el directorio de archivos ejecutables generados:
```
make clean
```


### Instrucciones Detalladas

El Makefile incluye instrucciones detalladas para su uso. Es importante escribir exactamente el nombre del archivo sin errores para asegurar su correcta ejecución.

## Archivos y su Modo de Compilación

### Programas que Solo Necesitan un Archivo para Compilar

Estos programas se pueden compilar utilizando el objetivo `P1`:

- change.cpp
- Defines.cpp
- Defines2.cpp
- Enums.cpp
- Enums2.cpp
- Enums3.cpp
- Factorial.cpp
- goto.cpp
- principal.cpp
- Punteros_estructuras.cpp
- Punteros_estructuras2.cpp
- Punteros_estructuras3.cpp
- Punteros_funciones.cpp
- Punteros_funciones2.cpp
- Punteros_yarreglos.cpp
- Punteros.cpp
- Punterosdobles.cpp
- Type_casting.cpp
- Type_casting2.cpp
- variables_adres.cpp

### Programas que Necesitan Dos Archivos para Compilar

Estos programas requieren el uso del objetivo `P2` para su compilación:

- main.cpp y sum.cpp
