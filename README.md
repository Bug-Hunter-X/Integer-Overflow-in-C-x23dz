# Integer Overflow in C
This repository demonstrates an example of integer overflow in C and its solution.

## Bug Description
Integer overflow occurs when an arithmetic operation attempts to create a numeric value that is outside the range that can be represented by the data type involved. In C, this can lead to unpredictable behavior, including program crashes or unexpected results.

## Bug
The `bug.c` file demonstrates an integer overflow when adding 1 to the maximum value of a signed integer. 

## Solution
The `bugSolution.c` file demonstrates a solution that checks for potential integer overflows before performing the addition operation to prevent unexpected behavior.