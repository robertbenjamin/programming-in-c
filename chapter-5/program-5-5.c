#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int year;
  int divis_by_4;
  int divis_by_100;
  int divis_by_400;

  printf("Enter the year to be tested: ");
  scanf("%i", &year);

  divis_by_4 = (year % 4) == 0;
  divis_by_100 = (year % 100) == 0;
  divis_by_400 = (year % 400) == 0;

  bool divis_by_4_not_100 = divis_by_4 && !divis_by_100;

  if (divis_by_4_not_100 || divis_by_400) {
    printf("It's a leap year.\n");
  } else {
    printf("Nope, it's not a leap year.\n");
  }


  return 0;
}
