0x0A-argc_argv

This repository contains examples and exercises related to the use of `argc` and `argv` in C programming.

## Description

The `argc` and `argv` are commonly used in C programming to handle command-line arguments passed to a program. When a C program is executed from the command line, the arguments provided after the program name are stored in the `argv` array, and the number of arguments is stored in the `argc` variable.

This repository provides examples and exercises to help you understand and practice using `argc` and `argv` in C programs.

## Contents

The repository contains the following files:

- `0-whatsmyname.c`: This program prints its own name, using the `argv` array.
- `1-args.c`: This program prints the number of arguments passed to it.
- `2-args.c`: This program prints all the arguments passed to it, one per line.
- `3-mul.c`: This program multiplies two numbers passed as arguments.
- `4-add.c`: This program adds positive numbers passed as arguments.
- `100-change.c`: This program computes the minimum number of coins required to make change for a given amount.

## Getting Started

To get started with this repository, follow these steps:

1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/your_username/0x0A-argc_argv.git
   ```

2. Navigate to the repository's directory:

   ```
   cd 0x0A-argc_argv
   ```

3. Compile the desired C program using a C compiler. For example, to compile `0-whatsmyname.c`, use the following command:

   ```
   gcc -Wall -Werror -Wextra -pedantic 0-whatsmyname.c -o whatsmyname
   ```

4. Run the compiled program with command-line arguments:

   ```
   ./whatsmyname argument1 argument2 ...
   ```

5. Explore the other programs in the repository by compiling and running them as described in steps 3 and 4.

## Examples

### Example 1: Running `0-whatsmyname.c`

```shell
$ gcc -Wall -Werror -Wextra -pedantic 0-whatsmyname.c -o whatsmyname
$ ./whatsmyname Hello World
0-whatsmyname
```

### Example 2: Running `1-args.c`

```shell
$ gcc -Wall -Werror -Wextra -pedantic 1-args.c -o args
$ ./args Hello World
Number of arguments: 3
```

### Example 3: Running `2-args.c`

```shell
$ gcc -Wall -Werror -Wextra -pedantic 2-args.c -o args
$ ./args Hello World
Argument 0: ./args
Argument 1: Hello
Argument 2: World
```

## Resources

- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Book by Brian Kernighan and Dennis Ritchie.
- [Command-line arguments in C](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/) - GeeksforGeeks article.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
