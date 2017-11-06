#include <stdio.h>

int main(void) {
  int n;
  int number;
  int triangularNumber;
  int counter;

  // For 5 times
  for (counter = 1; counter <= 5; counter++) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    // Reset the triangular number
    triangularNumber = 0;

    // Calculate the current triangular number
    for (n = 1; n <= number; n++) {
      triangularNumber += n;
    }

    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }

   return 0;
}
