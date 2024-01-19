#include <stdio.h>

int main() {
  char personName[100];

  printf("Qual o seu nome ? \n");
  scanf("%s", &personName);
  getchar();

  printf("Ola, %s e um prazer te conhecer ! \n", personName);
  getchar();
  
  return 0;
}
