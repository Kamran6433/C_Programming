#include <stdio.h>

int main(void) {

  float fahrenheit, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahrenheit = lower;
  printf("Fahrenheit: \t Celcius:\n");
  while (fahrenheit <= upper) {
    celcius = (5.0/9.0) * (fahrenheit - 32.0);
    printf("%0.2f \t\t %0.2f \n", fahrenheit, celcius);
    fahrenheit = fahrenheit + step;

  }
}