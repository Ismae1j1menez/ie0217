# Este archivo ayuda a armar el programa de C++ que tiene varios partes.
# Nombre del programa cuando está listo.
TARGET = gestion_biblioteca.exe

# Lo que se hace cuando empieza.
all: $(TARGET)

# El programa que arma el código.
CXX = g++

# Cómo debe armar el código.
CXXFLAGS = -Wall -std=c++11

# Los pedazos del programa que necesitas.
SOURCES = libro.cpp biblioteca.cpp main.cpp

# Los pedazos transformados que usa la computadora para armar el programa.
OBJECTS = $(SOURCES:.cpp=.o)

# Cómo transformar cada pedazo.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cómo juntar todos los pedazos transformados para hacer el programa.
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Cómo borrar todo lo que se hizo y empezar de cero.
.PHONY: clean
clean:
	rm $(TARGET) $(OBJECTS)
