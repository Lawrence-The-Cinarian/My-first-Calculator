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
    printf("Welcome To Cinari9 Lab's Calculator\n")
printf("Enter 1 for using an Operand for square roots, cube roots, cubes and squares, Enter 2 for using two numbers for basic operations(+, -, \, *)\n");
  printf("Enter number: ");
  scanf("%d", &operand);
  if(operand == 1) {
    printf("Step 1: Enter Number For Calculation\n");
    printf("Step 2: Enter number in the options for calculations\n");
    printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("Enter Number for Calculation: ");
    scanf("%lf", &fnum);  
   printf("Enter Number from the options above: ");
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 4) {
      
    }
    else printf("Program Terminated");
  }
  else if(operand == 2) {}
    
    else(operand < 0 && operand > 2) {
    printf("Invalid Input\n");
    return 1;
    }
    
    }
    while(operand != 0);
  return 0;
}
