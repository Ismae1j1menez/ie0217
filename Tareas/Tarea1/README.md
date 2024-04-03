# Tarea 1

Este README tiene como objetivo proporcionar una descripción breve sobre la Tarea 1, las instrucciones de ejecución del programa con su respectivo Makefile, y las respuestas a la parte teórica de la respectiva tarea.

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
https://tarea1documentacionabsdasdas.netlify.app

## Instrucciones Detalladas de Uso
    
El Makefile proporciona instrucciones claras para su adecuada utilización. Es crucial introducir el nombre del archivo de manera precisa, sin errores, para garantizar su correcta ejecución. Dado que se manejan cuatro archivos y los archivos con extensión `.hpp` no requieren compilación, se debe emplear el comando `P2` para compilar los archivos `main.cpp` y `Funciones.cpp`.

## Instrucciones para el Juego

Al ejecutar el archivo resultante de la compilación, se presenta un menú inicial con cinco opciones. Se recomienda ingresar únicamente números, ya que el programa espera un valor entero y puede entrar en un bucle si recibe un carácter o una cadena de texto. Esto aplica tanto para el menú inicial como para el subsiguiente.

### Secuencia de Juego

1. **Selección de Dificultad**: Es importante elegir una dificultad antes de iniciar el juego. Intentar comenzar sin haber seleccionado una dificultad resultará en un mensaje indicando que no se puede inciar el juego.

2. **Iniciación del Juego**: Una vez establecida la dificultad, el juego puede comenzar. Se deben ingresar letras individualmente, evitando palabras completas, ya que el programa está diseñado para recibir caracteres únicos. Una excepción se presenta en la última oportunidad, donde se permiten intentos con palabras completas.

3. **Progreso y Adivinanzas**: Durante el juego, los intentos y el progreso se actualizan conforme se adivinan las letras. Si se acierta una palabra, el contador aumenta. Es posible intentar adivinar múltiples palabras reiniciando el juego, sin que el contador de palabras adivinadas se reinicie hasta que se produzca una pérdida.

4. **Reinicio tras Pérdida**: En caso de no adivinar la palabra, el juego puede reiniciarse. Tras una derrota, el contador de palabras adivinadas se reinicia.

## Parte Teórica

1. ¿Cuál es la principal diferencia entre C y C++?
> La principal diferencia entre C y C++ es que C++ es un lenguaje de programación orientado a objetos.

2. Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.
> - git init se utiliza para poder iniciar un repositorio local. 
> - git add se utiliza para agregar los archivos seleccionados al próximo commit, es decir, añade archivos al área de preparación (staging area) para que sean incluidos en el siguiente commit.
> - git commit se utiliza para guardar los cambios que están en el área de preparación en el repositorio local, acompañados de un mensaje descriptivo.
> - git push se utiliza para subir los commits realizados en el repositorio local a un repositorio remoto, por ejemplo GitHub.
> - git pull se utiliza para  traer los cambios desde el repositorio remoto y los fusiona con la rama local.
> - git clone se utiliza para clonar un repositorio remoto y traerlo al repositorio local, es una copia.
> - git branch se utiliza para gestionar ramas en el repositorio. Con este comando, puedes crear nuevas ramas, y al utilizarlo con opciones como -D, es posible eliminarlas.
> - git merge se utiliza para unir dos ramas dentro del mismo repositorio local. 
3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?
> - Git es un sistema de control de versiones que permite mantener diversas versiones en los proyectos en progeso. GitHub, por otro lado, tiene la capacidad de que sea todavía más útil al ofrecer un servicio de almacenamiento en la nube. Este es importante para facilitar la colaboración dentro de equipos de trabajo y mantener el código organizado, especialmente en proyectos con un gran número de personas.
4. ¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?
> - Ocurre cuando se intenta fusionar dos ramas que contienen cambios contradictorios y Git no puede decidir automáticamente cuál versión mantener. Para resolverlo, se debe editar manualmente los archivos, luego usar git add para marcarlos como resueltos, y finalmente git commit para completar la fusión. 
5. ¿Qué es un archivo .gitignore y para qué se utiliza?
> - Es utilizado para excluir ciertos archivos dada su extensión. Por ejemplo, los archivos .exe, que son ejecutables binarios y sin ningun valor, pueden ser incluidos en .gitignore para que sean ignorados por el repositorio local. Esto ayuda a mantener limpio el repositorio. 
6. ¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?
> - En Git, se trabaja con ramas, que son copias de la rama principal. El propósito es permitir realizar cambios sin afectar la rama principal, asegurando así que el desarrollo principal se mantenga sin riesgos de estropear el proyecto. Cuando los cambios están listos, se crea una solicitud de extracción (pull request), con el objetivo de que estos cambios sean revisados. Esto permite solicitar modificaciones o mejoras antes de realizar la fusión (merge) de las ramas de trabajo con la rama principal, facilitando la colaboración y el mantenimiento del código. 
7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?
> - Lenguaje interpretado es ejecutado línea por línea, lo que significa que si se encuentra un error durante la ejecución, el proceso se detiene inmediatamente. Sin embargo, hasta que se encuentra el error, el programa se ejecuta de manera normal. Python y JavaScript son ejemplos de lenguajes interpretados.
> - Lenguaje compilado, requiere que todo el código sea compilado antes de su ejecución. Si se detecta un error, este se identifica durante el proceso de preprocesamiento, antes de la ejecución del programa. Este proceso de compilación genera un archivo ejecutable en lenguaje máquina o binario, el cual es ejecutable. 
8. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación? 
> - Un enlazador es básicamente un programa que toma lo que el compilador prepara y otros archivos ya hechos (como los de las bibliotecas) y los junta en un solo programa que se puede correr en la computadora. Una analogía  puede ser pensar que ae esta construyendo un juguete con piezas que vienen en diferentes cajas; el enlazador sería quien une todas esas piezas para completar el juguete. Además, se asegura de que todas las partes encajen correctamente y elimina las piezas que no son necesarias, para que al final haya un juguete listo y funcionando bien.
9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.
> - Para agregar cambios a un repositorio en Git, el flujo de trabajo básico comienza con la creación de una nueva rama local desde la rama principal, lo que permite trabajar en cambios sin afectar a la rama principal. Los cambios se realizan localmente en la rama, incluyendo la edición, adición o eliminación de archivos. Una vez se han hecho los cambios, se utilizan los comandos git add para seleccionar los cambios y git commit para realizar un commit de estos cambios con un mensaje descriptivo. Luego, se suben los cambios al repositorio remoto con git push, especificando la rama. A continuación, se crea una solicitud de extracción (pull request) en el repositorio remoto para que los cambios sean revisados. Si todo es aprobado, los cambios se fusionan en la rama principal. Este proceso facilita la colaboración y asegura una revisión detallada de los cambios antes de que se una al proyecto principal. 
10. Defina qué significa inicializar y declarar una variable.
> - Declarar una variable es reservar espacio en la memoria para almacenar un valor en esa variable en el futuro.
> - En cambio el inicializar es ya darle un valor a esa variable, es decir en memoria ya se guardó un valor. 
11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
> - La sobrecarga de funciones se refiere a la capacidad de tener varias funciones con el mismo nombre pero con diferentes argumentos, ya sea en cantidad o en tipo de datos. Al llamar a una función sobrecargada, se selecciona la versión más adecuada basándose en los argumentos proporcionados. Por ejemplo, si se pasa un entero como argumento, se dirigirá hacia la versión de la función diseñada para recibir un entero. Esto permite desarrollar funciones que siguen una lógica similar pero que pueden manejar distintos tipos de datos o diferentes cantidades de argumentos, evitando conflictos. 
12. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.
> - Un puntero es una variable que almacena la dirección de memoria de otra variable a la que apunta, es decir, actúa como una referencia a la ubicación en memoria de una variable. Cada puntero tiene su propia dirección de memoria y, a través de la operación de desreferenciación, es posible acceder y modificar el valor almacenado en la dirección de memoria apuntada por el puntero. Los punteros son fundamentales en la implementación de estructuras de datos complejas, ya que permiten una gestión más eficiente de las variables y sus direcciones en memoria. Una analogía sería considerar los punteros como etiquetas que indican la dirección de un conjunto de cajas. Esto facilita en la gestión de las cajas, permitiendo acceder a ellas y modificar su contenido sin necesidad de manipular las cajas directamente en todo momento. 
13. ¿Qué es un branch (rama) en Git y cómo se utiliza? 
> - En Git, un branch o rama representa una línea de desarrollo independiente, permitiendo a los desarrolladores trabajar en múltiples características o correcciones simultáneamente sin afectar la base principal del código. Esto facilita la experimentación y la colaboración al dividir el proyecto en segmentos manejables, así el flujo de trabajo es mejor y permite una integración eficiente de cambios tras la revisión y aprobación.
14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?
>-  La principal diferencia radica en el momento en que se evalúa la condición para continuar el bucle, el do-while hace la primera ejecución una sola vez antes de revisar la condición, en cambio, en el while la condición se evalúa antes de la primera ejecución. 
15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.
> - Para lograr que el código sea mantenible, escalable y legible, dividir el código en múltiples archivos es una práctica recomendada. Por ejemplo, separar los prototipos de funciones en un archivo de encabezado .hpp y las definiciones de estas funciones en un archivo de implementación .cpp facilita la tarea de revisión y mantenimiento del código. En el archivo de encabezado, se declaran las funciones, estructuras, etc. que luego se implementan en el archivo .cpp. Utilizar directivas como #ifndef en los archivos de encabezado es una buena práctica para prevenir la inclusión múltiple del mismo archivo, lo cual podría llevar a conflictos de definición. Esto se logra mediante la inclusión del archivo .hpp, que aseguran que el contenido del archivo de encabezado se procese solo una vez, incluso si se incluye múltiples veces en diferentes partes del proyecto.
Finalmente, el main.cpp contiene la lógica principal del programa, donde se hacen llamadas a las funciones definidas en otros archivos .cpp. Esta estructuración mejora la legibilidad y la organización del código. También facilita la colaboración en equipos grandes. 
16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales. 
> - En C++, las variables locales se almacenan en el stack y solo existen durante la ejecución de una función específica, mientras que las variables globales se guardan en una ubicación fija de memoria (fixed location), accesibles durante toda la ejecución del programa. Esta organización permite que las variables globales sea accesible entre diferentes funciones, a diferencia de las locales que no proporcionan esta posibilidad debido a que solo existen durante la ejecución de la función.
17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero? 
> - Al pasar por valor, se entrega una copia del argumento a la función, y cambios en esta copia no afectan al valor original. Pasar por referencia significa que se trabaja directamente con la variable original a través de su dirección de memoria, permitiendo que la función modifique su valor. Pasar por puntero es parecido a pasar por referencia, con la diferencia de que se maneja la dirección de memoria y se utiliza la desreferenciación para modificar el valor. Ambas formas, por referencia y por puntero, permiten modificar el valor original desde dentro de la función, lo único que varía es su sintaxis. 
18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.
> - Cuando se usa un puntero para apuntar a un arreglo en C++, inicialmente apunta a la primera posición del arreglo. Para acceder a todos los datos del arreglo mediante el puntero, se puede iterar a través de él utilizando aritmética de punteros o índices de arreglo directamente. Por ejemplo, si se tiene un arreglo numeros y un puntero p_numeros apuntando a él, puedes acceder a los elementos mediante *(p_numeros + i) o p_numeros[i], donde i es el índice del elemento. Esto permite recorrer y manipular todos los elementos del arreglo a través del puntero.
19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos. 
> - En C++, los punteros dobles, o punteros a punteros, son utilizados para almacenar la dirección de otro puntero. Esto significa que un puntero doble no solo tiene su propia dirección sino que también guarda la dirección de un puntero simple. Estos punteros son esenciales para la gestión de estructuras de datos complejas, facilitando la modificación de la dirección a la que apunta un puntero inicial. Son particularmente útiles para crear y manejar matrices dinámicas y listas enlazadas, donde la capacidad de modificar dinámicamente las direcciones es importante.
20. ¿Para qué se utiliza la directiva #ifndef?
> - Se utiliza para prevenir la inclusión múltiple de una función, biblioteca o variables. Funciona de manera similar a un if, primero verifica si cierto elemento no está definido y, en ese caso, procede a incluirlo. Esto ayuda a evitar conflictos. 
21. ¿Qué es el puntero this en C++?
> - En C++, cuando se habla del puntero this, se refiere a una forma de señalar al propio objeto dentro de sus métodos, es decir, una manera de decir "este objeto mismo". Una anlogía puede ser pensar en que se esta escribiendo instrucciones para decorar una habitación específica en una casa; this sería como decir "en esta habitación", diciendo que las decoraciones van precisamente donde quieres, es decir, es para acceder a los miembros de una clase.
Comparándolo con Python, this en C++ hace un trabajo similar a self, pero de manera diferente. En Python, self es un parámetro que se debe incluir explícitamente en los métodos de un objeto para referirte al objeto mismo. Es como si al dar instrucciones para decorar la habitación, se tiene que decir cada vez "en la habitación que estoy decorando ahora". Aunque this y self se usan de formas distintas en C++ y Python, pero ambos tienen el propósito de especificar que se esta trabajando con el objeto actual.
22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
> - La diferencia principal entre arreglos y listas en C++ es que un arreglo almacena sus elementos en bloques de memoria contiguos y permite el acceso directo a sus elementos mediante índices. Por otro lado, una lista es una secuencia de elementos donde cada uno está conectado al siguiente y al anterior, permitiendo inserciones y eliminaciones en cualquier punto de la lista, pero con acceso secuencial a los elementos, no directo por índices.
> + + Ejempo: En la comparación entre arreglos y listas, los arreglos, como {1, 2, 3}, requieren un esfuerzo adicional para insertar elementos en posiciones que no sean el final, ya que es necesario desplazar los elementos para hacer espacio al nuevo. Sin embargo, ofrecen la ventaja del acceso directo a sus elementos mediante índices, lo que facilita y agiliza la búsqueda de elementos específicos. Por otro lado, en las listas, como [1, 3, 4], insertar un nuevo elemento es más sencillo y eficiente debido a que solo implica ajustar los punteros, sin necesidad de mover otros elementos. Pero, esta eficiencia en la inserción y eliminación se contrapone con la desventaja de que el acceso a elementos específicos requiere recorrer secuencialmente la lista desde el principio hasta llegar al elemento deseado. 

23. Investigue qué es un memory leak.
> - Una fuga de memoria en programación sucede cuando un programa reserva memoria pero no la libera correctamente después de su uso, acumulando así memoria no accesible a lo largo del tiempo. Este problema sucede en lenguajes que requieren gestión manual de memoria, como C y C++, donde el desarrollador debe liberar explícitamente la memoria asignada. Aunque los lenguajes como Java, manejan automáticamente la liberación de memoria, aún pueden presentar fugas. Las fugas de memoria pueden llevar a una disminución del rendimiento y, eventualmente, a la falla del programa por agotamiento de los recursos de memoria. 

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