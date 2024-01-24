#include <stdio.h>

int main () {

  float height, weight, bmi;

  printf("Enter your weight in kilograms: ");
  scanf("%f", &weight);
  getchar();

  printf("Enter your height in meters: ");
  scanf("%f", &height);
  getchar();

  bmi = weight / (height * height);

  printf("Your BMI is %.2f\n", bmi);
  printf("Press Enter to Exit ...");
  getchar();

  return 0;
}
