/* To round off an integer i to the next largest even multiple:
 * next_multiple = i + j - i % j
 */

#include <stdio.h>

int next_even_multiple(int i, int j);

int main(void) {
  printf("Let's find the next largest evenly divisible number for a few sets.\n");
  printf("The next largest even multiple when:\n");
  printf("i = 365 and j = 7 is %d\n", next_even_multiple(365, 7));
  printf("i = 12,258 and j = 23 is %d\n", next_even_multiple(12258, 23));
  printf("i = 996 and j = 4 is %d\n", next_even_multiple(996, 4));

  return 0;
}

int next_even_multiple(int i, int j) {
  return i + j - i % j;
}
