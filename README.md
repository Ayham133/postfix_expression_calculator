# Number Parser & Stack (C Project)

## 📌 Overview

This project is a modular C implementation of:

-   A custom **stack data structure**
-   A **number parsing module**
-   A `main` program that integrates both components

The project demonstrates structured C programming, modular design using
header/source separation, and dynamic memory management.

------------------------------------------------------------------------

## 🗂 Project Structure

    .
    ├── main.c
    ├── stack.c
    ├── stack.h
    ├── number_parser.c
    ├── number_parser.h
    └── README.md

### File Descriptions

#### `main.c`

-   Entry point of the application
-   Uses the stack and number parser modules
-   Demonstrates program functionality

#### `stack.h`

-   Header file for the stack module
-   Contains:
    -   Stack structure definition
    -   Function prototypes

#### `stack.c`

-   Implementation of the stack
-   Typical operations may include:
    -   `push`
    -   `pop`
    -   `peek`
    -   `isEmpty`
    -   `isFull`
    -   `createStack`
    -   `freeStack`

#### `number_parser.h`

-   Header file for the number parsing module
-   Declares parsing-related functions

#### `number_parser.c`

-   Implements logic to:
    -   Parse numeric input
    -   Convert strings to numbers
    -   Validate numeric formats

------------------------------------------------------------------------

## ⚙️ Compilation

Compile all source files together:

``` bash
gcc main.c stack.c number_parser.c -o bin/out -lm
```

------------------------------------------------------------------------

## ▶️ Running the Program

After compilation:

``` bash
./bin/out
```

------------------------------------------------------------------------

## 🧠 Concepts Demonstrated

-   Modular programming in C
-   Header/source file separation
-   Stack data structure implementation
-   Manual memory management
-   Input validation and parsing

------------------------------------------------------------------------

## 🛠 Requirements

-   GCC or compatible C compiler
-   Standard C library
-   Linux / macOS / Windows (with MinGW or WSL)

