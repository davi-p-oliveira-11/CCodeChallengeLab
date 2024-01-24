#include <stdio.h>

int main() {

  int number, successor, predecessor;

  printf("Enter a integer number: ");
  scanf("%d", &number);
  getchar();

  successor = number + 1;
  predecessor = number - 1;

  printf("The successor de %d is equal to %d \n", number, successor);
  printf("The predecessor de %d is equal to %d \n", number, predecessor);
  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
