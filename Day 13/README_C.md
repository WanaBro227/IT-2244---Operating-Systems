# Basic C Programming Exercises

This repository contains beginner-friendly C programs demonstrating core programming concepts such as printing output, data types, user input, and basic arithmetic operations.

## Files Overview

### 1. `01.c`
- A simple "Hello World" program.
- Demonstrates basic structure of a C program.

#### Compilation:
```sh
gcc 01.c -o hello
./hello
```

### 2. `02.c`
- Demonstrates how to declare and print an integer variable.
- Includes format specifiers:
  - `%d` or `%i`: integer
  - `%f`: float
  - `%lf`: double
  - `%c`: character
  - `%s`: string

### 3. `03.c`
- Assigning one variable's value to another.
- Prints both variables to demonstrate assignment.

### 4. `04.c`
- Demonstrates different data types: `int`, `double`, `float`, and `char`.
- Uses `sizeof` operator to show memory size.
- Uses format specifiers to control precision.

### 5. `05.c`
- Demonstrates single user input of various types:
  - `int`
  - `double`
  - `char`
- Uses `scanf` to take input and `&` (ampersand) to pass variable address.

### 6. `06.c`
- Takes multiple user inputs in a single line: `double` and `char`.
- Demonstrates formatted input/output.

#### Motivational Prompts Included:
```
1. Lucky
2. Carefully do your work
3. Stronger
4. Happy
5. Can get help
6. Doubt
7. Sad
8. Like
9. Courage
```

### 7. `07.c`
- A basic calculator in C.
- Takes two numbers as input.
- Performs and prints results for:
  - Addition
  - Subtraction
  - Multiplication
  - Division

## How to Compile and Run

Make sure you have GCC installed. Use the following command:
```sh
gcc filename.c -o output_name
./output_name
```

Example:
```sh
gcc 07.c -o calculator
./calculator
```

## Notes
- Code comments are added for clarity.
- Use `putty` or any terminal supporting C compilation if you're on a server.
- Practice modifying values and inputs to improve your understanding of C basics.
