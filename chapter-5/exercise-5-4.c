#include <stdio.h>

int main(void) {
  float number;
  char operator;
  float accumulator;

  printf("Begin Calculations\n");
  accumulator = 0;

  while (operator != 'E') {
    scanf("%f %c", &number, &operator);

    switch (operator) {
      case '+':
        accumulator += number;
        printf("= %f\n", accumulator);
        break;
      case '-':
        accumulator -= number;
        printf("= %f\n", accumulator);
        break;
      case '*':
        accumulator *= number;
        printf("= %f\n", accumulator);
        break;
      case '/':
        if (number == 0) {
          printf("Can't divide by zero.\n");
          break;
        }

        accumulator /= number;
        printf("= %f\n", accumulator);
        break;
      case 'S':
        accumulator = number;
        printf("= %f\n", accumulator);
        break;
      case 'E':
        printf("= %f\n", accumulator);
        break;
      default:
        printf("Unknown operator, please try again.\n");
        break;
    }
  }

  printf("End of Calculations\n");

  return 0;
}
