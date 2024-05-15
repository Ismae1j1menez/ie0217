CXX = g++                                 # Compilador
CXXFLAGS = $(shell wx-config --cxxflags)  # Flags de compilación para wxWidgets
LDFLAGS = $(shell wx-config --libs)       # Bibliotecas de wxWidgets

# Nombres del archivo fuente y del ejecutable
SRC = main.cpp
EXEC = main.exe

# Compila y ejecuta el programa
all: $(EXEC) run

$(EXEC):
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) -o $(EXEC)

# Limpia los exe
clean:
	rm -f $(EXEC)

# Ejecuta el programa
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run
