// Rewrite of program 4-3 using while statments

// Program to generate a table of triangular numbers

#include <stdio.h>

int main(void) {
  int n = 1;
  int triangularNumber = 0;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");

  printf(" n    Sum from 1 to n\n");
  printf("---   ---------------\n");

  do {
    triangularNumber += n;
    printf("%2i           %i\n\n", n, triangularNumber);
    n++;
  } while (n <= 10);

  return 0;
}
