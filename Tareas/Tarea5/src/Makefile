CXX = g++ # Compilador

# Nombres del archivo fuente y del ejecutable
SRC = main.cpp
SRC2 = expresion_reg.cpp
SRC3 = Menu.cpp
EXEC = tarea5.x

# Compila y ejecuta el programa
all: build run

# Compila el código fuente y genera el ejecutable
build: $(EXEC)

$(EXEC):
	$(CXX) -o $(EXEC) $(SRC) $(SRC2) $(SRC3)

# Limpia el directorio de archivos compilados
clean:
	rm -f $(EXEC)

# Ejecuta el programa
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run build
