#include <stdio.h>

int main () {

  int valueA, valueB, valueC, delta;

  printf("Enter the value of A ");
  scanf("%d", &valueA);
  getchar();

  printf("Enter the value of B ");
  scanf("%d", &valueB);
  getchar();

  printf("Enter the value of C ");
  scanf("%d", &valueC);
  getchar();

  /* Bhaskara's formula:  delta = b² - 4ac */
  delta = valueB * valueB - 4 * (valueA * valueC);

  printf("The value of delta is %d \n", delta);
  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
