#include <stdio.h>
#include <math.h>

int main(void) {
  float quotient = 3.31e-8 * 2.01e-7;
  float dividend = 7.16e-6 + 2.01e-8;

  printf("%g\n", quotient / dividend);

  return 0;
}
