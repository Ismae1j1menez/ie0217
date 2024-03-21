# Previo 2

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

- Anidaciones.cpp
- Argumentos_main.cpp
- Argumentos.cpp
- Estructuras.cpp
- Estructuras2.cpp
- holaMundo.cpp
- holaMundo2.cpp
- holaMundo3.cpp
- holaMundo4.cpp
- Loops.cpp
- Loops2.cpp
- Loops3.cpp
- Loops4.cpp
- Prototipo_fun.cpp
- Return.cpp
- sobrecarga.cpp
- sobrecarga2.cpp
- switch_case.cpp
- Variables_alcance.cpp
- Variables_alcance2.cpp
- Variavles_alcance3.cpp

### Programas que Necesitan Dos Archivos para Compilar

Estos programas requieren el uso del objetivo `P2` para su compilación:

- extern_program1.cpp y extern_program2.cpp
