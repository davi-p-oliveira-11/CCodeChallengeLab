#include <stdio.h>

int main() {

  int number, successor, predecessor;

  printf("Enter a integer number: ");
  scanf("%d", &number);
  getchar();

  successor = number + 1;
  predecessor = number - 1;

  printf("The successor de %d is equal to %d", number, successor);
  getchar();
  printf("The predecessor de %d is equal to %d", number, predecessor);
  getchar();

  return 0;
}
