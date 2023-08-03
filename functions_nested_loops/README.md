# Functions and Nested Loops in C

Functions and nested loops are fundamental building blocks in the C programming language. Functions allow you to modularize your code, and nested loops enable you to perform repetitive tasks with increasing complexity.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
- [Nested Loops](#nested-loops)
- [Example](#example)
- [Use Cases](#use-cases)
- [Resources](#resources)

## Introduction

Functions in C are blocks of code that perform specific tasks. They help break down complex tasks into smaller, manageable components. Nested loops involve placing one loop inside another, allowing you to iterate over multiple dimensions of data.

## Functions

A function in C has the following parts:

- Return type: Specifies the type of value the function returns (if any).
- Function name: A unique identifier for the function.
- Parameters: Values that the function receives as input.
- Function body: The actual code that the function executes.

## Nested Loops

Nested loops are loops that are placed inside other loops. This arrangement is particularly useful for processing multi-dimensional data structures or performing repetitive tasks with different combinations of variables.

## Example

Here's an example of a function with nested loops that prints a multiplication table:

```c
#include <stdio.h>

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printMultiplicationTable(number);

    return 0;
}
