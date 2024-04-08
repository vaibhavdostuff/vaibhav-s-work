--1
CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    age INT,
    grade VARCHAR(2)
);

--2
INSERT INTO students (id, name, age, grade) VALUES
(2, 'Alice Smith', 22, 'B'),
(3, 'Bob Johnson', 21, 'A-'),
(4, 'Eve Williams', 23, 'C');

