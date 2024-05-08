# Tarea 4

Este README tiene como objetivo proporcionar una descripción breve sobre la Tarea 4, las instrucciones de ejecución del programa con su respectivo Makefile, y las respuestas a la parte teórica de la respectiva tarea.

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

- Para compilar la tarea 3 se usa el comando:
```
make P2 Contacto Funciones main Hash_table Lista_enlazada Node
```

## DOXYGEN
Para abrir el archivo HTML generado por Doxygen, es necesario hacer lo siguiente:

Primero, cambia al directorio donde se encuentra el archivo HTML generado por Doxygen utilizando el comando `cd`. Se debe reemplazar `/ruta/a/la/carpeta/html` con la ruta real a la carpeta `html`.

```bash
cd /ruta/a/la/carpeta/html
```

Luego, ya en la carpeta `html`, abre el archivo `index.html` con el siguiente comando:

```bash
xdg-open index.html
```

### Link DOXYGEN almacenado en netlify
https://documentationtarea3ie0217.netlify.app/

## Instrucciones Detalladas de Uso
    
El Makefile proporciona instrucciones claras para su adecuada utilización. Es crucial introducir el nombre del archivo de manera precisa, sin errores, para garantizar su correcta ejecución. Dado que se manejan cuatro archivos y los archivos con extensión `.hpp` no requieren compilación, se debe emplear el comando `P2` para compilar los archivos.

## Instrucciones para la aplicación
Al ejecutar el archivo resultante de la compilación, se presenta un menú inicial con cinco opciones. Se recomienda ingresar únicamente números, ya que el programa espera un valor entero y puede entrar en un bucle si recibe un carácter o una cadena de texto. Esto aplica tanto para el menú inicial como para el subsiguiente.

### Secuencia del programa
El programa inicia desplegando un menú con diversas opciones. Es crucial seguir el "happy path", ingresando únicamente números como se espera. Si se ingresan caracteres o cadenas de texto, el sistema entrará en un bucle debido a que el comando cin espera recibir un entero.

Tanto el almacenamiento interno como el almacenamiento en la nube (cloud) comienzan vacíos. Es necesario ingresar contactos para iniciar. En caso de intentar imprimir la tabla hash en este estado inicial, solo se mostrarán punteros nulos. Si se intenta imprimir el contenido del almacenamiento interno cuando está vacío, no se mostrará ningún dato. Además, si se intenta eliminar un contacto que no existe en el almacenamiento interno, en la nube, o en ambos, se mostrará un mensaje indicando que el contacto no fue encontrado.

Al agregar contactos, estos se registran tanto en el almacenamiento interno como en la nube, siendo la nube una copia exacta del almacenamiento interno. La eliminación de contactos requiere la entrada correcta del nombre y número de teléfono. Si estos datos no se ingresan correctamente, el sistema indicará que no se encontró el contacto. Se ofrecen tres opciones de eliminación: en el almacenamiento interno, en la nube, o en ambos.

Al imprimir la tabla hash, se mostrarán los índices junto con su nodo correspondiente; si un índice está vacío, se imprimirá nullptr. Es importante mencionar que la lista de contactos tiene un límite máximo de 20 entradas, restricción que aplica principalmente para la tabla hash.

Finalmente, la impresión de todos los contactos está disponible siempre que haya datos para mostrar.


## Parte Teórica
## Templates

### 1. Definición de Templates
> Los templates en C++ son herramientas que permiten a los programadores especificar el tipo de datos como un parámetro. Esto facilita la reutilización de código, ya que no es necesario escribir múltiples versiones de una función o clase para diferentes tipos de datos. Por ejemplo, se puede definir una función `add` que sume dos números de cualquier tipo:
> ```cpp
> template <typename T>
> T add(T num1, T num2) {
>     return num1 + num2;
> }
> ```

### 2. Sobrecarga de Plantillas
> En C++, las plantillas de funciones pueden sobrecargarse de la misma manera que las funciones normales, es decir, mediante la diferencia en la cantidad o tipo de parámetros. La sobrecarga permite a los desarrolladores definir varias versiones de una función template que se diferencian en el número o tipo de sus argumentos. Por ejemplo:
> ```cpp
> template <typename T>
> T add(T num1, T num2);
> template <typename T, typename U>
> auto add(T num1, U num2);
> template <typename T>
> T add(T num1, T num2, T num3);
> ```

### 3. Plantillas de Clases
> Las plantillas de clases en C++ permiten definir clases donde los tipos de sus atributos y métodos pueden ser especificados como parámetros. Esto facilita el uso del mismo código para trabajar con diferentes tipos de datos, promoviendo la reutilización y flexibilidad del código.

## Excepciones

### 4. Manejo de Excepciones
> En C++, el manejo de excepciones se realiza a través de tres bloques de código:
> - `try`: Se utiliza para señalar un bloque de código en el que pueden ocurrir excepciones.
> - `throw`: Se emplea para lanzar una excepción cuando se detecta un error.
> - `catch`: Se usa para capturar y manejar las excepciones lanzadas en el bloque `try`.

