/******************
Name: Ido Itzhak
ID: 69420
Assignment: Assignment 1
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int userNumberInput;
  int userPositionInput;

  // What bit
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &userNumberInput);
  printf("Please enter a position:\n");
  scanf("%d", &userPositionInput);
  int result = userNumberInput >> userPositionInput;
  result = result & 1; //Using 1 because its binary representation is 0..001, and we want only the last digit.
  printf("The bit in position %d of number %d is: %d\n", userPositionInput, userNumberInput, result);
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &userNumberInput);
  printf("Please enter a position:\n");
  scanf("%d", &userPositionInput);
  int bitMask = 1 << userPositionInput; //mask that sets 1 in given position and rest of bits are 0.
  printf("Number with bit %d set to 1: %d\n", userPositionInput, userNumberInput | bitMask);
  printf("Number with bit %d set to 0: %d\n", userPositionInput, userNumberInput & ~bitMask);

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &userNumberInput);
  printf("Please enter a position:\n");
  scanf("%d", &userPositionInput);
  bitMask = 1 << userPositionInput;
  result = userNumberInput ^ bitMask;
  printf("Number with bit %d toggled: %d\n", userPositionInput, result);

  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n");
  scanf("%d", &userNumberInput);
  result = 1 & userNumberInput; // keeps only LSB
  result = 1 ^ result; //Toggle last bit to match with wanted output.
  printf("%d\n", result);

  // 3, 5, 7, 11
  int userSecondNumberInput;
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal):\n");
  scanf("%o", &userNumberInput);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &userSecondNumberInput);
  result = userNumberInput+userSecondNumberInput;
  printf("The sum in hexadecimal: %X\n", result);
  int resultBit3 = result >> 3; // shifting 3 so bit 3 will be in position 0
  resultBit3 = resultBit3 & 1; //Using same logic that was figured in 'What Bit' above.
  int resultBit5 = result >> 5;
  resultBit5 = resultBit5 & 1;
  int resultBit7 = result >> 7;
  resultBit7 = resultBit7 & 1;
  int resultBit11 = result >> 11;
  resultBit11 = resultBit11 & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", resultBit3, resultBit5, resultBit7, resultBit11);


  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
