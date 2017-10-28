#include <stdio.h>
#include <math.h>

int main(void) {
  float x = 2.55;

  float polynomial = (3 * pow(x, 3)) - (5 * pow(x, 2)) + 6;

  printf("3x^3 - 5x^2 + 6 = %f when x = 2.55\n", polynomial);

  return 0;
}
