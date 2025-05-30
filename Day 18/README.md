# Recreate the README file after environment reset

file_path = "/mnt/data/README_Sleep_Exit_Wait.md"

readme_content = """# C Programming with sleep(), exit(), and wait()

This repository contains a set of C programs that demonstrate how to use `sleep()`, `exit()`, and `wait()` functions to manage process timing and termination.

---

## 🔧 Requirements

- Linux or Unix-based OS
- GCC compiler

---

## 📁 File Descriptions

### 1. `01_sleep_exit.c`

**Purpose:**

- Demonstrates basic usage of `sleep()` and `exit()` functions.

**Functionality:**

- Prints a message, waits for 3 seconds, and then exits.

---

### 2. `02_fork_wait.c`

**Purpose:**

- Demonstrates `fork()` and `wait()` with a child process.

**Functionality:**

- Parent creates a child process.
- Child sleeps for 2 seconds and exits.
- Parent waits and prints the child’s exit status.

---

### 3. `03_wait_multiple_children.c`

**Exercise 01**

- First child: Sleeps for 1 second.
- Second child: Sleeps for 3 seconds.
- Parent waits for both children and prints their exit statuses.

**Functionality:**

- Uses `fork()` twice to create two child processes.
- Parent synchronizes using two `wait()` calls.

---

### 4. `04_exit_order_tracking.c`

**Exercise 02**

- First child sleeps for 2 seconds and exits with status 2.
- Second child sleeps for 1 second and exits with status 1.
- Parent waits for both children and prints the order of their completion.

**Exercise 03**

- Parent creates a child.
- Child creates a grandchild.
- Grandchild sleeps and exits with status 2.
- Child waits for grandchild and exits with status 55.
- Parent waits and prints child’s exit status.

---

## 🧪 How to Compile and Run

```sh
gcc 01_sleep_exit.c -o prog1
./prog1

gcc 02_fork_wait.c -o prog2
./prog2
