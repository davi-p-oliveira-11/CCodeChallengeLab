#include <stdio.h>

int main() {

  float meters, km, hm, dam, dm, cm, mm;

  meters = printf("Enter a distance in meters ");
  scanf("%f", &meters);
  getchar();

  km = meters / 1000;
  hm = meters / 100;
  dam = meters / 10;
  dm = meters * 10;
  cm = meters * 100;
  mm = meters * 1000;

  printf("The distance %.2f meters corresponds to\n", meters);
  printf("%.5f Km\n", km);
  printf("%.4f Hm\n", hm);
  printf("%.3f Dam\n", dam);
  printf("%.1f dm\n", dm);
  printf("%.1f cm\n", cm);
  printf("%.1f mm\n", mm);
  getchar();

  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
