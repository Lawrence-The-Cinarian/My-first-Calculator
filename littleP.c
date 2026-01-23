#include "Calculator_Brain/main.h"
#include <stdio.h>
#include <string.h>
/*This is for the package learning*/

int littleP() {
  char password [7];
  printf("Enter Password: ");
  scanf("%6s", password);
  if(strcmp(password, 'Lawrex+17') == 0) {
    printf("Access Granted........\n");
      printf("Cinari Labs Display **************\n");
    return 1;
  }
  else {
    printf("Access denied..........\n");
    return 1;
  }
  return 0;
}
