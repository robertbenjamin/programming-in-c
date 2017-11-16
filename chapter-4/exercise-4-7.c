#include <stdio.h>

int main(void) {
  int dollars;
  int cents;
  int count;

  for (count = 1; count <= 10; count++) {
    printf("Enter dollars: ");
    scanf("%i", &dollars);
    printf("Enter cents: ");
    scanf("%i", &cents);

    printf("$%i.%.2i\n\n", dollars, cents);
  }

  return 0;
}
