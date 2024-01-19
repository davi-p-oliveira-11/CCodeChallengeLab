#include <stdio.h>

int main() {
  char personName[100];

  printf("What is yout name ? ");
  scanf("%s", &personName);
  getchar();

  printf("Hello, %s nice to meet you ! \n", personName);
  getchar();
  
  return 0;
}
