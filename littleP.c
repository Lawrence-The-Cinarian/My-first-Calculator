#include "Calculator_Brain/main.h"
#include <stdio.h>
#include <string.h>
/*This is for the package learning*/

int littleP() {
  char password [20];
  printf("******************************************************\n");
  printf("Enter Password: ");
  scanf("%19s", password);
  printf("******************************************************\n");
  printf("\n");
  if(strcmp(password, "Lawxey8") == 0) {
 printf("******************************************************\n");
 printf("*                  Access Granted                    *\n");
 printf("******************************************************\n");
 printf("\n");
 printf("******************************************************\n");
 printf("*   ******    *    **   *    ******    ******     *  *\n");
 printf("*   *         *    * *  *    *    *    *******    *  *\n");
 printf("*   *         *    *  * *    ******    ******     *  *\n");
 printf("*   ******    *    *   **    *    *    *     *    *  *\n");
 printf("******************************************************\n");
 printf("\n");
  }
  else {
   printf("\n");
   printf("******************************************************\n");
   printf("*                   Access Denied                    *\n");
   printf("******************************************************\n");
   printf("\n");
   fclose(littleP.c);
    return 1;
  }
  return 0;
}
