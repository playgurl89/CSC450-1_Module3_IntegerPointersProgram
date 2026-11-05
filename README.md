# CSC450-1_Module3_IntegerPointerProgram
A C++ program that asks the user to enter three integer values as input.
# CSC450-1 Module 3: Integer Pointers Program

## Project Description

This project demonstrates fundamental C++ programming concepts involving integer pointers and dynamic memory allocation. The application prompts the user to enter three integer values, stores them in separate variables, and creates three integer pointers that reference dynamically allocated memory.

The program displays the original integer values, their corresponding memory addresses, and the values retrieved through pointer dereferencing. It also demonstrates proper memory management by releasing dynamically allocated memory using the `delete` operator.

## Programming Concepts

- Integer variables and user input
- Pointer declarations and initialization
- Dynamic memory allocation using `new`
- Pointer dereferencing
- Memory addresses
- Dynamic memory deallocation using `delete`
- Null pointer assignment using `nullptr`

## Project Structure

```text
CSC450-1_Module3_IntegerPointersProgram/
│
├── src/
│   └── IntegerPointers.cpp
│
├── pseudocode/
│   └── IntegerPointers_Pseudocode.txt
│
├── screenshots/
│
├── README.md
├── LICENSE
└── .gitignore
```

## Compilation and Execution

This application was developed using Eclipse IDE and the Clang++ compiler on macOS.

To compile the application using a terminal:

```bash
g++ -std=c++17 -Wall -Wextra -o IntegerPointers src/IntegerPointers.cpp
```

To execute the application:

```bash
./IntegerPointers
```

## Sample Test Data

| Variable | Input |
|---|---:|
| First Integer | 42 |
| Second Integer | -15 |
| Third Integer | 0 |

The application displays the original integer values, their corresponding pointer addresses, and the values accessed through dereferencing.

## Memory Management

Each integer pointer receives its own dynamically allocated memory location. After displaying the results, the program releases each allocation using `delete` and resets the pointers to `nullptr`.

## Repository Contents

This repository includes the C++ source code, pseudocode, and application execution screenshots associated with the Module 3 Critical Thinking assignment for CSC450-1 Programming III.

## Author

Samantha W.

Colorado State University Global

CSC450-1: Programming III
