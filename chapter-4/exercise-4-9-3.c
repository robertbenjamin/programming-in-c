// Rewrite of program 4.4 using while statements

#include <stdio.h>

int main(void) {
  int n = 1;
  int number;
  int triangularNumber = 0;

  printf("What triangular number do you want? ");
  scanf("%i", &number);

  do {
    triangularNumber += n;
    n++;
  } while (n <= number);

  printf("Triangular number %i is %i.\n", number, triangularNumber);

  return 0;
}
