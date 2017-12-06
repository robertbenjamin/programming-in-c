#include <stdio.h>
#include <math.h>

int main(void) {
  int number;
  int tempNumber;
  int currentNumber;
  int numberLength = 0;

  printf("Please enter your number: ");
  scanf("%i", &number);

  tempNumber = number;

  do {
    numberLength++;
    tempNumber /= 10;
  } while (tempNumber != 0);

  for (int i = numberLength; i > 0; i--) {
    tempNumber = number;
    tempNumber /= pow(10, i - 1);
    currentNumber = tempNumber % 10;

    switch(currentNumber) {
      case 1:
        printf("one ");
        break;
      case 2:
        printf("two ");
        break;
      case 3:
        printf("three ");
        break;
      case 4:
        printf("four ");
        break;
      case 5:
        printf("five ");
        break;
      case 6:
        printf("six ");
        break;
      case 7:
        printf("seven ");
        break;
      case 8:
        printf("eight ");
        break;
      case 9:
        printf("nine ");
        break;
      case 0:
        printf("zero ");
        break;
      default:
        break;
    }
  }

  printf("\n");

  return 0;
}
