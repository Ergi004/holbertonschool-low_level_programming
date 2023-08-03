# C Preprocessor

The C preprocessor is a tool that processes your source code before it is compiled. It performs various preprocessing tasks, such as macro expansion, file inclusion, and conditional compilation. The preprocessor directives are lines in your code that start with a hash symbol (#).

## Table of Contents

- [Introduction](#introduction)
- [Preprocessor Directives](#preprocessor-directives)
- [Macro Definitions](#macro-definitions)
- [File Inclusion](#file-inclusion)
- [Conditional Compilation](#conditional-compilation)
- [Common Predefined Macros](#common-predefined-macros)
- [Use Cases](#use-cases)
- [Resources](#resources)

## Introduction

The C preprocessor operates before the actual compilation process and transforms your source code based on the preprocessor directives you've used. This allows you to perform tasks that can help make your code more modular, readable, and adaptable.

## Preprocessor Directives

Preprocessor directives are instructions to the preprocessor, and they all start with the hash symbol (#). Some common preprocessor directives include:

- `#define`: Defines a macro.
- `#include`: Includes a file in your source code.
- `#ifdef`, `#ifndef`, `#elif`, `#else`, `#endif`: Used for conditional compilation.
- `#pragma`: Provides instructions to the compiler.
- `#error`: Generates a compilation error with a custom message.

## Macro Definitions

Macros are defined using the `#define` directive. They are essentially textual substitutions that the preprocessor performs before compilation. Macros can take arguments and can be used to create more readable and maintainable code.

```c
#define PI 3.14159265
#define SQUARE(x) ((x) * (x))

double area = PI * SQUARE(radius);

