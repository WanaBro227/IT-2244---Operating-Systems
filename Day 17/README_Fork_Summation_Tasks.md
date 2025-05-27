# Process Management in C: Fork and Summation

This repository demonstrates how to manage parent and child processes using the `fork()` system call in C. The two programs provided illustrate process ID tracking and task distribution between processes.

---

## 🔧 Requirements
- Linux or Unix-based system
- GCC compiler

---

## 📁 File Descriptions

### 1. `01.c`
**Purpose:**
- To demonstrate the creation of a child process using `fork()`.

**Functionality:**
- The program creates a child process.
- The child prints its parent’s process ID using `getppid()`.
- The parent prints its own process ID using `getpid()`.

**Sample Output:**
```
I'm Parent Process. My id is 12345
I'm Child Process. My parent process id is 12345
```

---

### 2. `02.c`
**Purpose:**
- To divide printing and summing of numbers between parent and child processes.

**Functionality:**
- The child prints numbers 1 to 5 and calculates their sum.
- The parent prints numbers 6 to 10 and calculates their sum.
- Optional `wait()` can be used to synchronize output for consistency.

**Sample Output:**
```
I'm Child Process
 1  2  3  4  5 
Child process summation is 15

I'm Parent Process
 6  7  8  9  10 
Parent process summation is 40
```

---

## 🧪 How to Compile and Run
```sh
gcc 01.c -o task1
./task1

gcc 02.c -o task2
./task2
```

---

## 📚 Summary
These examples are useful for understanding:
- The behavior and structure of parent and child processes.
- Task delegation using process forking.
- Process identification using `getpid()` and `getppid()`.
