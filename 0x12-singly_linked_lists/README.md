# Singly Linked Lists in C

This repository contains an implementation of singly linked lists in C. A singly linked list is a data structure that consists of a sequence of nodes, where each node contains two parts: data and a reference (or pointer) to the next node in the sequence. This allows for efficient insertion and deletion of elements at the beginning, middle, and end of the list.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Functions](#functions)
- [Contributing](#contributing)

## Introduction

A singly linked list is a fundamental data structure that can be used in various applications, such as representing dynamic lists, implementing stacks and queues, and solving various programming problems.

This implementation provides a set of functions to create, manipulate, and manage singly linked lists. It includes functions to insert elements at the beginning and end, delete elements, search for specific values, and print the contents of the list.

## Features

The key features of this implementation include:

- Creation of an empty singly linked list
- Insertion of elements at the beginning of the list
- Insertion of elements at the end of the list
- Deletion of elements from the list
- Searching for a specific element in the list
- Printing the contents of the list

## Usage

To use the singly linked list implementation in your C project, follow these steps:

1. Clone this repository to your local machine:

   ```
   git clone https://github.com/your_username/singly-linked-list-c.git
   ```

2. Include the `singly_linked_list.h` header file in your C code:

   ```c
   #include "singly_linked_list.h"
   ```

3. Compile your code along with the `singly_linked_list.c` file:

   ```
   gcc -o your_program your_program.c singly_linked_list.c
   ```

4. Now, you can use the functions provided in the `singly_linked_list.c` file to create, manipulate, and manage singly linked lists.

## Functions

The following functions are available for working with the singly linked list:

- `struct Node* createNode(int data)`: Creates a new node with the given data and returns a pointer to it.
- `void insertAtBeginning(struct Node** head, int data)`: Inserts a new node with the given data at the beginning of the list.
- `void insertAtEnd(struct Node** head, int data)`: Inserts a new node with the given data at the end of the list.
- `void deleteNode(struct Node** head, int key)`: Deletes the first occurrence of the node with the specified data value.
- `struct Node* search(struct Node* head, int key)`: Searches for a node with the specified data value and returns a pointer to it.
- `void printList(struct Node* head)`: Prints the elements of the list in order.

## Contributing

If you find any issues with the implementation or have suggestions for improvements, feel free to contribute. You can open issues, create pull requests, or contact the repository owner for discussions.
