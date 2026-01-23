#include "Calculator_Brain/main.h"
#include <stdio.h>
#include <math.h>

int simpleC() {
  int operand;
  double answer; //for answers to the inputs
  double fnum; //for representation of first number
  double snum; //for representation of second number
  int choice;//for choices during switch/case creation
  do{
  printf("Welcome To Cinari Lab's Calculator\n");
  printf("Enter 1 for using an Operand for square roots, cube roots, cubes and squares, Enter 2 for using two numbers for basic operations(+, -, \\, *)\n");
  printf("Enter number: ");
  scanf("%d", &operand);
  if(operand == 1) {
   printf("Step 1: Enter Number For Calculation\n");
   printf("Step 2: Enter Number in the options for calculations\n");
   printf("(1) Square Root\n");
   printf("(2) Cubic Root\n");
   printf("(3) Square\n");
   printf("(4) Cubic\n");
   printf("\n");
   printf("Enter Number for Calculation: ");
   scanf("%lf", &fnum);  
   printf("Enter Number from the options above: ");
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 4) {
      switch(choice) {
        case 1:
          if(fnum < 0) {
        printf("Invalid Calculation\n");
        return choice;
          }
        answer = sqrt(fnum);
        break;

        case 2:
          if(fnum < 0) {
        printf("Invalid Calculation\n");
        return choice;
          }
         answer = cbrt(fnum);
        break;

        case 3:
        answer = pow(fnum, 2);
        break;

        case 4:
        answer = pow(fnum, 3);
        break;

        default: 
        printf("Invalid Input\n");
      }
      printf("Ans: %.2f\n", answer);
    }
    else {
      printf("Program Terminated\n");
      return choice;
      }
  }
  else if(operand == 2) {
    printf("Step 1: Enter Numbers for Calculations\n");
    printf("Step 2: Enter Number in the options for calculations\n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");
    printf("(4) Division\n");
    printf("Enter First Number: ");
      scanf("%lf", &fnum);
    printf("Enter Second Number: ");
      scanf("%lf", &snum);
    printf("Enter Number for Operation: ");
      scanf("%d", &choice);
    if(choice >=1 && choice <= 4) {
      switch(choice) {
        case 1:
        answer = fnum + snum;
        break;

        case 2:
        answer = fnum - snum;
        break;

        case 3:
        answer = fnum * snum;
        break;

        case 4:
        if(snum == 0) {
          printf("Mathematical Error");
          return choice;
        }
          answer = fnum / snum;
        break;

        default:
          printf("Invalid Input\n");
          return choice;
      }
        printf("Ans: %.2f\n", answer);
      
    }
    else {
      printf("Program Terminated");
      return choice;
    }
  }
  }
    while(operand != 0);
  return 0;
    if(operand < 0 && operand > 2) {
    printf("Invalid Input\n");
    return 1;
    }
  return 0;
}
