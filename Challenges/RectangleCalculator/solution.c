#include <stdio.h>

int main () {

  float width, height, area, paintNeeded;

  printf("What is the width of the wall? (Enter a value in meters) ");
  scanf("%f", &width);
  getchar();

  printf("What is the height of the wall? (Enter a value in meters) ");
  scanf("%f", &height);
  getchar();

  area = width * height;
  paintNeeded = area * 0.5;

  printf("The area of the wall to be painted is %.1f \n", area);
  printf("The amount of paint needed to paint the wall is %.1f liters. \n", paintNeeded);
  printf("Press Enter to exit ... ");
  getchar();


  return 0;
}
