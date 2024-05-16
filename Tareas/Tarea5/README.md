# Tarea 5

Este README tiene como objetivo proporcionar una descripción breve sobre la Tarea 5, las instrucciones de ejecución del programa con su respectivo Makefile, y las respuestas a la parte teórica de la respectiva tarea.

## Uso del Makefile

Para compilar y ejecutar los programas, se pueden utilizar los siguientes comandos:

- Para compilar y ejecutar el programa:
```
make all
```

- Para compilar solo el programa (sin ejecución):
```
make build
```

- Para ejecutar el programa (después de haber sido compilado):
```
make run
```

- Para limpiar el directorio de archivos ejecutables generados:
```
make clean
```

- Para compilar sin el makefile se puede usar el comando:
```
g++ -o main.exe  mainp.cpp expresion_reg.cpp Menu.cpp
```

- Para ejecutar sin el makefile se puede usar el comando:
```
./main.exe
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
https://tarea5doc.netlify.app


## Parte Teórica
1. ¿Qué es una expresión regular y cuál es su propósito en programación?
> - Una expresión regular es una herramienta que ayuda a encontrar ciertos tipos de palabras o patrones en un texto. En programación, se utilizan para hacer cosas como buscar palabras específicas, verificar si un correo electrónico está escrito correctamente o reemplazar partes de texto. Son como una especie de fórmula que le dice a la computadora qué buscar y qué hacer con lo que encuentra.

2. ¿Qué significan los caracteres especiales . y * en una expresión regular?
> - El punto (.) en una expresión regular significa cualquier letra, número o símbolo. Por ejemplo, si alguien ve c., eso podría coincidir con palabras como car, cat, can, etc.
> - El asterisco (*) en una expresión regular significa cero o más veces. Por ejemplo, si alguien tiene a, podría coincidir con a, aa, aaa, aaaaa, o incluso no tener ninguna "a" en absoluto.

3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?
> - Para agrupar subexpresiones en una expresión regular, se utilizan paréntesis (). Esto permite tratar un conjunto de caracteres o una expresión como una sola unidad. Por ejemplo, si se quiere buscar palabras que comiencen con g o h seguidas de at, podría usar la expresión regular (g|h)at. Esto agrupa las opciones gat y hat como una sola entidad en la expresión regular.

4. ¿Qué función cumple la barra invertida \ en una expresión regular?
> - La barra invertida (\\) en una expresión regular se utiliza para hacer que ciertos caracteres tengan un significado especial o para decirle al programa que tome literalmente un carácter especial en lugar de interpretarlo como parte de la expresión regular. Por ejemplo, si alguien quiere buscar un asterisco (*) en un texto, debe escribir * en la expresión regular para que el programa sepa que quiere buscar el símbolo de asterisco literalmente en lugar de interpretarlo como un comando especial. Por ejemplo, si se desea encontrar un punto en un texto, se debe usar la barra invertida para escapar el punto en la expresión regular. Esto se escribe como "\\.".
Un pequeño ejemplo sería: para encontrar el punto en el texto "abc.def", se utiliza la expresión regular abc\\.def. Esta expresión coincidirá con el texto "abc.def" porque \. está buscando específicamente el carácter punto.

5. Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.
> - En las expresiones regulares, los paréntesis () se emplean para agrupar ciertas partes de la expresión y capturar la información que coincide con esa parte. Esta capacidad de capturar hace posible guardar segmentos específicos de un texto para usarlos más tarde.
Por ejemplo, para extraer el año, mes y día de una fecha en el formato día-mes-año, se podría utilizar la expresión regular (\d{2})-(\d{2})-(\d{4}). Aquí, cada par de paréntesis captura un componente de la fecha: el primer grupo captura el día, el segundo el mes y el tercero el año. Al aplicar esta expresión a la cadena 12-08-2023, se capturan los grupos 12, 08 y 2023 respectivamente.

6. ¿Cuál es la diferencia entre \d y \D en una expresión regular?
> - En las expresiones regulares, \d se usa para encontrar cualquier dígito numérico, es decir, cualquier número del 0 al 9. Por otro lado, \D busca cualquier cosa que no sea un dígito numérico, como letras, símbolos o espacios.
Por ejemplo, si se tiene la cadena abc123def, usando la expresión regular \d, se encontrarían los dígitos 123. Si se usa \D, se encontrarían las partes abc y def de la cadena.

7. ¿Cómo se representa una clase de caracteres en una expresión regular?
> - En las expresiones regulares, una clase de caracteres se representa utilizando corchetes []. Dentro de estos corchetes, se pueden especificar múltiples caracteres que formarán parte de la clase. Cualquier carácter dentro de los corchetes se considera una coincidencia válida para esa posición en la cadena de texto que se está analizando.
Por ejemplo, si se quiere buscar las letras a, e, o i en una cadena, se puede usar la clase de caracteres [aei]. Esto coincidirá con cualquier lugar de la cadena donde aparezca alguna de estas tres letras. Si se aplica esta clase de caracteres a la cadena hello, encontraría coincidencias en las letra e y i.

8. ¿Cuál es el propósito del modificador $ en una expresión regular?
> - El modificador \$ en una expresión regular se utiliza para representar el final de una línea o de una cadena de texto. Este metacaracter asegura que la coincidencia se realice sólo si el patrón especificado se encuentra al final del texto.
Por ejemplo, si se quiere verificar que una cadena termine con la palabra fin, se podría usar la expresión regular fin$. Al aplicar esta expresión a la cadena (Todo tiene un fin), se encontraría una coincidencia porque la cadena termina exactamente con la palabra fin.

9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++.
> - Para validar una dirección de correo electrónico usando expresiones regulares en C++, se puede emplear la biblioteca <regex>, que proporciona soporte completo para expresiones regulares.
Entonces primero, se define la expresión regular para un correo electrónico. Un patrón básico podría ser ^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$. Este patrón asegura que el correo comience con caracteres alfanuméricos (incluidos algunos caracteres especiales como puntos y guiones), seguido de un símbolo @, luego más caracteres alfanuméricos, un punto, y termina con dos o más caracteres alfabéticos para el dominio. Esto es solo un ejemplo, para este ejercicio cambia la expresión de acuerdo a las especificacion de la tarea.

10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?
> - Las expresiones regulares son útiles pero pueden ser lentas si son muy complicadas, especialmente en aplicaciones que necesitan procesar información rápidamente. Usar expresiones regulares complejas puede consumir mucho tiempo y recursos de la computadora, lo que puede hacer que las aplicaciones sean más lentas.
Para mejorar el rendimiento, es bueno precompilar las expresiones regulares si se van a usar muchas veces. También, diseñar patrones que eviten revisar partes innecesarias del texto puede hacer que la búsqueda sea más rápida. Por ejemplo, si se necesita verificar si una cadena de texto termina en .com, usar la expresión regular \\.com$ asegura que sólo se busque al final de la cadena, en lugar de revisar toda la cadena, lo cual es más eficiente.

11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?
> - Un Makefile es útil para decirle al programa make cómo compilar el proyecto. Ayuda a automatizar tareas repetitivas como la compilación de múltiples archivos y la gestión de dependencias entre ellos, lo que facilita mucho el proceso de desarrollo.

12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?
> - En un Makefile, las reglas explícitas y las reglas implícitas son dos formas de decirle a make cómo construir los archivos. Las reglas explícitas detallan paso a paso cómo se debe construir cada archivo específico, mencionando los archivos necesarios para el proceso y los comandos exactos para ejecutar. Por otro lado, las reglas implícitas usan patrones generales que aplican la misma lógica de construcción a varios archivos sin necesidad de escribir una regla para cada uno.
```
# Ejemplo regla explicita
# Construye 'programa' a partir de 'main.o' y 'utils.o'
programa: main.o utils.o
	g++ -o programa main.o utils.o

