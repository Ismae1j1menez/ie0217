CXX = g++                                 # Compilador

# Nombres del archivo fuente y del ejecutable
SRC = main.cpp
SRC2 = expresion_reg.cpp
SRC3 = Menu.cpp
EXEC = main.exe

# Compila y ejecuta el programa
all: $(EXEC) run

$(EXEC):
	$(CXX) -o $(EXEC) $(SRC) $(SRC2) $(SRC3)

# Limpia los exe
clean:
	rm -f $(EXEC)

# Ejecuta el programa
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run
