#include <stdio.h>

int main(void) {
  int firstNumber;
  int secondNumber;

  printf("Please enter two numbers: ");
  scanf("%i %i", &firstNumber, &secondNumber);

  if (secondNumber == 0) {
    printf("Can't divide by 0.\n");
  } else if (firstNumber % secondNumber == 0) {
    printf("%i is evenly divisible by %i.\n", firstNumber, secondNumber);
  } else {
    printf("%i is not evenly divisible by %i.\n", firstNumber, secondNumber);
  }

  return 0;
}
