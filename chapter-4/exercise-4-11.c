// Program that calculates the sum of digits of an integer

#include <stdio.h>

int main(void) {
  int number;
  int sum = 0;

  printf("Please enter a number to be summed: ");
  scanf("%i", &number);

  while (number != 0) {
    int rightDigit = number % 10;
    sum += rightDigit;
    number = number / 10;
  }

  printf("The sum of all digits in your number is %i.\n", sum);

  return 0;
}
