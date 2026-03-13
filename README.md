# Arbitrary Precision Calculator(APC) ♾️🎯🧮
Implementation of a big number calculator in C using a doubly linked list.

# Introduction

This project implements an Arbitrary Precision Calculator in C that can perform arithmetic operations on very large numbers. Normal C data types like int or long have limited size, so they cannot store numbers with many digits. To overcome this limitation, this project stores numbers digit by digit using a Doubly Linked List, allowing calculations on numbers of any size limited only by system memory.

# Features

>Supports large integer calculations beyond standard data type limits

>Implements basic arithmetic operations:

    Addition
    
    Subtraction
    
    Multiplication
    
    Division

>Uses Doubly Linked List to store each digit of the number

>Handles carry and borrow operations similar to manual calculations

>Dynamic memory allocation for flexible number size.

# How It Works

The user provides two numbers and an operator through command line arguments.

Each digit of the numbers is stored as a node in a Doubly Linked List.

Based on the operator (+, -, x, /), the corresponding arithmetic function is executed.

The result is stored in another linked list and displayed as the final output.


Start
  |
  v
Read num1, operator, num2
  |
  v
Convert numbers to doubly linked list
  |
  v
Check operator
  |
  +---- (+) ----> Addition
  |
  +---- (-) ----> Subtraction
  |
  +---- (x) ----> Multiplication
  |
  +---- (/) ----> Division
  |
  v
Store result in linked list
  |
  v
Print result
  |
  v
End






# Data Structures Used

Doubly Linked List

Dynamic Memory Allocation

# Learning Outcomes

Implementation of big number arithmetic

Practical use of linked lists

Understanding carry and borrow operations

Application of data structures in real-world problems

# Sample output












