# Tarea 2

Este README tiene como objetivo proporcionar una descripción breve sobre la Tarea 2, las instrucciones de ejecución del programa con su respectivo Makefile, y las respuestas a la parte teórica de la respectiva tarea.

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

- Para compilar la tarea 2 se usa el comando:
```
make P2 Continentes Funciones main Pais Planeta Paisendesarrollo Paisprimermundo
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


## Instrucciones Detalladas de Uso
    
El Makefile proporciona instrucciones claras para su adecuada utilización. Es crucial introducir el nombre del archivo de manera precisa, sin errores, para garantizar su correcta ejecución. Dado que se manejan cuatro archivos y los archivos con extensión `.hpp` no requieren compilación, se debe emplear el comando `P2` para compilar los archivos `main.cpp` y `Funciones.cpp`.

## Instrucciones para el Juego


### Secuencia de Juego



## Parte Teórica

1. ¿Qué es la programación orientada a objetos y cuáles son sus principales principios?
> - Es un estilo de programación que usa objetos. Este objeto es como un molde que se puede usar muchas veces para crear partes específicas de un programa. Cada objeto en el programa puede representar algo del mundo real, como un usuario, un auto, o incluso una transacción bancaria, y puede guardar información y realizar acciones relacionadas con ese objeto. Tiene cuatro principales principios: la encapsulación, abstracción, polimorfismo y herencia. **Listo**

2. Explique el concepto de ocultamiento de datos y cómo se logra en C++.

3. ¿Cuál es la diferencia entre una clase y un objeto en C++?
> - Se piensa en una clase como un molde. Es una definición que describe qué datos y comportamientos tendrá el objeto que se cree a partir de ella, básicamente una descripción o un conjunto de instrucciones.
> - Mientras el objeto es una instancia de una clase. Cuando se utiliza el molde (clase) para crear algo real, ese producto es el objeto. **Listo**

4. ¿Qué es el polimorfismo y cómo se logra en C++?
> - El polimorfismo significa que un mismo método puede actuar de diferentes maneras dependiendo del objeto que lo use. Se utiliza principalmente con funciones virtuales. Por ejemplo, si se tiene una clase Animal con un método virtual llamado sonido, entonces C++ espera que las clases derivadas, como Perro y Gato, implementen su propio método sonido. Así, Perro tendra un método sonido que simule un ladrido y Gato uno que simule un maullido. Esto significa que el comportamiento del método sonido depende de la clase que lo herede. **Listo**

5. ¿Qué significa el término encapsulamiento en el contexto de la OOP?
> - Se refiere a ocultar los detalles internos de cómo una clase realiza sus operaciones, manteniendo accesible para las demás clases únicamente las características y comportamientos que se deseen. Esto se logra mediante el uso de modificadores de acceso como privado, protegido y público, que controlan el acceso a los miembros de la clase desde diferentes partes del programa. El encapsulamiento no solo mejora la seguridad, sino que también facilita la legibilidad y mantenibilidad del código. **Listo**

6. ¿Cuál es el propósito del constructor y el destructor en una clase de C++?
> - Constructor: Es un método especial que se ejecuta automáticamente al instanciar un objeto de una clase. Es decir, es el primer método que se ejecuta al crear un objeto. Esto lo hace útil para inicializar variables, reservar recursos, o realizar cualquier configuración inicial necesaria.
> - Destructor: Al contrario del constructor, el destructor es un método que se ejecuta automáticamente cuando un objeto deja de existir, es decir, cuando su ciclo de vida termina. Este es el último método que se llama en una clase y es útil para liberar recursos que el objeto haya reservado, como memoria o lectura de archivos. **Listo**

7. ¿Investigue cómo se define una clase abstracta en C++ y cuál es su función?
8. ¿Investigue qué es un constructor de copia y para qué se utiliza en C++?
9. ¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian?
10. ¿Qué son las clases anidadas y cuál es su utilidad en C++?
> - Son clases definidas dentro de otra clase, se le conocen como clases internas. Estas clases internas tienen acceso a los miembros de la clase que las contiene, incluso si estos son privados o protegidos. Es útil porque al usar clases anidadas se usa el concepto de encapsulamiento, estos significa que si la clase está diseñada únicamente para ser utilizado por otra clase, anidarla permite ocultarla para el resto del programa. **Listo**

11. En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden
utilizar los punteros para trabajar con objetos y clases? Explique también por qué los
punteros a objetos son útiles en la programación orientada a objetos.
> - Los punteros a objetos son especialmente útiles para implementar el polimorfismo. Usando punteros a una clase base, puedes acceder a métodos de clases derivadas que han redefinido métodos virtuales de la clase base. Esto permite que un mismo puntero a la clase base ejecute diferentes comportamientos dependiendo del tipo específico de objeto derivado al que apunta. **Listo**

12. ¿Qué es una función prototipo?
> - Un prototipo de función es una declaración que indica al compilador la existencia de una función que será definida más adelante en el código. Esta declaración no incluye el cuerpo de la función, es decir, no define su comportamiento, sino que solo especifica su tipo de retorno, nombre y parámetros. Los prototipos son comunes en los archivos de encabezado (.hpp) y se utilizan junto con directivas de preprocesador (#ifndef, #define, #endif) para gestionar si estas funciones ya han sido definidas en otra parte del código, ayudando a evitar múltiples definiciones y errores de compilación. **Listo**

13. ¿Explique los diferentes tipos de miembros que existen en la OOP?
> - En la programación orientada a objetos, existen tres tipos de miembros: públicos, privados y protegidos. Los miembros públicos son accesibles tanto desde dentro como desde fuera de la clase, lo que permite que cualquier parte del programa los utilice. Los miembros privados, en cambio, solo pueden ser accedidos por la clase que los declara y por cualquier función o clase amiga. Por último, los miembros protegidos son accesibles dentro de la clase que los declara, por sus clases derivadas y también por funciones o clases amigas. **Listo**

14. ¿Qué es un memory leak?
> - Una fuga de memoria en programación sucede cuando un programa reserva memoria pero no la libera correctamente después de su uso, acumulando así memoria no accesible. Este problema sucede en lenguajes que requieren gestión manual de memoria, como C y C++. Las fugas de memoria pueden llevar a una disminución del rendimiento y, eventualmente, a la falla del programa por agotamiento de los recursos de memoria. **Listo**

15. ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de
C+?
> - Herencia Multinivel: Este tipo de herencia ocurre cuando una clase deriva de otra clase, que a su vez es derivada de otra. Por ejemplo, si tenemos una clase base A, una clase B que hereda de A, y una clase C que hereda de B, entonces C heredará las características tanto de A como de B. Es importante porque facilita la extensión de funcionalidades de forma natural, donde cada clase en la cadena puede ampliar o modificar las características de las clases pasadas.
> - Herencia Múltiple: La herencia múltiple permite que una clase derive de más de una clase base. Por ejemplo, si tenemos dos clases base, A y B, una clase C puede heredar las características de ambas clases A y B. La importancia de la herencia múltiple está en su capacidad para combinar múltiples comportamientos y atributos de diferentes clases base en una única clase derivada. Esto es útil en el diseño de clases.
> - Herencia Jerárquica: Se refiere a una estructura donde una clase base es heredada por varias clases. Esto genera una jerarquía de clases donde la clase base se encuentra en la cima, y sus clases derivadas pueden a su vez ser bases para otras clases. Este tipo de herencia es útil cuando varias clases comparten características comunes pero también tienen sus propias características especiales. **Listo**

16. ¿Qué es la composición y cómo se implementa en C++?
17. ¿Qué es la sobreescritura de funciones en C++ y cuando es bueno usarla?
> - La sobreescritura de funciones en la programación orientada a objetos (OOP) ocurre cuando un método de una clase base es reescrito en una clase derivada. Esto es común y útil con funciones virtuales, donde se espera que las clases derivadas proporcionen su propia versión del método. La sobreescritura es buena usarla cuando un método de la clase base no se ajusta a las necesidades de la clase derivada, permitiendo adaptar dicho método para que funcione de mejor manera para la nueva clase. **Listo**


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