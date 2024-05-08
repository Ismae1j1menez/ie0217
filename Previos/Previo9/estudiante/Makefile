# Este es el nombre del programa final.
TARGET = gestion_estudiantes.exe

# Aquí se indica con qué programa se va a construir el código.
CXX = g++

# Estas son las instrucciones para construir el código.
CXXFLAGS = -Wall -std=c++11

# Aquí se ponen los archivos que necesitamos para hacer el programa.
SOURCES = main.cpp estudiante.cpp

# Estos son los archivos intermedios que se hacen con los archivos de arriba.
OBJECTS = $(SOURCES:.cpp=.o)

# Cómo hacer los archivos intermedios desde los archivos iniciales.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cómo hacer el programa final desde los archivos intermedios.
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Cómo borrar todo lo que hicimos para empezar de nuevo.
clean:
	rm $(TARGET) $(OBJECTS)
