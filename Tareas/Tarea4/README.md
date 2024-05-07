# Tarea 3

Este README tiene como objetivo proporcionar una descripción breve sobre la Tarea 3, las instrucciones de ejecución del programa con su respectivo Makefile, y las respuestas a la parte teórica de la respectiva tarea.

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
1. ¿Qué es un algoritmo y cuáles son sus características principales?
> - Un algoritmo es un conjunto de instrucciones bien definidas para resolver un problema específico. Este toma un conjunto de entradas y produce un resultado.
>   - Sus características son:
>     - Las entradas y salidas deben definirse con precisión.
>     - Cada paso del algoritmo debe ser claro e inequívoco.
>     - Los algoritmos deberían ser más eficaces entre las diversas formas de resolver un problema.
>     - Un algoritmo no debería incluir código informático. Debe escribirse de tal manera que pueda utilizarse en diferentes lenguajes de programación.

2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.
> - La eficiencia de un algoritmo se refiere a su capacidad para utilizar de manera efectiva los recursos disponibles. Un algoritmo eficiente realiza la tarea en la menor cantidad de tiempo y utilizando la menor cantidad de memoria posible. Por el contrario, un algoritmo ineficiente no cumple con estos requisitos.

3. ¿Qué es una estructura de datos y por qué son importantes?
> - Una estructura de datos es un sistema de almacenamiento que almacena y organiza datos. Representa una forma de organizar los datos en una computadora para que puedan ser accedidos y actualizados de manera eficiente.

4. Describe las diferencias entre una estructura de datos estática y una dinámica.
> - Diferencias entre estructuras de datos estáticas y dinámicas:
Una estructura de datos estática es aquella cuyo tamaño y estructura se definen durante la compilación y no pueden cambiar en tiempo de ejecución. Por ejemplo, los arreglos tienen un tamaño fijo que se debe especificar cuando se compilan. Por otra parte, una estructura de datos dinámica puede modificar su tamaño y estructura durante la ejecución del programa. Esto es posible gracias a la memoria asignada en el heap, lo que permite que la estructura se expanda o contraiga según sea necesario. Ejemplos de estructuras dinámicas incluyen listas enlazadas, árboles, y grafos, entre otros.

5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como
C++, explique las operaciones que se pueden realizar?
> - La memoria dinámica en C++ es un segmento de memoria en el heap que se puede asignar y modificar durante la ejecución de un programa usando comandos como malloc(), calloc(), y new para reservar espacio. Esta memoria debe ser explícitamente liberada utilizando free() o delete para evitar fugas de memoria, asegurando así que los recursos estén disponibles para otros usos o programas.

6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la
memoria estática?
> - La memoria dinámica permite ajustar el tamaño de las estructuras de datos mientras el programa está en funcionamiento, ofreciendo más flexibilidad que la memoria estática, cuyo tamaño y estructura se fijan al compilar y no se pueden cambiar después. Pero, usar memoria dinámica da más trabajo, ya que se debe asegurar de liberar la memoria adecuadamente para evitar el desperdicio de recursos, y pueda ralentizar el programa. Por otro lado, la memoria estática es más rápida y fácil de manejar.

7. Explique qué es un árbol binario y cuáles son sus principales características.
> - Un árbol binario es una estructura de datos en forma de árbol en la que cada nodo padre puede tener como máximo dos hijos. Cada nodo de un árbol binario consta de tres elementos: datos, dirección del hijo izquierdo y dirección del hijo derecho.

8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?
> - Una cola (queue) es una estructura de datos que funciona como la fila en una tienda: el primero que llega es el primero en ser atendido. Esto se conoce como (primero en entrar, primero en salir). Las colas se usan en situaciones donde es importante mantener el orden de llegada, como en el manejo de tareas que deben procesarse en el orden que llegaron, por ejemplo, en la impresión de documentos o en el manejo de la espera de los usuarios en un servicio en línea.

9. ¿Cuál es la diferencia entre una cola (queue y una pila (stack))?
> - La principal diferencia entre una queue y un stack es el orden en el que se añaden y se sacan los datos. En una cola, el primer elemento que se añade es también el primero en ser sacado, siguiendo la regla del (primero en entrar, primero en salir). En cambio, en una pila, el último elemento que se añade es el primero en ser sacado, lo cual se conoce como (último en entrar, primero en salir). Ambas estructuras organizan los datos en orden, pero de maneras contrarias.

10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.
> - En una tabla hash, cuando se inserta un nuevo dato, primero se utiliza una función hash que transforma la entrada en una clave numérica. Esta clave numérica, después de aplicar un método para ajustarla al tamaño de la tabla, determina el índice en el que se debe guardar el dato dentro de la tabla. Sin embargo, puede ocurrir que dos entradas diferentes produzcan el mismo índice, conocido como colisión. Para manejar estas colisiones, se puede utilizar una de varias estrategias, como enlazar una lista dentro de cada índice de la tabla, donde cada nuevo elemento que colisiona se añade a la lista. Este método permite que las inserciones sean generalmente muy rápidas, típicamente en tiempo constante O(1), y facilita la búsqueda eficiente de datos utilizando la clave de entrada.

