# DSA Task Two - Factorial Using Stacks

## 1. Project Description

This project is a Data Structures and Algorithms implementation of factorial computation using the Stack data structure.

The program calculates the factorial of a non-negative integer using two different approaches:

1. Forward Stack
2. Backward Stack

For example, when n = 5:

5! = 1 × 2 × 3 × 4 × 5 = 120

The program also displays the intermediate multiplication steps and compares the results obtained from both approaches.

---

## 2. Objectives

The objectives of this project are to:

- Implement a Stack data structure in C++.
- Demonstrate the LIFO (Last In, First Out) principle.
- Implement push, pop, peek, isEmpty and isFull operations.
- Calculate factorial using a forward stack.
- Calculate factorial using a backward stack.
- Validate user input.
- Demonstrate real-world applications of stacks.

---

## 3. Technologies Used

- C++
- Microsoft Visual Studio Code
- MSYS2 UCRT64 / g++
- Git and GitHub

---

## 4. Stack Implementation

The program contains a custom Stack class implemented using an array.

### Main Stack Operations

### Push

Adds an element to the top of the stack.

### Pop

Removes the element at the top of the stack.

### Peek

Views the element at the top without removing it.

### isEmpty

Checks whether the stack contains no elements.

### isFull

Checks whether the stack has reached its maximum capacity.

The stack follows the LIFO principle:

Last In → First Out

---

## 5. Forward Stack

In the forward stack approach, the program first pushes the numbers from 1 to n.

For n = 5:

Push:

1 → 2 → 3 → 4 → 5

Because a stack follows LIFO, the values are removed in this order:

5 → 4 → 3 → 2 → 1

The factorial is then calculated:

5 × 4 × 3 × 2 × 1 = 120

Therefore:

5! = 120

---

## 6. Backward Stack

In the backward stack approach, the program pushes the numbers from n down to 1.

For n = 5:

Push:

5 → 4 → 3 → 2 → 1

The stack then removes the values in this order:

1 → 2 → 3 → 4 → 5

The factorial is calculated as:

1 × 2 × 3 × 4 × 5 = 120

Therefore:

5! = 120

---

## 7. Sample Output

When the user enters 5, the program produces output similar to:

=====================================
       FACTORIAL USING STACKS
=====================================
Enter a non-negative integer: 5

Forward Stack:
Multiply by 5 = 5
Multiply by 4 = 20
Multiply by 3 = 60
Multiply by 2 = 120
Multiply by 1 = 120

Forward Result: 5! = 120

Backward Stack:
Multiply by 1 = 1
Multiply by 2 = 2
Multiply by 3 = 6
Multiply by 4 = 24
Multiply by 5 = 120

Backward Result: 5! = 120

=====================================
Both methods produced the same result.
=====================================

---

## 8. Input Validation

The program checks whether the user enters a valid non-negative integer.

Negative numbers and invalid input are rejected.

The program also handles the mathematical special case:

0! = 1

---

## 9. Applications of Stacks

Stacks are commonly used in:

- Function calls and program execution
- Recursion
- Undo and redo operations
- Browser navigation
- Expression evaluation
- Parentheses and bracket matching
- Backtracking algorithms
- Maze-solving algorithms

---

## 10. Complexity Analysis

Both the forward and backward factorial methods process n elements.

Time Complexity:

O(n)

Space Complexity:

O(n)

Each push and pop operation takes constant time, O(1).

---

## 11. Files in This Project

```text
Factorial Stack/
│
├── factorial_stack.cpp
├── README.md
└── documentation/
    └── DSA_Task_Two_Factorial_Using_Stacks_Report.docx