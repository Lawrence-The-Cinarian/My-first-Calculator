#include "Calculator_Brain/main.h"
#include <stdio.h>
#include <math.h>

int simpleC() {
  int operand;
  double answer; //for answers to the inputs
  double fnum; //for representation of first number
  double snum; //for representation of second number
  int choice;//for choices during switch/case creation
  
  /*This is to loop the program so don't you run it again, to cancel use CTRL+C*/
  
  do{ 
  printf("╔════════════════════════════════════════════════════╗\n");
  printf("║         Welcome To Cinari Lab's Calculator         ║\n");
  printf("╚════════════════════════════════════════════════════╝\n");
  printf("\n");
  printf("╔════════════════════════════════════════════════════╗\n");
  printf("║Use 1 for using a NO. for square/roots, cubes/square║\n");
  printf("║Use 2 for using two NOs for Basic operations        ║\n");
  printf("║                 Enter number: ");
  scanf("%d", &operand);
  printf("╚════════════════════════════════════════════════════╝\n");
  printf("\n");
  if(operand <= 0 || operand >= 3) {
   printf("╔════════════════════════════════════════════════════╗\n");
   printf("║                   Invalid Input                    ║\n");
   printf("╚════════════════════════════════════════════════════╝\n");
   }
    
  else if(operand == 1) {
   printf("╔════════════════════════════════════════════════════╗\n");
   printf("║Step 1: Enter NO. For Calculation                   ║\n");
   printf("║Step 2: Enter NO. in the options for calculations   ║\n");
   printf("║                   (1) Square Root                  ║\n");
   printf("║                   (2) Cubic Root                   ║\n");
   printf("║                   (3) Square                       ║\n");
   printf("║                   (4) Cubic                        ║\n");
   printf("╚════════════════════════════════════════════════════╝\n");
   printf("\n");
   printf("╔════════════════════════════════════════════════════╗\n");
   printf("║Enter Number for Calculation: ");
   scanf("%lf", &fnum);
   printf("╚════════════════════════════════════════════════════╝\n");
   printf("\n");
   printf("╔════════════════════════════════════════════════════╗\n");
   printf("║Enter Number from the options above: ");
   scanf("%d", &choice);
   printf("╚════════════════════════════════════════════════════╝\n");
   printf("\n");
    if(choice >= 1 && choice <= 4) {
      switch(choice) {
        case 1:
          if(fnum < 0) {
        printf("╔════════════════════════════════════════════════════╗\n");
        printf("║                Invalid Calculation                 ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        printf("\n");
        return choice;
          }
        answer = sqrt(fnum);
        break;

        case 2:
          if(fnum < 0) {
        printf("╔════════════════════════════════════════════════════╗\n");
        printf("║                Invalid Calculation                 ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        printf("\n");
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
        printf("╔════════════════════════════════════════════════════╗\n");
        printf("║                   Invalid Input                    ║\n");
        printf("╚════════════════════════════════════════════════════╝\n");
        printf("\n");
      }
      printf("╔════════════════════════════════════════════════════╗\n");
      printf("║Ans: %.2f\n", answer);
      printf("╚════════════════════════════════════════════════════╝\n");
      printf("\n");
    }
    else {
      printf("╔════════════════════════════════════════════════════╗\n");
      printf("║                 PROGRAM TERMINATED                 ║\n");
      printf("╚════════════════════════════════════════════════════╝\n");
      printf("\n");
      return choice;
      }
  }
  else if(operand == 2) {
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║Step 1: Enter Two NOs for Calculations              ║\n");
    printf("║Step 2: Enter NO. in the options for calculations   ║\n");
    printf("║                   (1) Addition                     ║\n");
    printf("║                   (2) Subtraction                  ║\n");
    printf("║                   (3) Multiplication               ║\n");
    printf("║                   (4) Division                     ║\n");
    printf("╚════════════════════════════════════════════════════╝\n");
    printf("\n");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("Enter First Number: ");
      scanf("%lf", &fnum);
    printf("╚════════════════════════════════════════════════════╝\n");
    printf("\n");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("Enter Second Number: ");
      scanf("%lf", &snum);
    printf("╚════════════════════════════════════════════════════╝\n");
    printf("\n");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("Enter Number for Operation: ");
      scanf("%d", &choice);
    printf("╚════════════════════════════════════════════════════╝\n");
    printf("\n");
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
      printf("╔════════════════════════════════════════════════════╗\n");
      printf("║                 Mathematical Error                 ║\n");
      printf("╚════════════════════════════════════════════════════╝\n");
          printf("\n");
          return choice;
        }
          answer = fnum / snum;
        break;

        default:
          printf("╔════════════════════════════════════════════════════╗\n");
          printf("║                   Invalid Input                    ║\n");
          printf("╚════════════════════════════════════════════════════╝\n");
          printf("\n");
          return choice;
      }
        printf("╔════════════════════════════════════════════════════╗\n");
        printf("║Ans: %.2f\n", answer);
        printf("╚════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else {
      printf("╔════════════════════════════════════════════════════╗\n");
      printf("║                 PROGRAM TERMINATED                 ║\n");
      printf("╚════════════════════════════════════════════════════╝\n");
      printf("\n");
      return choice;
      }
    }
  }
    while(operand != 0);
  return 0;
}
