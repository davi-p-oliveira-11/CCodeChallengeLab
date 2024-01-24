#include <stdio.h>

int main () {

  float celsius, fahrenheit, kelvin;

  printf("Enter a temperature value in Celsius: ");
  scanf("%f", &celsius);
  getchar();

  fahrenheit = (9 * celsius + 160) / 5;
  kelvin = celsius + 273;

  printf("The temperatue %.1fC is equal to %.1fF (fahrenheit) and %.1fK in Kelvin \n", celsius, fahrenheit, kelvin);
  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
