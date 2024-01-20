#include <stdio.h>

int main() {

  int num1, num2, sum;

  printf("Enter a value: ");
  scanf("%d", &num1);
  getchar();

  printf("Enter another value: ");
  scanf("%d", &num2);
  getchar();

  sum = num1 + num2;

  printf("The sum of %d of %d is equal to: %d\n", num1, num2, sum);
  getchar();

  return 0;
}
