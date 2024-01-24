#include <stdio.h>

int main() {

  float grade1, grade2, average;

  printf("Enter the grade for the first test:  ");
  scanf("%f", &grade1);
  getchar();

  printf("Enter the grade for the second test: ");
  scanf("%f", &grade2);
  getchar();

  average = (grade1 + grade2) / 2;

  printf("The average between %.1f and %.1f is equal to %.1f \n", grade1, grade2, average);
  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
