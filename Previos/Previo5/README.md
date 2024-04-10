# Previo 5

Este README describe el uso del Makefile para ejecutar todos los códigos presentes en la carpeta de Previos 5. La carpeta contiene una variedad de archivos que pueden ser compilados y ejecutados fácilmente con el Makefile, permitiendo también eliminar todos los archivos generados de tipo `.exe` después de su uso.

## Uso del Makefile

Para compilar y ejecutar los programas, se pueden utilizar los siguientes comandos:

- Para compilar un solo archivo:
```
make P1 <NOMBRE_DEL_ARCHIVO_SIN_EXTENSIÓN>
```

- Para compilar dos o más archivos simultáneamente:
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

- mem0.cpp
- mem1.cpp
- mem2.cpp
- mem3.cpp
- mem4.cpp
- mem5.cpp
- mem6.cpp
- struct0.cpp
- struct1.cpp
- struct2.cpp
- struct3.cpp