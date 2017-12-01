#include <stdio.h>

int main(void) {
  int firstNumber;
  int secondNumber;

  printf("Please enter two numbers to be divided: ");
  scanf("%i %i", &firstNumber, &secondNumber);

  if (secondNumber == 0) {
    printf("Can't divide by zero, silly.\n");
  } else {
    printf("%i / %i = %.3f\n", firstNumber, secondNumber, (float) firstNumber / secondNumber);
  }

  return 0;
}
