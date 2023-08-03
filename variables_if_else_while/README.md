# C Programming Basics: Variables, If-Else Statements, and While Loops

This README provides an introduction to fundamental concepts in C programming: variables, if-else statements, and while loops. These concepts are essential building blocks for writing structured and dynamic programs in C.

## Table of Contents

- [Variables](#variables)
- [If-Else Statements](#if-else-statements)
- [While Loops](#while-loops)
- [Use Cases](#use-cases)
- [Resources](#resources)

## Variables

Variables are used to store data values that can be used and manipulated within a program. In C, variable names must be declared before they are used. A variable declaration specifies the type of the variable and optionally initializes it with a value. Here's an example:

```c
#include <stdio.h>

int main() {
    int age; // Declaration
    age = 25; // Initialization

    printf("My age is %d\n", age);
    return 0;
}
