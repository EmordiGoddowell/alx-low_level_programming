# Readme: C Functions and Nested Loops

This readme provides an overview of C functions and nested loops, explaining their concepts, usage, and examples.

## C Functions

### What are C Functions?
In C programming, a function is a block of code that performs a specific task. Functions provide modularity and reusability by allowing you to divide your code into logical units. They can be called from other parts of the program whenever needed.

### Function Syntax
The syntax for defining a function in C is as follows:

```c
return_type function_name(parameters) {
    // Function body
    // Code to be executed
    return value; // (optional)
}
```

- `return_type`: The data type of the value returned by the function. Use `void` if the function does not return a value.
- `function_name`: The name given to the function, which is used to call it from other parts of the program.
- `parameters`: The input values passed to the function (optional).

### Function Usage
To use a function, you typically follow these steps:

1. Function Declaration: Declare the function before using it in your code. This step informs the compiler about the function's existence, return type, and parameters.
2. Function Definition: Define the function by providing the implementation in the form of a block of code.
3. Function Call: Call the function by using its name followed by parentheses and any required arguments.

### Example
Here's an example of a C function that calculates the sum of two numbers:

```c
int sum(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int total = sum(num1, num2);
    printf("The sum is: %d\n", total);
    return 0;
}
```

## Nested Loops

### What are Nested Loops?
Nested loops refer to the concept of using loops within loops. With nested loops, you can create repeated iterations of code blocks inside other code blocks. This structure allows you to perform complex iterations and handle multidimensional data structures effectively.

### Nested Loop Syntax
The basic syntax for a nested loop in C is as follows:

```c
for (initialization; condition; update) {
    // Outer loop code
    for (initialization; condition; update) {
        // Inner loop code
    }
}
```

### Nested Loop Usage
Nested loops are commonly used in scenarios where you need to perform operations on a two-dimensional array, matrix, or when dealing with nested data structures.

### Example
Here's an example of a nested loop that prints a multiplication table:

```c
#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}
```

In the example above, the outer loop iterates from 1 to 10, and for each iteration, the inner loop multiplies the value of `i` with `j` and prints the result.

## Conclusion
C functions and nested loops are essential concepts in C programming. Functions help in organizing code and making it reusable, while nested loops facilitate complex iterations and handling of multidimensional data structures. Understanding and utilizing these concepts will enhance your ability to write efficient and structured C programs.
