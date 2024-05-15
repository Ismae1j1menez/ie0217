CXX = g++                                 # Compilador
CXXFLAGS = $(shell wx-config --cxxflags)  # Flags de compilación para wxWidgets
LDFLAGS = $(shell wx-config --libs)       # Bibliotecas de wxWidgets

# Nombres del archivo fuente y del ejecutable
SRC = MyApp.cpp
SRC2 = MainFrame.cpp
EXEC = MainFrame.exe

# Compila y ejecuta el programa
all: $(EXEC) run

$(EXEC):
	$(CXX) $(SRC) $(SRC2) $(CXXFLAGS) $(LDFLAGS) -o $(EXEC)

# Limpia los exe
clean:
	rm -f $(EXEC)

# Ejecuta el programa
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run