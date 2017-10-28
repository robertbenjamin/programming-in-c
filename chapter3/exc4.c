#include <stdio.h>

int fahrenheitToCelsius(int degreesFahrenheit);

int main(void) {
  int tempInFahrenheit = 27;

  int tempInCelsius = fahrenheitToCelsius(tempInFahrenheit);

  printf("%d in degrees Fahrenheit is %d degrees Celsius.\n", tempInFahrenheit, tempInCelsius);

  return 0;
}

int fahrenheitToCelsius(int degreesFahrenheit) {
  return (degreesFahrenheit - 32) / 1.8;
}
