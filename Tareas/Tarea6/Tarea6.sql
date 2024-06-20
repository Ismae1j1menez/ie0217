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

-- Agregar nuevos cursos inventados
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0628', 'Seguridad De La Información', 'I-2024', 3), 						
('IE-0475', 'Bases De Datos', 'I-2024', 3);

-- Después de agregar nuevos cursos inventados
SELECT * FROM Cursos;

-- Antes de agregar descripciones para los nuevos cursos
SELECT * FROM Descripciones;

-- Agregar descripciones para los nuevos cursos
INSERT INTO Descripciones (CursoID, Descripcion, Dificultad) VALUES
    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad De La Información'), 
    'Principios y prácticas para asegurar la información en sistemas computacionales.', 
    'Media'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Bases De Datos'), 
    'Fundamentos de diseño y manejo de bases de datos relacionales y no relacionales.', 
    'Media');

-- Después de agregar descripciones para los nuevos cursos
SELECT * FROM Descripciones;

-- Nntes de agregar requisitos para los nuevos cursos
SELECT * FROM Requisitos;

-- Insertar los requisitos de los nuevos cursos del plan
INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad De La Información'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Circuitos Digitales II')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Bases De Datos'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Estructuras Abstractas de Datos y Algoritmos'));

-- Después de agregar requisitos para los nuevos cursos
SELECT * FROM Requisitos;

-- Consultar todos los cursos y sus descripciones
SELECT c.Sigla, c.Nombre, c.Semestre, c.Creditos, d.Descripcion, d.Dificultad
FROM Cursos c
JOIN Descripciones d
ON c.CursoID = d.CursoID;

-- Consultar los requisitos de un curso específico
SELECT c.CursoID, c.Sigla, c.Nombre, GROUP_CONCAT(c1.Sigla SEPARATOR ', ') AS Requisitos
FROM Cursos c
JOIN Requisitos r
ON c.CursoID = r.CursoID
JOIN Cursos c1
ON r.RequisitoCursoID = c1.CursoID
WHERE c.Nombre = 'Electrónica industrial';

-- Contultar una semestre especifico
SELECT * FROM Cursos WHERE Semestre = 'I-2024';

-- Consultar para listar los cursos que no son optativos
SELECT *
FROM Cursos
WHERE Nombre NOT LIKE 'Optativa%';

-- Antes de actualizar el nombre y créditos de 3 cursos optativos
SELECT * FROM Cursos;

-- Actualizar el nombre y créditos de 3 cursos optativos
UPDATE Cursos
SET 
    Sigla = 'IE-0621', 
    Nombre = 'Verificación funcional del diseño de circuitos integrados', 
    Semestre = 'I', 
    Creditos = 3 
WHERE 
    Nombre = 'Optativa I';

UPDATE Cursos
SET 
    Sigla = 'IE-0411', 
    Nombre = 'Microelectrónica: Sistemas en Silicio', 
    Semestre = 'II', 
    Creditos = 3
WHERE 
    Nombre = 'Optativa II';

UPDATE Cursos
SET 
    Sigla = 'IE-0623', 
    Nombre = 'Microprocesadores', 
    Semestre = 'II', 
    Creditos = 3
WHERE 
    Nombre = 'Optativa III';

-- Después de actualizar el nombre y créditos de 3 cursos optativos
SELECT * FROM Cursos;

-- Antes de actualizar la descripción y dificultad de 3 cursos existentes
SELECT * FROM Descripciones;

-- Actualizar la descripción y dificultad de 3 cursos existentes
UPDATE Descripciones
SET 
    Descripcion = 'Implementación de algoritmos avanzados y estructuras de datos eficientes en C++.', 
    Dificultad = 'Alta'
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Estructuras Abstractas de Datos y Algoritmos');

UPDATE Descripciones
SET 
    Descripcion = 'Diseño de sistemas digitales avanzados y verificación usando Verilog.', 
    Dificultad = 'Alta'
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Circuitos Digitales II');

UPDATE Descripciones
SET 
    Descripcion = 'Desarrollo de habilidades para la propuesta y preparación del Trabajo Final de Graduación.', 
    Dificultad = 'Alta'
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Anteproyecto de TFG');

-- Después de actualizar la descripción y dificultad de 3 cursos existentes
SELECT * FROM Descripciones;

-- Antes de eliminar un curso inventado y 2 cursos del plan y sus descripciones asociadas
SELECT * FROM Cursos;
SELECT * FROM Descripciones;

-- Eliminar un curso inventado y 2 cursos del plan y sus descripciones asociadas
DELETE FROM Cursos 
WHERE Nombre = 'Seguridad De La Información';

DELETE FROM Cursos 
WHERE Nombre = 'Administración de sistemas';

DELETE FROM Cursos 
WHERE Nombre = 'Electrónica industrial';

-- Después de eliminar un curso inventado y 2 cursos del plan y sus descripciones asociadas
SELECT * FROM Cursos;
SELECT * FROM Descripciones;

-- Antes de eliminar requisitos de 2 cursos específicos
SELECT * FROM Requisitos;

-- Eliminar requisitos de 2 cursos específicos
DELETE FROM Requisitos
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Ciencia de datos para la est. y pron. de eventos') 
    AND RequisitoCursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Modelos Probabilísticos de Señales y Sistemas');

DELETE FROM Requisitos
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad Ocupacional') 
    AND RequisitoCursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Responsabilidades en el Ejercicio Profesional de la Ingeniería Eléctrica');

-- Después de eliminar requisitos de 2 cursos específicos
SELECT * FROM Requisitos;
