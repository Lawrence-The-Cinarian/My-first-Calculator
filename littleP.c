#include "Calculator_Brain/main.h"
#include <stdio.h>
#include <string.h>
/*This is for the package learning*/

int littleP() {
  char password [20];
  printf("Enter Password: ");
  scanf("%19s", password);
  if(strcmp(password, "Lawrex+17") == 0) {
    printf("Access Granted........\n");
    printf("***** * **   * ***** *****  *\n");
    printf("*.    * * *  * *   * ****** *\n");
    printf("*.    * *  * * ***** *****  *\n");
    printf("***** * *   ** *   * *    * *\n");
  }
  else {
    printf("Access denied..........\n");
    return 1;
  }
  return 0;
}
