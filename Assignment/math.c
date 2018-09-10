/*
 * math.c
 *
 *  Created on: Sep 10, 2018
 * 	Last Edited: Sept 10, 2018
 *      Author: John Garvey
 */

//Import the "math.h" header file
#include "math.h"

// Valid operator characters are: + - * / % < > & | ^ ~
// If a invalid character is used, the program returns a 0

int math(int num1, int num2, char Operator){
  //The addiiton operator
  if (Operator == '+'){
    return num1 + num2;
  }

  //The subtraction operator
  else if (Operator == '-'){
    return num1 - num2;
  }

  //The multiplication operator
  else if (Operator == '*'){
    return num1 - num2;
  }

  //The division operator
  else if (Operator == '/'){
    return num1 / num2;
  }

  //The modulus operator
  else if (Operator == '%'){
    return num1 % num2;
  }

  //The shift left operator
  else if (Operator == '<'){
    return num1 << num2;
  }

  //The shift right operator
  else if (Operator == '>'){
    return num1 >> num2;
  }

  //The bitwise AND operator
  else if (Operator == '&'){
    return num1 & num2;
  }

  //The bitwise OR operator
  else if (Operator == '|'){
    return num1 | num2;
  }
  
  //The bitwise XOR operator
  else if (Operator == '^'){
    return num1 ^ num2;
  }

  //The inverse operator
  else if (Operator == '~'){
    return ~num1;
  }

  //Returns 0 if an invalid character is used
  else {
    return 0;
  }
}
