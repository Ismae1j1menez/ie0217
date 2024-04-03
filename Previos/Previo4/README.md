# Previo 4

Este README describe el uso del Makefile para ejecutar todos los códigos presentes en la carpeta de Previos 4. La carpeta contiene una variedad de archivos que pueden ser compilados y ejecutados fácilmente con el Makefile, permitiendo también eliminar todos los archivos generados de tipo `.exe` después de su uso.

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

- Animal.cpp
- clase.cpp
- Destructor.cpp
- friend_class.cpp
- Funcionesyclases_amigas.cpp
- Funcionesyclases_amigas2.cpp
- Herencia_multinivel.cpp
- Herencia.cpp
- Jerarquia_herencia.cpp
- main.cpp
- Miembros_protegidos.cpp
- Sobrecarga_operadores.cpp
- Sobreescritura_h.cpp
- Students.cpp
- Students2.cpp
- virtual_fun.cpp

### Programas que Necesitan Dos Archivos para Compilar

Estos programas requieren el uso del objetivo `P2` para su compilación:

- Ejercicio_funciones.cpp, Ejercicio_main.cpp y Ejercicio_student.cpp
- main_persona.cpp y persona.cpp
