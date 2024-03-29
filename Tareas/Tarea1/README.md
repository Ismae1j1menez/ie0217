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



### Instrucciones Detalladas

El Makefile incluye instrucciones detalladas para su uso. Es importante escribir exactamente el nombre del archivo sin errores para asegurar su correcta ejecución.

## Parte Teórica

1. ¿Cuál es la principal diferencia entre C y C++?
> La principal diferencia entre C y C++ es que C++ es un lenguaje de programación orientado a objetos.
**Listo**
2. Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.
> - git init se utiliza para poder iniciar un repositorio local. 
> - git add se utiliza para agregar los archivos seleccionados al próximo commit, es decir, añade archivos al área de preparación (staging area) para que sean incluidos en el siguiente commit.
> - git commit se utiliza para guardar los cambios que están en el área de preparación en el repositorio local, acompañados de un mensaje descriptivo.
> - git push se utiliza para subir los commits realizados en el repositorio local a un repositorio remoto, por ejemplo GitHub.
> - git pull se utiliza para  traer los cambios desde el repositorio remoto y los fusiona con la rama local.
> - git clone se utiliza para clonar un repositorio remoto y traerlo al repositorio local, es una copia.
> - git branch se utiliza para gestionar ramas en el repositorio. Con este comando, puedes crear nuevas ramas, y al utilizarlo con opciones como -D, es posible eliminarlas.
> - git merge se utiliza para unir dos ramas dentro del mismo repositorio local. **Listo**
3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?
> - Git es un sistema de control de versiones que permite a los desarrolladores mantener diversas versiones de su trabajo en sus computadoras locales. GitHub, por otro lado, tiene la capacidad de que sea todavía más útil al ofrecer un servicio de almacenamiento en la nube. Este es importante para facilitar la colaboración dentro de equipos de trabajo y mantener el código organizado, especialmente en proyectos con un gran número de colaboradores. **Listo**
4. ¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?
> - Ocurre cuando se intenta fusionar dos ramas que contienen cambios contradictorios y Git no puede decidir automáticamente cuál versión mantener. Para resolverlo, se debe editar manualmente los archivos, luego usar git add para marcarlos como resueltos, y finalmente git commit para completar la fusión. **Listo**
5. ¿Qué es un archivo .gitignore y para qué se utiliza?
> - Es utilizado para excluir ciertos archivos dada su extensión. Por ejemplo, los archivos .exe, que son ejecutables binarios y sin ningun valor, pueden ser incluidos en .gitignore para que sean ignorados por el repositorio local. Esto ayuda a mantener limpio el repositorio. **Listo**
6. ¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?
> - En Git, se trabaja con ramas, que son copias de la rama principal. El propósito es permitir realizar cambios sin afectar la rama principal, asegurando así que el desarrollo principal se mantenga sin riesgos de estropear el proyecto. Cuando los cambios están listos, se crea una solicitud de extracción (pull request), con el objetivo de que estos cambios sean revisados. Esto permite solicitar modificaciones o mejoras antes de realizar la fusión (merge) de las ramas de trabajo con la rama principal, facilitando la colaboración y el mantenimiento del código. **Listo**
7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?
> - Lenguaje interpretado es ejecutado línea por línea, lo que significa que si se encuentra un error durante la ejecución, el proceso se detiene inmediatamente. Sin embargo, hasta que se encuentra el error, el programa se ejecuta de manera normal. Python y JavaScript son ejemplos de lenguajes interpretados.
> - Lenguaje compilado, requiere que todo el código sea compilado antes de su ejecución. Si se detecta un error, este se identifica durante el proceso de preprocesamiento, antes de la ejecución del programa. Este proceso de compilación genera un archivo ejecutable en lenguaje máquina o binario, el cual es ejecutable. **Listo**
8. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación? **Investigar**
9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.
> - Para agregar cambios a un repositorio en Git, el flujo de trabajo básico comienza con la creación de una nueva rama local desde la rama principal, lo que permite trabajar en cambios sin afectar a la rama principal. Los cambios se realizan localmente en la rama, incluyendo la edición, adición o eliminación de archivos. Una vez se han hecho los cambios, se utilizan los comandos git add para seleccionar los cambios y git commit para realizar un commit de estos cambios con un mensaje descriptivo. Luego, se suben los cambios al repositorio remoto con git push, especificando la rama. A continuación, se crea una solicitud de extracción (pull request) en el repositorio remoto para que los cambios sean revisados. Si todo es aprobado, los cambios se fusionan en la rama principal. Este proceso facilita la colaboración y asegura una revisión detallada de los cambios antes de que se una al proyecto principal. **Listo**
10. Defina qué significa inicializar y declarar una variable.
> - Declarar una variable es reservar espacio en la memoria para almacenar un valor en esa variable en el futuro.
> - En cambio el inicializar es ya darle un valor a esa variable, es decir en memoria ya se guardó un valor. **Listo**
11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
> - La sobrecarga de funciones se refiere a la capacidad de tener varias funciones con el mismo nombre pero con diferentes argumentos, ya sea en cantidad o en tipo de datos. Al llamar a una función sobrecargada, se selecciona la versión más adecuada basándose en los argumentos proporcionados. Por ejemplo, si se pasa un entero como argumento, se dirigirá hacia la versión de la función diseñada para recibir un entero. Esto permite desarrollar funciones que siguen una lógica similar pero que pueden manejar distintos tipos de datos o diferentes cantidades de argumentos, evitando conflictos. **Listo**
12. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.
> - Un puntero es una variable que almacena la dirección de memoria de otra variable a la que apunta, es decir, actúa como una referencia a la ubicación en memoria de una variable. Cada puntero tiene su propia dirección de memoria y, a través de la operación de desreferenciación, es posible acceder y modificar el valor almacenado en la dirección de memoria apuntada por el puntero. Los punteros son fundamentales en la implementación de estructuras de datos complejas, ya que permiten una gestión más eficiente de las variables y sus direcciones en memoria. Una analogía sería considerar los punteros como etiquetas que indican la dirección de un conjunto de cajas. Esto facilita en la gestión de las cajas, permitiendo acceder a ellas y modificar su contenido sin necesidad de manipular las cajas directamente en todo momento. **Listo**
13. ¿Qué es un branch (rama) en Git y cómo se utiliza? **Investigar**
14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?
>-  La principal diferencia radica en el momento en que se evalúa la condición para continuar el bucle, el do-while hace la primera ejecución una sola vez antes de revisar la condición, en cambio, en el while la condición se evalúa antes de la primera ejecución. **Listo**
15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.
> - Para lograr que el código sea mantenible, escalable y legible, dividir el código en múltiples archivos es una práctica recomendada. Por ejemplo, separar los prototipos de funciones en un archivo de encabezado .hpp y las definiciones de estas funciones en un archivo de implementación .cpp facilita la tarea de revisión y mantenimiento del código. En el archivo de encabezado, se declaran las funciones, estructuras, etc. que luego se implementan en el archivo .cpp correspondiente. Utilizar directivas como #ifndef en los archivos de encabezado es una buena práctica para prevenir la inclusión múltiple del mismo archivo, lo cual podría llevar a conflictos de definición. Esto se logra mediante la inclusión del archivo .hpp, que aseguran que el contenido del archivo de encabezado se procese solo una vez, incluso si se incluye múltiples veces en diferentes partes del proyecto.
Finalmente, el main.cpp contiene la lógica principal del programa, donde se hacen llamadas a las funciones definidas en otros archivos .cpp. Esta estructuración mejora la legibilidad y la organización del código. También facilita la colaboración en equipos grandes. **Listo**
16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales. **Investigar** 
17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero? **Investigar** 
18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero. **Investigar** 
19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos. **Investigar** 
20. ¿Para qué se utiliza la directiva #ifndef?
> - Se utiliza para prevenir la inclusión múltiple de una función, biblioteca o variables. Funciona de manera similar a un if, primero verifica si cierto elemento no está definido y, en ese caso, procede a incluirlo. Esto ayuda a evitar conflictos. **Listo**
21. ¿Qué es el puntero this en C++? **Investigar**
22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
> - La diferencia principal entre arreglos y listas en C++ es que un arreglo almacena sus elementos en bloques de memoria contiguos y permite el acceso directo a sus elementos mediante índices. Por otro lado, una lista es una secuencia de elementos donde cada uno está conectado al siguiente y al anterior, permitiendo inserciones y eliminaciones en cualquier punto de la lista, pero con acceso secuencial a los elementos, no directo por índices.
> + + Ejempo: En la comparación entre arreglos y listas, los arreglos, como {1, 2, 3}, requieren un esfuerzo adicional para insertar elementos en posiciones que no sean el final, ya que es necesario desplazar los elementos existentes para hacer espacio al nuevo. Sin embargo, ofrecen la ventaja del acceso directo a sus elementos mediante índices, lo que facilita y agiliza la búsqueda de elementos específicos. Por otro lado, en las listas, como [1, 3, 4], insertar un nuevo elemento es más sencillo y eficiente debido a que solo implica ajustar los punteros de los nodos afectados, sin necesidad de mover otros elementos. No obstante, esta eficiencia en la inserción y eliminación se contrapone con la desventaja de que el acceso a elementos específicos requiere recorrer secuencialmente la lista desde el principio hasta llegar al elemento deseado. (UNAM, s.f.)

23. Investigue qué es un memory leak. **Investigar**

## Referencias
- UNAM. (s.f.). Arreglos y Listas. Recuperado de https://repositorio-uapa.cuaieed.unam.mx/repositorio/moodle/pluginfile.php/1469/mod_resource/content/1/contenido/index.html