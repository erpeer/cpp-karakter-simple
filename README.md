# Simple C++ Character System (Multi-File Architecture)

Welcome! This is a mini playground project where I transitioned from dumping everything into a single .cpp file to structuring code properly using C++ multi-file architecture (.h and .cpp split).

---

## Purpose of This Project

When writing code for competitive programming or small practice exercises, cramming all functions and structs into one file works fine. However, in real-world software engineering, that quickly turns into unmaintainable spaghetti code.

The main goals of building this program were:

1. Understanding Header vs. Source Roles:
   - Keeping definitions clean and lightweight in a header file (karakter.h).
   - Hiding the implementation details inside a separate source file (karakter.cpp).
2. Preventing Header Collision: Using the modern #pragma once directive instead of bulky traditional include guards.
3. Mastering the Linker: Overcoming common compilation pitfalls (like the infamous undefined reference linker error) by learning how to feed multiple translation units to the compiler at once.

---

## Project Structure

```text
├── karakter.h     # The blueprint: defines the struct and function prototypes
├── karakter.cpp   # The engine: contains the actual function implementations
├── main.cpp       # The driver: orchestrates user input and game logic
├── .gitignore     # Keeps binaries (.exe) and IDE settings out of Git
└── README.md      # You are here!
```
