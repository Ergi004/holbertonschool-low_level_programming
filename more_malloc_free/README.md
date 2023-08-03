# Dynamic Memory Allocation and Deallocation in C

Dynamic memory allocation in C allows you to allocate memory at runtime, which is essential for managing memory efficiently and flexibly. The `malloc` and `free` functions are used for allocating and deallocating memory on the heap, respectively.

## Table of Contents

- [Introduction](#introduction)
- [Advantages of Dynamic Memory Allocation](#advantages-of-dynamic-memory-allocation)
- [Using malloc and free](#using-malloc-and-free)
- [Common Mistakes](#common-mistakes)
- [Memory Leak Prevention](#memory-leak-prevention)
- [Resources](#resources)

## Introduction

In C, memory allocation can be performed in two main areas: the stack and the heap. Stack memory is automatically managed and used for local variables, while heap memory is manually allocated and deallocated using `malloc` and `free`.

## Advantages of Dynamic Memory Allocation

Dynamic memory allocation offers several advantages:

- **Flexibility**: Allocate memory based on program needs, enabling you to adapt to runtime requirements.
- **Resource Management**: Efficiently manage memory resources, especially for large or dynamically changing data structures.
- **Data Persistence**: Heap memory is not limited by function scope, allowing data to persist even after a function call.

## Using malloc and free

### Allocation with `malloc`:

```c
#include <stdlib.h>

int* allocateIntArray(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    return array;
}
