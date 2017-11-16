#include <stdio.h>

int main(void) {
  int n;
  int number;
  int triangularNumber;
  int counter;
  int timesToRun;

  printf("How many times do you want to calculate? ");
  scanf("%i", &timesToRun);

  printf("\n");

  for (counter = 1; counter <= timesToRun; counter++) {
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
