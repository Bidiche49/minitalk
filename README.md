
---

# minitalk

## Description

`minitalk` is a simple messaging system developed in C that demonstrates inter-process communication using UNIX signals. The project allows clients to send messages to a server using the `kill` system call and handles incoming messages via signal handlers. This project serves as an introduction to signal handling, process management, and client-server architecture in C.

## Features

- **Client-Server Architecture**: Implements a basic client-server model where clients can send messages to the server.
- **Signal Handling**: Utilizes UNIX signals to send and receive messages between processes.
- **Real-time Communication**: Enables real-time messaging with minimal latency.
- **Message Acknowledgment**: The server sends an acknowledgment back to the client upon successful message receipt.
- **Customizable Message Size**: Supports sending messages of various lengths, allowing for more flexible communication.
- **Error Handling**: Includes error handling for various edge cases, such as invalid inputs and signal errors.

## Key Technologies

- **C Programming Language**: The primary language used for implementing the messaging system.
- **UNIX Signals**: Utilizes signals to facilitate communication between the client and server processes.
- **Makefile**: Automates the compilation process for easier project management.

## Learning Outcomes

- Gained a deeper understanding of inter-process communication and UNIX signals.
- Developed skills in handling signals and managing concurrent processes.
- Learned to implement a client-server model using C.

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/Bidiche49/minitalk
   cd minitalk
   ```
2. Compile the project:
   ```bash
   make
   ```
3. Run the server:
   ```bash
   ./server
   ```
4. Run the client in a new terminal:
   ```bash
   ./client <PID> "message"
   ```

   Replace `<PID>` with the server's process ID and `"message"` with the message you want to send.

---
