# C Programming with fork(): Parent and Child Process Management

This repository demonstrates various use cases of process creation and management in C using the `fork()` system call.

---

## 🔧 Requirements
- Linux or Unix-based system
- GCC compiler (`gcc filename.c -o output`)
- Understanding of process IDs (`pid`) and how `fork()` creates a new child process

---

## 📁 Code Descriptions

### 1. `01_basic_fork.c`
**Description:**
- Demonstrates the basic use of `fork()` to create a child process.
- Displays process IDs of both parent and child.

**Key Output Concepts:**
- `fork()` returns 0 to the child and a non-zero value to the parent.
- `getpid()` shows the process ID of the current process.
![Code_01](https://github.com/user-attachments/assets/d71310db-c92d-487f-b19b-ef15acffc73b)

---

### 2. `02_multiple_forks.c`
**Description:**
- Demonstrates how multiple calls to `fork()` result in exponential process creation.
- Each `fork()` doubles the number of running processes.

**Key Output Concept:**
- "Hello world!" gets printed 4 times due to 2 `fork()` calls (2^2 = 4 processes).
![Code_02](https://github.com/user-attachments/assets/ad72be5d-7dda-4bb0-8d8e-d35997e01393)

---

### 3. `03_two_child_processes.c`
**Description:**
- Parent process creates two child processes sequentially.
- Each process prints its own ID and parent ID.

**Key Output Concept:**
- Use of `getpid()` and `getppid()` for better understanding of process hierarchy.
![Code_03](https://github.com/user-attachments/assets/8e4d3834-645c-4574-9cc9-d7e3727757a4)

---

### 4. `03_01_parallel_forks.c`
**Description:**
- Demonstrates parallel creation of two child processes from the same parent using two `fork()` calls.

**Key Output Concept:**
- Useful for visualizing process branching logic.
![Code_03_01](https://github.com/user-attachments/assets/6531e5ea-6db2-4e2a-b27f-dab1c46870e1)

---

### 5. `04_sibling_processes.c`
**Description:**
- Shows how two child processes (siblings) can be created from the same parent.

**Key Output Concept:**
- All child processes display their PID and their parent's PID to establish the relationship clearly.
![Code_04](https://github.com/user-attachments/assets/b8b677b3-0260-4390-995a-c294e782e324)

---

## 🧪 How to Compile and Run
```sh
gcc filename.c -o output
./output
```

Example:
```sh
gcc 01_basic_fork.c -o basic
./basic
```

---

## 📚 Summary
This collection of examples will help you:
- Understand how `fork()` works.
- Explore how processes are created and how they behave.
- Visualize parent-child-sibling process relationships.
- Build a foundation for more advanced topics like inter-process communication (IPC).
