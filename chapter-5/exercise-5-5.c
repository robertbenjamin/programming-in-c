// Program to reverse the digits of a number

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int number;
  int right_digit;
  bool isNegative = false;

  printf("Enter your number.\n");
  scanf("%i", &number);

  do {
    right_digit = number % 10;

    if (right_digit < 0) {
      isNegative = true;
      printf("%i", right_digit * -1);
    } else {
      printf("%i", right_digit);
    }

    number = number / 10;
  } while (number != 0);

  if (isNegative) {
    printf("-");
  }

  printf("\n");

  return 0;
}
