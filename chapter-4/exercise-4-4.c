#include <stdio.h>

int main(void) {
  printf("   TABLE OF FACTORIALS\n\n");

  printf("   n          factorial\n");
  printf(" -----       -----------\n");

  for (int i = 1; i <= 10; i++) {
    int currentIteration = 1;

    for (int x = 1; x <= i; x++) {
      currentIteration = currentIteration * x;
    }

    printf("  %2i           %7i\n", i, currentIteration);
  }

  return 0;
}