```
```
# Ejemplo regla implicita
# Regla para compilar cualquier archivo .o de un archivo .cpp
%.o: %.cpp
	g++ -c $< -o $@

```

13. Explique el propósito de las macros (variables) en un Makefile.
> - En un Makefile, las macros o variables permiten almacenar valores que se pueden reutilizar en varias veces en el mismo Makefile. Esto ayuda a hacer que el archivo sea más fácil de leer y mantener, porque se pueden hacer cambios en un solo lugar en lugar de actualizar muchos comandos individualmente. Por ejemplo, se pueden almacenar nombres de compiladores, banderas de compilación, o rutas de directorios, y usar estos valores en múltiples comandos.

14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?
> - Un objetivo en un Makefile es básicamente el nombre del archivo que se quiere crear con make. Se escribe el nombre del archivo, seguido de dos puntos, y luego se listan los archivos que se necesitan para crearlo. Esto ayuda a make a saber qué necesita hacer para construir o actualizar ese archivo.
```
# Ejemplo simple de un objetivo en un Makefile:
programa: main.o utils.o
	g++ -o programa main.o utils.o
```


15. ¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?
> - Dividir un proyecto de C++ en múltiples archivos fuente ayuda a mantener el código ordenado y manejable. Al tener diferentes partes del programa en archivos separados, es más fácil trabajar en pequeñas secciones a la vez, lo cual es especialmente útil cuando muchas personas colaboran en el mismo proyecto.
Los Makefiles son herramientas que facilitan trabajar con muchos archivos en C++. Permiten automatizar la tarea de construir el programa, diciéndole a la computadora cómo usar todos los archivos juntos para crear el programa final. Esto es especialmente importante porque asegura que solo se vuelvan a compilar las partes que han cambiado, ahorrando tiempo y esfuerzo.

16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?
> - En un Makefile, se pueden definir dependencias diciendo que un archivo necesita otros archivos para ser creado. Por ejemplo, un programa puede necesitar que se compilen primero algunos archivos de código para funcionar. Por ejemplo, si se tiene un archivo main.o que depende de main.cpp y utils.h, se escribe así en el Makefile:
```
main.o: main.cpp utils.h
	g++ -c main.cpp -o main.o
