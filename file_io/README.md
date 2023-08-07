# C - File I/O

This repository contains examples and explanations of how to perform File Input/Output (I/O) operations in the C programming language. File I/O is an essential skill for reading and writing data from and to files, which is a common task in programming.

## Table of Contents

1. [Introduction to File I/O](#introduction-to-file-io)
2. [Opening a File](#opening-a-file)
3. [Reading Data from a File](#reading-data-from-a-file)
4. [Writing Data to a File](#writing-data-to-a-file)
5. [Closing a File](#closing-a-file)
6. [Error Handling](#error-handling)
7. [Examples](#examples)
8. [Contributing](#contributing)
9. [License](#license)

## Introduction to File I/O

File I/O involves operations to read data from and write data to files on a computer's storage system. C provides standard library functions for performing these operations, which are typically done using file pointers.

## Opening a File

To open a file, you can use the `fopen()` function. It requires the filename and the mode in which you want to open the file (read, write, append, etc.). The function returns a file pointer that you will use for subsequent operations.

```c
FILE *file_ptr;
file_ptr = fopen("example.txt", "r"); // Opens in read mode
if (file_ptr == NULL) {
    // Handle error
}
