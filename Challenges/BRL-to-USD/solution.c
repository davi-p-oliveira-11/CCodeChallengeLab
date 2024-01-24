#include <stdio.h>

int main() {

  float avaiableBRL, usdValue, affordableUsd;

  printf("Enter a value in BRL: ");
  scanf("%f", &avaiableBRL);
  getchar();

  printf("What is today's dollar exchange rate ? ");
  scanf("%f", &usdValue);
  getchar();

  affordableUsd = avaiableBRL / usdValue;

  printf("You can buy a total of %.2f USD \n" , affordableUsd);
  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
