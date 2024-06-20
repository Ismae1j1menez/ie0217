# Tarea 6 - I Semestre 2024

## Parte Teórica

1. **¿Qué es una base de datos relacional y cuáles son sus características fundamentales?**
   - Una base de datos relacional guarda datos en tablas. Las tablas están conectadas por claves. Características:
     - Usa tablas
     - Relaciones entre datos
     - Usa SQL para manejar datos

2. **¿Cuál es la diferencia entre una clave primaria y una clave candidata en una base de datos relacional?**
   - Clave primaria: Identifica cada registro en una tabla, es única y no puede ser vacía.
   - Clave candidata: Puede ser clave primaria, también es única y no vacía.

3. **¿Qué son las claves foráneas y cómo se utilizan para mantener la integridad referencial en una base de datos?**
   - Clave foránea: Conecta dos tablas. Asegura que los datos en una tabla existan en la otra.

4. **¿Qué es una transacción en el contexto de bases de datos y cuáles son las propiedades ACID que debe cumplir?**
   - Transacción: Conjunto de acciones que se ejecutan juntas.
   - ACID:
     - Atomicidad: Todo o nada
     - Consistencia: Reglas de datos
     - Aislamiento: No afecta otras transacciones
     - Durabilidad: Cambios permanentes

5. **¿Qué son las vistas (views) en SQL y cuáles son los beneficios y limitaciones de su uso?**
   - Vista: Consulta guardada como una tabla virtual.
   - Beneficios: Fácil uso, mejora seguridad.
   - Limitaciones: No siempre se pueden cambiar, puede ser lenta.

6. **¿Qué es la normalización en bases de datos y cuáles son las diferentes formas normales (normal forms)?**
   - Normalización: Organiza datos para evitar duplicados.
   - Formas normales:
     - 1NF: Sin grupos repetidos
     - 2NF: Sin dependencias parciales
     - 3NF: Sin dependencias indirectas

7. **¿Cómo funcionan los índices en SQL y cuál es su impacto en el rendimiento de las consultas?**
   - Índices: Hacen que buscar datos sea más rápido.
   - Impacto: Más rápido para buscar, más lento para agregar o cambiar datos.

8. **¿Qué es SQL Injection y cuáles son las mejores prácticas para prevenir este tipo de ataque?**
   - SQL Injection: Ataque que inserta código malicioso en consultas SQL.
   - Prevención: Usar consultas preparadas, validar datos, usar ORM.

9. **¿Qué son los procedimientos almacenados (stored procedures) en SQL y cómo pueden mejorar la eficiencia y seguridad de las operaciones de base de datos?**
   - Procedimientos almacenados: Código SQL guardado en el servidor.
   - Eficiencia: Reutiliza código.
   - Seguridad: Control centralizado.

10. **¿Cómo se implementan las relaciones uno a uno, uno a muchos y muchos a muchos en una base de datos relacional y qué consideraciones se deben tener en cuenta en cada caso?**
    - Uno a uno: Clave primaria de una tabla es clave foránea en otra.
    - Uno a muchos: Clave foránea en la tabla del lado "muchos".
    - Muchos a muchos: Tabla intermedia con dos claves foráneas.
    - Consideraciones: Definir bien las claves y asegurar integridad de datos.


## Parte Práctica

### Eliminar la base de datos si ya existe
```
DROP DATABASE IF EXISTS Tarea6_db;
```
Este comando borra la base de datos llamada Tarea6_db si ya existe. Esto es útil para evitar problemas al reiniciar.

### Crear la base de datos solo si no existe
```
CREATE DATABASE IF NOT EXISTS Tarea6_db;
```
Este comando crea una nueva base de datos llamada Tarea6_db solo si no existe antes. Así no se borra una base de datos que ya exista.

### Seleccionar la base de datos para usarla
```
USE Tarea6_db;
```
Este comando establece `Tarea6_db` como la base de datos activa.

<p align="center">
  <img src="https://i.imgur.com/HgeX92b.png" alt="DB_nueva">
</p>

### Crear tabla de Cursos
```
CREATE TABLE Cursos (
    CursoID INT AUTO_INCREMENT PRIMARY KEY NOT NULL,
    Sigla VARCHAR(8) UNIQUE KEY NOT NULL,
    Nombre VARCHAR(100) UNIQUE KEY NOT NULL,
    Semestre VARCHAR(8) NOT NULL,
    Creditos INT NOT NULL
);
```
Este comando crea una tabla llamada `Cursos` para almacenar información sobre los cursos, como la sigla, el nombre, el semestre en que se imparten y los créditos que otorgan.

