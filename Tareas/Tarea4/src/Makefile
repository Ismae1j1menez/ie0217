# Este Makefile permite compilar y ejecutar programas en C++ de manera sencilla.
# Para usarlo, simplemente ejecuta `make P1 archivo_sin_extensión` para compilar y ejecutar un único archivo.
# Ejemplo:
#   make P1 programa
#
# Para compilar y ejecutar programas que dependen de dos  o más archivos fuente, usa:
#   make P2 archivo1 archivo2
#
# Para limpiar los archivos ejecutables y otros archivos generados, ejecuta:
#   make clean

# Se define el compilador, en este caso C++
CC=g++

# La siguiente línea evita errores para objetivos no definidos, permitiendo pasar argumentos adicionales sin acción.
# Por ejemplo al hacer make P1 programa, make no buscara una regla definida para programa, solo para P1. 
%:
	@:

# Objetivo de compilación de un solo archivo fuente
# $(filter-out $@,$(MAKECMDGOALS)) elimina el objetivo actual de la lista de argumentos,
# dejando solo los nombres de archivo adicionales para ser usados en la compilación y ejecución. Es decir al hacer
# make P1 holaMundo, permite que solo el archivo holaMundo sea el archivo a compilar quitando el objetivo P1.
P1:
	$(CC) -o $(filter-out $@,$(MAKECMDGOALS)).exe $(filter-out $@,$(MAKECMDGOALS)).cpp
	./$(filter-out $@,$(MAKECMDGOALS)).exe

# Objetivo que compila y ejecutar dos o más archivos fuente. Genera un ejecutable con el nombre del objetivo.
P2:
	$(CC) -o $(firstword $(MAKECMDGOALS)).exe $(addsuffix .cpp, $(wordlist 2, $(words $(MAKECMDGOALS)), $(MAKECMDGOALS)))
	./$(firstword $(MAKECMDGOALS)).exe

# Se limpian todos los archivos generados con extensión .exe
clean:
	rm -f *.exe

# Asegura que siempre se ejecuten los objetivos aún cuando hay archivos llamados P1, P2 o clean
.PHONY: P1 P2 clean
