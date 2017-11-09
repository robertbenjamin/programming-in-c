#include <stdio.h>

int main(void) {
  int triangularNumber;

  printf("   TABLE OF TRIANGULAR NUMBERS\n\n");
  printf("  number      triangular number \n");
  printf(" --------    -------------------\n");

  for (int i = 5; i <= 50; i += 5) {
    triangularNumber = i * (i + 1) / 2;
    printf("    %2i              %4i\n", i, triangularNumber);
  }

  return 0;
}
