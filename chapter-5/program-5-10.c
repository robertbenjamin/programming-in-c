#include <stdio.h>
#include <stdbool.h>

int main(void) {
  _Bool isPrime;

  for (int p = 2; p <= 50; p++) {
    isPrime = true;

    for (int d = 2; d < p; d++) {
      if (p % d == 0) {
        isPrime = false;
      }
    }

    if (isPrime != false) {
      printf("%i  ", p);
    }
  }

  printf("\n");
  return 0;
}
