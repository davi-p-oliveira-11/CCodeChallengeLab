#include <stdio.h>

int main () {

  float centimeters, meters;

  printf("Enter a measure in centimeters: ");
  scanf("%f", &centimeters);
  getchar();

  meters = centimeters * 0.01;

  printf("%.0f cm is equal to %.2f meters", centimeters, meters);
  printf("Press Enter to Exit ... ");
  getchar();


  return 0;
}