11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas
hash?
> - Una función hash, es un algoritmo que toma un conjunto de datos de entrada (como una clave) y los transforma en un número que representa una posición en una tabla hash. La calidad de una función hash es importante porque determina cómo se distribuyen los datos a lo largo de la tabla, lo cual afecta directamente la eficiencia de las operaciones de búsqueda, inserción y eliminación.
La importancia de una buena función de dispersión en las tablas hash  esta en su capacidad para minimizar las colisiones. Menos colisiones significan un acceso más rápido a los datos y un mejor rendimiento general del sistema de almacenamiento. Por ello, una función hash debe ser rápida de calcular y capaz de distribuir uniformemente las entradas.


12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?
> - Tiene una complejidad constante de O(1)

13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).
> - La operación de inserción, o push, en una pila se puede comparar con apilar platos uno encima de otro. Cada vez que se añade un nuevo plato (elemento), se coloca en la parte superior de la pila. Este elemento se convierte en el primero que se retirará cuando se realice la próxima extracción o pop. Este proceso es directo: el último elemento que se añade es el primero en salir, siguiendo la regla de último en entrar, primero en salir.

14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop)
en una pila?
> - Ambas operaciones, apilar (push) y desapilar (pop) en una pila, tienen una complejidad temporal de O(1). Esto se debe a que ambas manipulan siempre el último elemento del stack.

15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.
> - Una lista enlazada es una estructura de datos compuesta por nodos, donde cada nodo contiene datos y una referencia a la dirección del siguiente nodo. Esta estructura ofrece varias ventajas, como la facilidad para insertar o eliminar nodos, lo que permite que estas operaciones se realicen de manera eficiente sin necesidad de reorganizar toda la estructura. Sin embargo, también presenta desventajas, como un acceso secuencial que puede resultar lento para listas grandes, ya que requiere recorrer la lista desde el principio para acceder a elementos específicos. Además, cada nodo requiere espacio adicional para almacenar la referencia del siguiente nodo, lo que implica un mayor consumo de memoria.


16. ¿Qué es un nodo en una lista enlazada y qué contiene?
> - Un nodo en una lista enlazada es un elemento importante de esta estructura (es la base), que actúa como punto de conexión con otro nodo. Contiene información, o datos, y además incluye la dirección del próximo nodo, permitiendo así la secuencia enlazada entre los elementos de la lista.


17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente
enlazada?
> - La principal diferencia entre una lista enlazada simple y una doblemente enlazas esta en la estructura de sus nodos. En la lista enlazada simple, cada nodo contiene los datos y la dirección del siguiente nodo. En cambio, en una lista enlazada doblemente, cada nodo incluye los datos, la dirección del siguiente nodo y también la dirección del nodo anterior, permitiendo recorridos en ambas direcciones.

18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?
> - Para eliminar un nodo en una lista enlazada, primero se debe considerar si el nodo fue creado dinámicamente. Dependiendo de su posición, el proceso varía:
Si el nodo a eliminar es el primero, simplemente se reasigna el nodo cabeza (head) al siguiente nodo en la lista.
Si el nodo no es el primero, se ajusta la conexión del nodo anterior para que apunte directamente al nodo siguiente del que se va a eliminar.
En ambos casos, después de reajustar las referencias, es importante liberar la memoria ocupada por el nodo que se está eliminando.

19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.
> - El algoritmo de recorrido en un árbol binario permite visitar todos los nodos del árbol. Existen varios métodos de recorrido, cada uno con un orden específico para acceder a los nodos.
>   - Los tres principales son:
>     - Preorden (Preorder Traversal): En este método, primero se visita la raíz del árbol, luego se recorre el subárbol izquierdo, y finalmente el subárbol derecho. 
>     - Inorden (Inorder Traversal): Se comienza recorriendo el subárbol izquierdo, luego se visita la raíz, y finalmente el subárbol derecho.
>     - Los algoritmos deberían ser más eficaces entre las diversas formas de resolver un problema.
>     - Postorden (Postorder Traversal): Primero se explora el subárbol izquierdo, luego el derecho, y por último la raíz. 


20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden
en un árbol binario balanceado?
> - La complejidad temporal de los recorridos en preorden, en orden y en postorden en un árbol es O(n) para cada uno. Esto se debe a que cada nodo del árbol es visitado exactamente una vez durante el recorrido transversal.

21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis
de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo
y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.
> - La notación Big O (O) y la notación Omega (Ω) son métodos para describir los límites de tiempo de ejecución de un algoritmo. Big O indica el máximo tiempo que un algoritmo podría tomar, el peor caso. Omega muestra el tiempo mínimo necesario, el mejor caso. Por ejemplo, en la búsqueda lineal, la complejidad Big O es O(n) porque en el peor caso se revisa cada elemento, mientras que la complejidad Omega es Ω(1), ocurriendo cuando el primer elemento es el buscado.

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