### Crear tabla de Requisitos
```
CREATE TABLE Requisitos(
    RequisitoID INT AUTO_INCREMENT PRIMARY KEY NOT NULL,
    CursoID INT NOT NULL,
    RequisitoCursoID INT NOT NULL,
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID) ON DELETE CASCADE,
    FOREIGN KEY (RequisitoCursoID) REFERENCES Cursos(CursoID) ON DELETE CASCADE
);
```
Este comando crea una tabla llamada `Requisitos` que establece relaciones de dependencia entre cursos, donde un curso puede requerir haber pasado otro antes de inscribirse.

### Crear tabla de Descripciones
```
CREATE TABLE Descripciones(
    DescripcionID INT AUTO_INCREMENT PRIMARY KEY NOT NULL,
    CursoID INT NOT NULL,
    Descripcion TEXT NOT NULL,
    Dificultad VARCHAR(8) NOT NULL,
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID) ON DELETE CASCADE
);
```
Este comando crea una tabla llamada `Descripciones` que almacena una descripción textual y la dificultad de cada curso.

<p align="center">
  <img src="https://i.imgur.com/6xqF5zz.png" alt="Creacion_tabla">
</p>

A continuación se presentan las bases vacías:
<p align="center">
  <img src="https://i.imgur.com/BPYFY6c.png" alt="Descripcion_vacia">
</p>
<p align="center">
  <img src="https://i.imgur.com/OGNCpZM.png" alt="Curso_vacia">
</p>
<p align="center">
  <img src="https://i.imgur.com/dk04aWO.png" alt="Requisisto_vacio">
</p>

### Insertar el plan de estudios con cursos y requisitos
```
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
```
Este comando inserta múltiples cursos en la tabla `Cursos`, especificando su sigla, nombre, semestre y créditos.

<p align="center">
  <img src="https://i.imgur.com/iSquQZb.png" alt="Cursos_llenos">
</p>

### Insertar los requisitos de los cursos del plan
```
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
```
Este comando inserta en la tabla `Requisitos` los requisitos previos necesarios entre los cursos, relacionando cursos específicos como prerrequisitos para otros.

<p align="center">
  <img src="https://i.imgur.com/IJl09iY.png" alt="Requisitos_llena">
</p>

### Insertar las descripciones de los cursos
```
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
```
Este comando inserta descripciones y niveles de dificultad para cada curso en la tabla `Descripciones`, proporcionando información detallada sobre el contenido y la complejidad de los cursos.

<p align="center">
  <img src="https://i.imgur.com/YVJaBpx.png" alt="Descripciones_llena">
</p>



### Agregar nuevos cursos inventados.
```
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0628', 'Seguridad De La Información', 'I-2024', 3),                        
('IE-0475', 'Bases De Datos', 'I-2024', 3);
```
Este comando agrega cursos nuevos inventados, especificando la información de cada curso.

Antes de agregar cursos inventados:
<p align="center">
  <img src="https://i.imgur.com/ea9aixc.png" alt="Descripciones_llena">
</p>

Después:
<p align="center">
  <img src="https://i.imgur.com/ceDlgsk.png" alt="A_cursosinventados">
</p>



### Agregar descripciones para los nuevos cursos
```
INSERT INTO Descripciones (CursoID, Descripcion, Dificultad) VALUES
    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad De La Información'), 
    'Principios y prácticas para asegurar la información en sistemas computacionales.', 
    'Media'),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Bases De Datos'), 
    'Fundamentos de diseño y manejo de bases de datos relacionales y no relacionales.', 
    'Media');
```
Este comando añade descripciones detalladas y niveles de dificultad para los nuevos cursos.

Antes de agregar descripciones para los nuevos cursos:
<p align="center">
  <img src="https://i.imgur.com/YVJaBpx.png" alt="Descripciones_llena">
</p>


Después:
<p align="center">
  <img src="https://i.imgur.com/636IjUS.png" alt="Descripciones_llena">
</p>


### Insertar los requisitos de los nuevos cursos del plan
```
INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad De La Información'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Circuitos Digitales II')),

    ((SELECT CursoID FROM Cursos WHERE Nombre = 'Bases De Datos'), 
    (SELECT CursoID FROM Cursos WHERE Nombre = 'Estructuras Abstractas de Datos y Algoritmos'));
```
Este comando configura los requisitos previos para los nuevos cursos, estableciendo qué cursos deben haberse completado antes de inscribirse.

Antes de insertar requisitos de los nuevos cursos del plan:
<p align="center">
  <img src="https://i.imgur.com/9MzSxhJ.png" alt="A_Requisistosinventados">
</p>

Después:
<p align="center">
  <img src="https://i.imgur.com/4Gcv01K.png" alt="A_Requisistosinventados">
