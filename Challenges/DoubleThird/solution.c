#include <stdio.h>

int main() {

  float number, doubleOf, oneThird;

  printf("Enter a number: ");
  scanf("%f", &number);
  getchar();

  doubleOf = number * 2;
  oneThird = number / 3;

  printf("The double of %.1f is %.1f \n", number, doubleOf);
  getchar();

  printf("One third of %.1f is %.1f \n", number, oneThird);
  getchar();
  
  printf("Press Enter to Exit ...");
  getchar();
  
  return 0;
}
