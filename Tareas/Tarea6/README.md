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











   
   