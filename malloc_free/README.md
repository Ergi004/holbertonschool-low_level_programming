# Dynamic Memory Allocation in C: `malloc` and `free`

Dynamic memory allocation is a crucial feature in the C programming language that allows you to allocate and deallocate memory during runtime. The functions `malloc` and `free` are used for allocating and releasing memory on the heap, offering flexibility in managing memory resources.

## Table of Contents

- [Introduction](#introduction)
- [Using `malloc` to Allocate Memory](#using-malloc-to-allocate-memory)
- [Using `free` to Release Memory](#using-free-to-release-memory)
- [Memory Leak Prevention](#memory-leak-prevention)
- [Use Cases](#use-cases)
- [Resources](#resources)

## Introduction

In C, static memory allocation (using arrays) has limitations, such as requiring the memory size to be known at compile time. Dynamic memory allocation, on the other hand, allows you to allocate memory during program execution, making it suitable for cases where the memory requirements are not known in advance.

## Using `malloc` to Allocate Memory

The `malloc` function (short for "memory allocation") is used to allocate a block of memory on the heap. It takes the number of bytes to allocate as an argument and returns a pointer to the beginning of the allocated memory block.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for an integer array
    arr = (int *)malloc(size * sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the allocated memory
    // ...

    // Deallocate the memory when done
    free(arr);

    return 0;
}
