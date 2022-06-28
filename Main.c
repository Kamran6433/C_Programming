#include <stdio.h>

int main(void) {

  int fahrenheit, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahrenheit = lower;
  printf("Fahrenheit: \t Celcius:\n");
  while (fahrenheit <= upper) {
    celcius = 5 * (fahrenheit - 32) / 9;
    printf("%d \t\t %d \n", fahrenheit, celcius);
    fahrenheit = fahrenheit + step;
  }
}