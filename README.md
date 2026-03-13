

# Arbitrary Precision Calculator (APC) ♾️🎯🧮

Implementation of a big number calculator in C using a Doubly Linked List.

## Introduction
This project implements an Arbitrary Precision Calculator in C that can perform arithmetic operations on very large numbers. Normal C data types like int or long have limited size, so they cannot store numbers with many digits.

To overcome this limitation, this project stores numbers digit by digit using a Doubly Linked List, allowing calculations on numbers of any size limited only by system memory.

## Features
- Supports large integer calculations beyond standard data type limits
- Implements basic arithmetic operations:
  - Addition
  - Subtraction
  - Multiplication
  - Division
- Uses Doubly Linked List to store each digit of the number
- Handles carry and borrow operations similar to manual calculations
- Uses dynamic memory allocation for flexible number size

## How It Works
1. The user provides two numbers and an operator through command line arguments.
2. Each digit of the numbers is stored as a node in a Doubly Linked List.
3. Based on the operator (+, -, x, /), the corresponding arithmetic function is executed.
4. The result is stored in another linked list and printed as the final output.

## Flow
Start  
↓  
Read num1, operator, num2  
↓  
Convert numbers to Doubly Linked List  
↓  
Check operator  
→ (+) Addition  
→ (-) Subtraction  
→ (x) Multiplication  
→ (/) Division  
↓  
Store result in linked list  
↓  
Print result  
↓  
End  

## Data Structures Used
- Doubly Linked List
- Dynamic Memory Allocation

## Learning Outcomes
- Implementation of big number arithmetic
- Practical use of linked lists
- Understanding carry and borrow operations
- Application of data structures in real-world problems

## Sample Output








