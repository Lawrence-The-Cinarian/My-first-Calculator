#include "Calculator_Brain/main.h"
#include <stdio.h>
#include <string.h>
/*This is for the package learning*/

int littleP() {
  char password [20];
  printf("\t╔════════════════════════════════════════════════════╗\n");
  printf("\t║Enter Password: ");
  scanf("%19s", password);
  printf("\t╚════════════════════════════════════════════════════╝\n");
  printf("\n");
  if(strcmp(password, "Lawxey8") == 0) {
 printf("\t╔════════════════════════════════════════════════════╗\n");
 printf("\t║                  Access Granted                    ║\n");
 printf("\t╚════════════════════════════════════════════════════╝\n");
 printf("\n");
 printf("\t╔════════════════════════════════════════════════════╗\n");
 printf("\t║   ******    *    **   *    ******    ******     *  ║\n");
 printf("\t║   *         *    * *  *    *    *    *******    *  ║\n");
 printf("\t║   *         *    *  * *    ******    ******     *  ║\n");
 printf("\t║   ******    *    *   **    *    *    *     *    *  ║\n");
 printf("\t╚════════════════════════════════════════════════════╝\n");
 printf("\n");
  }
  else {
   printf("\n");
   printf("\t╔════════════════════════════════════════════════════╗\n");
   printf("\t║                   Access Denied                    ║\n");
   printf("\t╚════════════════════════════════════════════════════╝\n");
   printf("\n");
    return 1;
  }
  return 0;
}