### 5. Excepciones Estándar
> C++ ofrece varias excepciones estándar, como:
> - `invalid_argument`: Útil cuando un argumento no válido es pasado a una función.
> - `runtime_error`: Adecuada para errores detectados durante el tiempo de ejecución, como una división por cero.
> - `out_of_range`: Se utiliza cuando un elemento se intenta acceder fuera del rango válido, por ejemplo, en un vector.

### 6. Política de Manejo de Excepciones
> Una política de manejo de excepciones es un conjunto de prácticas que guían cómo se deben manejar las excepciones en un proyecto de software. Es crucial para desarrollar aplicaciones robustas, ya que define cómo se capturan y gestionan los errores para evitar fallos en tiempo de ejecución.

### 7. Noexcept
> La palabra clave `noexcept` en C++ indica que una función no va a lanzar excepciones, ayudando al compilador a optimizar el rendimiento. Su sintaxis es la siguiente:
> ```cpp
> void func() noexcept {
>     // Código de la función
> }
> ```

### 8. std::logic_error vs. std::runtime_error
> `std::logic_error` se utiliza para errores que pueden detectarse durante la revisión del código, como argumentos inválidos. `std::runtime_error` se usa para errores que solo se pueden detectar durante la ejecución del programa, como fallos de hardware o errores de división por cero.

### 9. ¿Qué ocurre cuando una excepción no es capturada?
> Si una excepción lanzada no es capturada, el programa termina inmediatamente, lo que puede resultar en la pérdida de datos y otros comportamientos inesperados.

## STL (Standard Template Library)

### 10. Contenedores STL
> Algunos de los contenedores proporcionados por la STL incluyen:
> - `vector`: Ideal para almacenar datos dinámicamente.
> - `deque`: Utilizado en aplicaciones que requieren acceso rápido desde ambos extremos.
> - `set`: Perfecto para almacenar elementos únicos en orden.
> - `multimap`: Útil en aplicaciones que necesitan asociar claves con múltiples valores.
> - `list`: Adecuado para operaciones que requieren inserciones y eliminaciones frecuentes.

### 11. Iteradores en STL
> Los iteradores son similares a los punteros y permiten recorrer los elementos de un contenedor en STL. Cada contenedor ofrece iteradores que se pueden usar para acceder a sus elementos de manera secuencial.

### 12. Algoritmos STL
> Algunos algoritmos comunes incluyen:
> - `binary search`: Para buscar eficientemente en una secuencia ordenada.
> - `reverse`: Para invertir el orden de los elementos en un contenedor.
> - `sort`: Para ordenar los elementos en un rango especificado.

### 13. Algoritmos Personalizados
> Se pueden crear algoritmos personalizados en STL pasando una función personalizada como argumento a un algoritmo. Esto permite modificar el comportamiento del algoritmo para adaptarlo a necesidades específicas.

## Guía Básica de Markdown para README.md

Markdown es un lenguaje de marcado ligero que permite convertir texto en HTML de manera sencilla. Se utiliza en archivos README, documentación de software, etc.

## Por Qué Usar Markdown

- **Simplicidad:** La sintaxis de Markdown es sencilla y fácil de aprender.
- **Portabilidad:** Los archivos Markdown son simplemente texto plano, lo que da compatibilidad con cualquier plataforma y editor de texto.
- **Flexibilidad:** Aunque es sencillo, Markdown puede ser extendido para incluir HTML, permitiendo complejidad cuando es necesario.

## Sintaxis Básica

### Encabezados

Los encabezados se crean usando el símbolo `#` antes del texto.

```markdown
# Encabezado 1
## Encabezado 2
### Encabezado 3
```

### Énfasis

Puedes enfatizar texto `*asteriscos*` o `_guiones bajos_`, y negrita usando `**doble asteriscos**` o `__doble guiones bajos__`.

### Listas

- Para listas no ordenadas, se usa asteriscos `*`, guiones `-`, o signos de suma `+`.
- Para listas ordenadas, simplemente se numeran los ítems.

### Enlaces

Para crear un enlace, se encierra el texto del enlace en corchetes `[]`, seguido de la URL en paréntesis `()`.

```markdown
[texto del enlace](https://direccion.com)
```

### Imágenes

Similar a los enlaces, pero con un signo de exclamación al inicio. 

```markdown
![Texto alternativo](url-de-la-imagen.jpg)
```

### Código

Se usa comillas simples ` para un `código` en línea o tres comillas simples ``` para bloques de código.

### Citas

Para citar, se utiliza el signo mayor que `>` antes del texto.

```markdown
> Esto es una cita.
```
Esto es una explicación muy basica sobre Markdowns, pero demuestra lo útil que puede ser