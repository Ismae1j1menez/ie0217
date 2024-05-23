# Laboratorio 8
### Número de ROOM: 5
**Integrantes:** Andres Bonilla, Ismael Jimenez, y Pablo Laurent

En el presente laboratorio se practicaron con las bases de datos hospital.db y northwind.db. Por lo consiguiente, se presentarán las preguntas hechas por cada estudiante con su respectiva base de datos:

---

### Ismael Jimenez, Base de Datos Hospital:

1. **Show the patient ID and the total number of admissions for patient_id 579.**
    ```sql
    -- De la columna patient_id cuenta la cantidad de veces que aparece el ID 579
    SELECT patient_id, COUNT(patient_id)
    -- De la tabla admissions
    FROM admissions
    -- Donde el paciente tiene el ID 579
    WHERE patient_id = 579;
    ```

2. **Based on the cities that our patients live in, show unique cities that are in province_id 'NS'.**
    ```sql
    -- Filtra los datos repetidos y lo llama unique_cities
    SELECT DISTINCT(city) AS unique_cities
    -- De la tabla patients
    FROM patients
    -- Donde la provincia es NS
    WHERE province_id = 'NS';
    ```

3. **Show unique birth years from patients and order them by ascending.**
    ```sql
    -- Quita los datos repetidos y lo llama birth_year
    SELECT DISTINCT YEAR(birth_date) AS birth_year
    -- De la tabla patients
    FROM patients
    -- Lo ordena de manera ascendente
    ORDER BY birth_year ASC;
    ```

4. **Show unique first names from the patients table which only occurs once in the list.**
    ```sql
    -- Selecciona first_name
    SELECT first_name
    -- De la tabla patients
    FROM patients
    -- Agrupa por first_name
    GROUP BY first_name
    -- Siempre que el nombre solo aparezca una vez
    HAVING COUNT(first_name) = 1;
    ```

---

### Paulo Laurent, Base de Datos Hospital:

1. **Select province names and order them with 'Ontario' first and the rest alphabetically.**
    ```sql
    -- Selecciona la columna 'province_name' de la tabla 'province_names'
    SELECT province_name
    -- De la tabla province_names
    FROM province_names
    -- Ordena los resultados según los siguientes criterios:
    ORDER BY
      -- Primer criterio de ordenamiento: Si 'province_name' es 'Ontario', asigna 0, de lo contrario, asigna 1.
      -- Esto asegura que 'Ontario' siempre aparezca primero en la lista.
      (CASE WHEN province_name = 'Ontario' THEN 0 ELSE 1 END),
      -- Segundo criterio de ordenamiento: Ordena alfabéticamente los nombres de las provincias.
      province_name;
    ```

2. **Select doctor details and total admissions by year.**
    ```sql
    -- Selecciona el ID del doctor, concatenación del nombre y apellido, especialidad, año de la fecha de admisión y el total de admisiones
    SELECT
      d.doctor_id AS doctor_id,  -- Selecciona y asigna un alias 'doctor_id' para el ID del doctor
      CONCAT(d.first_name, ' ', d.last_name) AS doctor_name,  -- Concatena el nombre y apellido del doctor y asigna un alias 'doctor_name'
      d.specialty,  -- Selecciona la especialidad del doctor
      YEAR(a.admission_date) AS selected_year,  -- Extrae el año de la fecha de admisión y asigna un alias 'selected_year'
      COUNT(*) AS total_admissions  -- Cuenta el número total de admisiones y asigna un alias 'total_admissions'
    -- De las tablas doctors (alias d) y admissions (alias a)
    FROM doctors AS d
    LEFT JOIN admissions AS a ON d.doctor_id = a.attending_doctor_id  -- Realiza un LEFT JOIN entre la tabla 'doctors' y 'admissions' usando 'doctor_id'
    -- Agrupa los resultados por el nombre del doctor y el año seleccionado
    GROUP BY doctor_name, selected_year
    -- Ordena los resultados por el ID del doctor y el año seleccionado
    ORDER BY doctor_id, selected_year;
    ```

3. **Select provinces where male patients outnumber female patients.**
    ```sql
    -- Selecciona el nombre de la provincia
    SELECT pr.province_name
    -- De la tabla 'patients' con el alias 'pa'
    FROM patients AS pa
    JOIN province_names AS pr ON pa.province_id = pr.province_id  -- Realiza un JOIN entre 'patients' y 'province_names' usando 'province_id'
    -- Agrupa los resultados por el nombre de la provincia
    GROUP BY pr.province_name
    HAVING
      -- Filtra los grupos para incluir solo aquellos donde la cuenta de pacientes masculinos es mayor que la de pacientes femeninos
      COUNT(CASE WHEN gender = 'M' THEN 1 END) > COUNT(CASE WHEN gender = 'F' THEN 1 END);
    ```

4. **Show admission date, total admissions per day, and change in admissions from the previous day.**
    ```sql
    -- Selecciona la fecha de admisión, el total de admisiones por día y el cambio en el conteo de admisiones respecto al día anterior
    SELECT
      admission_date,  -- Selecciona la fecha de admisión
      COUNT(admission_date) AS admission_day,  -- Cuenta las admisiones por fecha y asigna un alias 'admission_day'
      -- Calcula el cambio en el número de admisiones comparado con el día anterior
      COUNT(admission_date) - LAG(COUNT(admission_date)) OVER(ORDER BY admission_date) AS admission_count_change
    -- De la tabla 'admissions'
    FROM admissions
    -- Agrupa los resultados por la fecha de admisión
    GROUP BY admission_date;
    ```

---

### Andres Bonilla, Base de Datos Northwind:

1. **Find the first name, last name, and birth date of patients with height > 160 and weight > 70.**
    ```sql
    -- Selecciona el primer nombre, apellido y fecha de nacimiento de los pacientes con altura > 160 y peso > 70
    SELECT first_name, last_name, birth_date
    -- De la tabla patients
    FROM patients
    -- Donde la altura es mayor a 160 y el peso mayor a 70
    WHERE height > 160 AND weight > 70;
    ```

2. **List patients' first name, last name, and allergies where allergies are not null and are from 'Hamilton'.**
    ```sql
    -- Selecciona el primer nombre, apellido y alergias de los pacientes donde las alergias no son nulas y son de 'Hamilton'
    SELECT first_name, last_name, allergies
    -- De la tabla patients
    FROM patients
    -- Donde las alergias no son nulas y la ciudad es 'Hamilton'
    WHERE allergies IS NOT NULL AND city = 'Hamilton';
    ```

3. **Show unique birth years from patients and order them by ascending.**
    ```sql
    -- Quita los datos repetidos y muestra los años de nacimiento únicos
    SELECT DISTINCT YEAR(birth_date)
    -- De la tabla patients
    FROM patients
    -- Ordena los años de nacimiento de manera ascendente
    ORDER BY YEAR(birth_date) ASC;
    ```

4. **Show unique first names from the patients table which only occurs once.**
    ```sql
    -- Selecciona los primeros nombres que solo ocurren una vez en la tabla patients
    SELECT first_name
    -- De la tabla patients
    FROM patients
    -- Agrupa por el primer nombre
    GROUP BY first_name
    -- Muestra solo los nombres que aparecen una vez
    HAVING COUNT(*) = 1;
    ```


