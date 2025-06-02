# Interprocess Communication using System V Message Queues

This repository includes two C programs demonstrating interprocess communication (IPC) through System V message queues using `msgsnd` and `msgrcv`.

---

## 🔧 Requirements
- Linux or Unix-based OS
- GCC compiler

---

## 📁 File Descriptions

### 1. `sender.c`
**Purpose:**
- Sends a message into a message queue.

**Functionality:**
- Uses `ftok()` to generate a unique key.
- Uses `msgget()` to create or access a message queue.
- Uses `msgsnd()` to send a message to the queue.
- Reads message input from the user.
- Displays the sent message.

**Sample Output:**
```
Write data: Hello from sender!
Data send is: Hello from sender!
```

---

### 2. `receiver.c`
**Purpose:**
- Receives a message from the message queue.

**Functionality:**
- Uses `ftok()` to generate a key that matches the sender.
- Uses `msgget()` to access the existing queue.
- Uses `msgrcv()` to receive the message.
- Prints the received message.
- Destroys the message queue using `msgctl()`.

**Sample Output:**
```
Data received is : Hello from sender!
```
![Screenshot 2025-06-02 111345](https://github.com/user-attachments/assets/b12d0d29-196a-4dde-aaee-68c986061df2)

---

## 🧪 How to Compile and Run

1. **Compile both programs**
```sh
gcc sender.c -o sender
gcc receiver.c -o receiver
```

2. **Run the programs**
- Open one terminal and run the receiver first:
```sh
./receiver
```
- Open another terminal and run the sender:
```sh
./sender
```

> Note: Ensure the file `progfile` exists or is created so `ftok()` can generate a key.

---

## 📚 Summary
This example demonstrates how System V message queues enable communication between independent processes. It’s useful for scenarios where processes need to exchange messages asynchronously.