</p>


### Consultar todos los cursos y sus descripciones
```
SELECT c.Sigla, c.Nombre, c.Semestre, c.Creditos, d.Descripcion, d.Dificultad
FROM Cursos c
JOIN Descripciones d ON c.CursoID = d.CursoID;
```
Este comando muestra toda la información sobre los cursos junto con sus descripciones y dificultades.

<p align="center">
  <img src="https://i.imgur.com/UeBiyrY.png" alt="Consultar_cursosydescripciones">
</p>

### Consultar los requisitos de un curso específico
```
SELECT c.CursoID, c.Sigla, c.Nombre, GROUP_CONCAT(c1.Sigla SEPARATOR ', ') AS Requisitos
FROM Cursos c
JOIN Requisitos r ON c.CursoID = r.CursoID
JOIN Cursos c1 ON r.RequisitoCursoID = c1.CursoID
WHERE c.Nombre = 'Electrónica industrial';
```
Este comando muestra los requisitos específicos para el curso 'Electrónica industrial', indicando qué otros cursos deben ser completados previamente.

<p align="center">
  <img src="https://i.imgur.com/EX1Mly0.png" alt="Consultar_cursoespecifico">
</p>

### Consultar para listar los cursos que no son optativos
```
SELECT *
FROM Cursos
WHERE Nombre NOT LIKE 'Optativa%';
```
Este comando lista todos los cursos que no son optativos, filtrando aquellos cuyos nombres no comienzan con 'Optativa'.

<p align="center">
  <img src="https://i.imgur.com/WW53vsK.png" alt="Consultar_nooptativos">
</p>

### Actualizar el nombre y créditos de 3 cursos optativos
```
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
```
Este comando actualiza la información de tres cursos optativos, cambiando sus siglas, nombres, semestres y créditos.

Antes de actualizar la información de tres cursos optativos:
<p align="center">
  <img src="https://i.imgur.com/ceDlgsk.png" alt="A_cursosinventados">
</p>


Después:
<p align="center">
  <img src="https://i.imgur.com/revbqpZ.png" alt="Actualizar_optativas">
</p>

### Actualizar la descripción y dificultad de 3 cursos existentes
```
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
```
Este comando actualiza la descripción y la dificultad de tres cursos existentes para reflejar cambios en los programas de estudio.

Antes de actualizar la descripción y la dificultad de tres cursos existentes.
<p align="center">
  <img src="https://i.imgur.com/636IjUS.png" alt="Descripciones_llena">
</p>

Después:
<p align="center">
  <img src="https://i.imgur.com/ibWlwuO.png" alt="Actualizar_descripcion">
</p>

### Eliminar un curso inventado y 2 cursos del plan y sus descripciones asociadas
```
DELETE FROM Cursos 
WHERE Nombre = 'Seguridad De La Información';

DELETE FROM Cursos 
WHERE Nombre = 'Administración de sistemas';

DELETE FROM Cursos 
WHERE Nombre = 'Electrónica industrial';
```
Este comando elimina registros de tres cursos de la base de datos, incluyendo un curso inventado y dos cursos del plan oficial.

Antes de eliminar registros de tres cursos de la base de datos:
<p align="center">
  <img src="https://i.imgur.com/revbqpZ.png" alt="Actualizar_optativas">
</p>
<p align="center">
  <img src="https://i.imgur.com/ibWlwuO.png" alt="Actualizar_descripcion">
</p>

Después:
<p align="center">
  <img src="https://i.imgur.com/uQ6VX7X.png" alt="Eliminar_cursos">
</p>
<p align="center">
  <img src="https://i.imgur.com/IE4OcG4.png" alt="Eliminar_descripciones">
</p>

Antes de eliminar los requisitos:
<p align="center">
  <img src="https://i.imgur.com/ao9NwCu.png" alt="Antes_eliminarrequisitos">
</p>

Después:
<p align="center">
  <img src="https://i.imgur.com/psh7Dpd.png" alt="Despues_eliminarrequisitos">
</p>

### Eliminar requisitos de 2 cursos específicos
```
DELETE FROM Requisitos
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Ciencia de datos para la est. y pron. de eventos') 
    AND RequisitoCursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Modelos Probabilísticos de Señales y Sistemas');

DELETE FROM Requisitos
WHERE 
    CursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Seguridad Ocupacional') 
    AND RequisitoCursoID = (SELECT CursoID FROM Cursos WHERE Nombre = 'Responsabilidades en el Ejercicio Profesional de la Ingeniería Eléctrica');
```
    
Este comando elimina específicamente los requisitos de dos cursos, ajustando las relaciones de dependencia en la estructura del plan de estudios.








   
   