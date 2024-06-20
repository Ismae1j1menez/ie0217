-- Eliminar la base de datos si ya existe
DROP DATABASE IF EXISTS Tarea6_db;

-- Crear la base de datos solo si no existe
CREATE DATABASE IF NOT EXISTS Tarea6_db;

-- Seleccionar la base de datos para usarla
USE Tarea6_db;

-- Crear tabla de Cursos
CREATE TABLE Cursos (
    CursoID INT AUTO_INCREMENT PRIMARY KEY NOT NULL,
    Sigla VARCHAR(8) UNIQUE KEY NOT NULL,
    Nombre VARCHAR(100) UNIQUE KEY NOT NULL,
    Semestre VARCHAR(8) NOT NULL,
    Creditos INT NOT NULL
);

-- Crear tabla de Requisitos
CREATE TABLE Requisitos(
    RequisitoID INT AUTO_INCREMENT PRIMARY KEY NOT NULL,
    CursoID INT NOT NULL,
    RequisitoCursoID INT NOT NULL,
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID) ON DELETE CASCADE,
    FOREIGN KEY (RequisitoCursoID) REFERENCES Cursos(CursoID) ON DELETE CASCADE
);

-- Crear tabla de Descripciones
CREATE TABLE Descripciones(
    DescripcionID INT AUTO_INCREMENT PRIMARY KEY NOT NULL,
    CursoID INT NOT NULL,
    Descripcion TEXT NOT NULL,
    Dificultad VARCHAR(8) NOT NULL,
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID) ON DELETE CASCADE
);

-- Ver la tabla de Cursos antes de insertar datos
SELECT * FROM Cursos;

-- Ver la tabla de Descripciones antes de insertar datos
SELECT * FROM Descripciones;

-- Ver la tabla de Requisitos antes de insertar datos
SELECT * FROM Requisitos;

-- Insertar el plan de estudios con cursos y requisitos
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0217', 'Estructuras Abstractas de Datos y Algoritmos', 'I-2024', 3),                                
('IE-0523', 'Circuitos Digitales II', 'I-2024', 3),                                                    
('IE-0479', 'Ingeniería Económica', 'I-2024', 3),                                                        
('IE-0413', 'Electrónica II', 'I-2024', 3),                                                                
('IE-0315', 'Máquinas Eléctricas I', 'I-2024', 4),                                                        
('IE-0499', 'Proyecto Eléctrico', 'I-2024', 3),                                                        
('IE-0405', 'Modelos Probabilísticos de Señales y Sistemas', 'I-2024', 3),                                 
('IE-0501', 'Responsabilidades en el Ejercicio Profesional de la Ingeniería Eléctrica', 'I-2024', 1),     
('IE-0579', 'Administración de sistemas', 'I-2024', 4),                                                
('IE-0613', 'Electrónica industrial', 'I-2024', 4),                                                    
('IE-0679', 'Ciencia de datos para la est. y pron. de eventos', 'I-2024', 3),                             
('IE-0541', 'Seguridad Ocupacional', 'I-2024', 3),                                                        
('IE-0599', 'Anteproyecto de TFG', 'I-2024', 4),                                                        
('IE-1111', 'Optativa I', ' ', 0),                                                                         
('IE-2222', 'Optativa II', ' ', 0),                                                                     
('IE-3333', 'Optativa III', ' ', 0),                                                                     
('IE-4444', 'Optativa IV', ' ', 0);

-- Insertar los requisitos de los cursos del plan
INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Anteproyecto de TFG'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Proyecto Eléctrico')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad Ocupacional'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Responsabilidades en el Ejercicio Profesional de la Ingeniería Eléctrica')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Ciencia de datos para la est. y pron. de eventos'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Administración de sistemas')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Ciencia de datos para la est. y pron. de eventos'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Modelos Probabilísticos de Señales y Sistemas')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Electrónica industrial'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Máquinas Eléctricas I')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Electrónica industrial'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Electrónica II')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Administración de sistemas'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Ingeniería Económica'));

-- Insertar las descripciones de los cursos
INSERT INTO Descripciones (CursoID, Descripcion, Dificultad) VALUES
    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Anteproyecto de TFG'), 
    'Preparación de la propuesta de tema para el Trabajo Final de Graduación.', 
    'Media'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad Ocupacional'), 
    'Principios de seguridad en el trabajo.', 
    'Facil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Ciencia de datos para la est. y pron. de eventos'), 
    'Análisis de eventos usando conceptos de cursos anteriores.', 
    'Media'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Electrónica Industrial'), 
    'Principios y fundamentos de la electrónica de potencia.', 
    'Dificil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Administración de sistemas'), 
    'Análisis de organizaciones y empresas en ingeniería eléctrica.', 
    'Media'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Responsabilidades en el Ejercicio Profesional de la Ingeniería Eléctrica'), 
    'Aspectos de responsabilidad y ética en el ejercicio profesional.', 
    'Facil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Modelos Probabilísticos de Señales y Sistemas'), 
    'Teoría de probabilidad, variables aleatorias y procesos estocásticos.', 
    'Facil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Proyecto Eléctrico'), 
    'Curso integrador para desarrollar un proyecto en ingeniería eléctrica.', 
    'Dificil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Máquinas Eléctricas I'), 
    'Análisis de transformadores y máquinas de inducción trifásicas.', 
    'Dificil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Ingeniería Económica'), 
    'Tasas de interés, valor del dinero en el tiempo, capitalización y tasas de retorno.', 
    'Facil'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Circuitos Digitales II'), 
    'Diseño y verificación de circuitos digitales en Verilog.', 
    'Media'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Estructuras Abstractas de Datos y Algoritmos'), 
    'Conceptos de programación y desarrollo de algoritmos usando C++.', 
    'Media');

-- Ver la tabla de Cursos después de insertar datos
SELECT * FROM Cursos;

-- Ver la tabla de Descripciones después de insertar datos
SELECT * FROM Descripciones;

-- Ver la tabla de Requisitos después de insertar datos
SELECT * FROM Requisitos;

-- Antes de agregar nuevos cursos inventados
SELECT * FROM Cursos;