```

17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.
> - Para compilar un proyecto en diferentes sistemas operativos usando un Makefile, se pueden usar condiciones que verifiquen en qué sistema operativo está corriendo el Makefile. Según el sistema, se pueden usar diferentes comandos o configuraciones para compilar el proyecto.

18. ¿Cuál es el propósito de los comandos clean y all en un Makefile?
> - En un Makefile, el comando clean se usa para borrar todos los archivos que se crearon al compilar, para empezar de nuevo limpio. El comando all se usa para decirle a Make que construya todos los objetivos principales listados en el Makefile.

19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.
> - Se pueden pasar argumentos desde la línea de comandos a un Makefile usando variables. Cuando se ejecuta el Makefile, se pueden agregar estos argumentos para cambiar cómo se compila el proyecto, como cambiar el compilador o las opciones de compilación.

20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente .cpp a un archivo objeto .o.
Un ejemplo de una regla en un Makefile que compila un archivo .cpp a un archivo .o podría ser escribir que para hacer archivo.o, se necesita archivo.cpp, y luego dar el comando para compilar archivo.cpp y crear archivo.o.
```
# Ejemplo
archivo.o: archivo.cpp
	g++ -c archivo.cpp -o archivo.o
```

## Parte Teórica Parte Automatización - Makefile
1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?
> - En un Makefile, las variables CC y CXX guardan los nombres de los programas que compilan el código C y C++ respectivamente. CFLAGS y CXXFLAGS son opciones que le dicen al compilador cómo debe compilar el código, como más rápido o más seguro. LDFLAGS contiene opciones para el enlazador, que es el programa que junta los archivos compilados en un solo programa.

2. ¿De qué se compone una regla en un Makefile?
> - Una regla en un Makefile se compone de tres partes: un objetivo que es el archivo que se quiere crear, las dependencias que son los archivos necesarios para crear el objetivo, y los comandos que especifican cómo usar las dependencias para crear el objetivo.

3. Defina qué es un target y cómo se relaciona con sus prerequisitos.
> - Un objetivo en un Makefile es un archivo que se quiere crear, como un programa. Los prerequisitos son archivos que se necesitan para crear ese objetivo, como partes del código. Si los prerequisitos cambian, el objetivo necesita ser creado de nuevo usando esos cambios.

4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?
> - En el compilador gcc, la bandera -I se usa para decirle al compilador dónde buscar archivos adicionales que necesita cuando compila el código. La bandera -c le dice que solo compile el código sin crear un programa, y la bandera -o le dice dónde guardar el archivo que crea.

5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?
> - En un Makefile, las variables se definen dando un nombre y asignándole un valor. Estas variables se usan para guardar información que se usa muchas veces, como el nombre del compilador o las opciones de compilación. Esto hace más fácil cambiar la información en un solo lugar si es necesario.


6. ¿Qué utilidad tiene un @ en un Makefile?
> - El símbolo @ en un Makefile se usa para no mostrar el comando que se está ejecutando, lo que hace que la salida en la terminal sea más limpia y fácil de leer.

7. ¿Para qué se utiliza .PHONY en un Makefile?
> - .PHONY en un Makefile se utiliza para decirle a make que un objetivo no es realmente un archivo, sino solo un nombre para un grupo de comandos. Esto es útil para acciones como limpiar archivos temporales, donde el comando no crea un archivo nuevo, pero sí realiza una acción importante.



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