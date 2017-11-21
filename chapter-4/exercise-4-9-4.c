// Rewrite of program 4.5 using while statements

#include <stdio.h>

int main(void) {
  int n;
  int number;
  int triangularNumber;
  int counter = 1;

  do {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;
    n = 1;

    do {
      triangularNumber += n;
      n++;
    } while (n <= number);

    printf("Triangular number %i is %i\n\n", number, triangularNumber);
    counter++;
  } while (counter <= 5);

   return 0;
}
