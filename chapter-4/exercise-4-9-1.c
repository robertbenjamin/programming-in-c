// Rewrite of program 4.2 using while statements

/* Program to calculate the 200th triangular number
 * Introduction of the for statement
 */

#include <stdio.h>

int main(void) {
  int n = 1;
  int triangularNumber = 0;

  do {
    triangularNumber = triangularNumber + n;
    n++;
  } while (n <= 200);

  printf("The 200th triangular number is %i.\n", triangularNumber);

  return 0;
}
