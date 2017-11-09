#include <stdio.h>

int main(void) {
  int n;
  int number;
  int numberSquared;

  printf(" TABLE OF N AND N^2\n\n");
  printf("   n          n^2\n");
  printf("-------    ---------\n");

  for (int i = 0; i < 10; i++) {
    number = i + 1;
    numberSquared = number * number;
    printf("  %2i          %3i\n", number, numberSquared);
  }
}
