# 0x05. C - Pointers, arrays, and strings

This repository contains solutions to exercises related to pointers, arrays, and strings in the C programming language. The exercises are part of the Holberton School curriculum.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Files](#files)
- [Authors](#authors)
- [License](#license)

## Introduction

C is a powerful programming language that allows direct memory manipulation through the use of pointers. Pointers are variables that store memory addresses, enabling efficient memory access and manipulation. Arrays and strings are fundamental data structures in C and are closely related to pointers.

This repository covers exercises related to pointers, arrays, and strings, aiming to provide a deeper understanding of these concepts and improve programming skills in C.

## Getting Started

To get started, follow the instructions below to clone the repository and compile the C files:

1. Open a terminal.

2. Clone the repository using the following command:
   ```
   git clone https://github.com/your_username/your_repository.git
   ```

3. Navigate to the cloned directory:
   ```
   cd your_repository
   ```

4. Compile the C files using a C compiler (e.g., GCC):
   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o executable_name
   ```

## Usage

After compiling the C files, you can run the resulting executable by typing its name in the terminal. The available programs and their purposes are described in the [Files](#files) section below.

Make sure to provide the necessary inputs as prompted or modify the programs according to your needs.

## Files

Below is a brief description of the files in this repository:

| File                    | Description                                                   |
| ----------------------- | ------------------------------------------------------------- |
| `0-reset_to_98.c`       | Function that takes a pointer to an `int` and updates the value it points to `98`. |
| `1-swap.c`              | Function that swaps the values of two integers. |
| `2-strlen.c`            | Function that returns the length of a string. |
| `3-puts.c`              | Function that prints a string to the standard output. |
| `4-print_rev.c`         | Function that prints a string in reverse. |
| `5-rev_string.c`        | Function that reverses a string. |
| `6-puts2.c`             | Function that prints every other character of a string. |
| `7-puts_half.c`         | Function that prints the second half of a string. |
| `8-print_array.c`       | Function that prints `n` elements of an array of integers. |
| `9-strcpy.c`            | Function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`. |
| `100-atoi.c`            | Function that converts a string to an integer. |
| `101-keygen.c`          | Program that generates random valid passwords for the 101-crackme program. |

## Authors

This repository contains solutions developed by [Your Name](https://github.com/your_username).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
