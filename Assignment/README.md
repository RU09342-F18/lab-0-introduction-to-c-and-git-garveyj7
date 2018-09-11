# Lab Exercise 0: Introduction to C, Git, and the MSP430
This exercise was based around implementing a math function defined in "math.h" into "math.c"

## What does this code do?
By using the new function, the user can use a variety of different operators to perform calculations on two numbers(num1 and num2).

This differs from using the traditional math function because this program allows for a different structure for calculations:
  int math(int num1, int num2, char Operator);

## Running the code
Valid operators are: 
* Addition: + 
* Subtraction: - 
* Multiplication: * 
* Division: / 
* Modulus: %
* Shift left: <
* Shift right: > 
* Bitwise AND: &
* Bitwise OR: |
* Bitwise XOR: ^
* Bitwise inverse: ~
  * Note: num1 and num2 are still needed for the inverse operation, but it is performed on num1.
  
The implementation has built in protection against invalid characters; if the user uses an invalid character or operator, the program returns a 0.

### Examples of functions
int math(int 10, int 20, char +);
  This would return 20

int math(int 10, int 1, char /);
  This would return 10

int math(int 1, int 2, char a);
  This would return a 0, because the character is invalid
