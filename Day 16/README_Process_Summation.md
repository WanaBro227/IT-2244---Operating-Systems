# C Programming: Process Handling and Summation with fork()

This README provides details of two simple C programs that demonstrate:
1. Basic child-parent process differentiation.
2. Cooperative number printing and summation by forked processes.

---

## 🔧 Requirements
- Linux or Unix-based OS
- GCC compiler
- Familiarity with `fork()`, `getpid()`, `getppid()`, and process execution flow

---

## 📁 Files Overview

### 1. `01.c`
**Purpose:**
- To create a child process and print its parent process ID.

**Functionality:**
- Uses `fork()` to create a new process.
- In the child process: prints parent PID using `getppid()`.
- In the parent process: prints its own PID using `getpid()`.

**Sample Output:**
```
I'm Parent Process. My id is 12345
I'm Child Process. My parent process id is 12345
```
![Code_1](https://github.com/user-attachments/assets/3634317c-5f99-4f9c-b4b0-c515bf30aaf0)

---

### 2. `02.c`
**Purpose:**
- Print numbers from 1 to 10 where:
  - Child process prints 1 to 5
  - Parent process prints 6 to 10
- Each process calculates and prints the sum of its range.

**Functionality:**
- Uses `fork()` to split execution.
- Child handles numbers 1–5 and calculates sum.
- Parent handles numbers 6–10 and calculates sum.
- Optional `wait()` can be used to synchronize output.

**Sample Output:**
```
I'm Child Process
1 2 3 4 5
Child process summation is 15

I'm Parent Process
6 7 8 9 10
Parent process summation is 40
```
![Code_2](https://github.com/user-attachments/assets/40dfc361-2207-4636-b960-de55748ca794)

---

## 🧪 How to Compile and Run
```sh
gcc 01.c -o process1
./process1

gcc 02.c -o process2
./process2
```

---

## 📚 Summary
These programs illustrate the basics of:
- Forking processes in C
- Identifying parent/child using process IDs
- Dividing tasks (number printing and summation) between processes
