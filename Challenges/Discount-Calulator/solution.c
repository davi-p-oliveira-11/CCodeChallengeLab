#include <stdio.h>

int main () {

  float productPrice, discountEarned, finalPrice;

  printf("What is the original price of the product ? ");
  scanf("%f", &productPrice);
  getchar();

  printf("How much discount you received during the promotion ? ");
  scanf("%f", &discountEarned);
  getchar();

  finalPrice = productPrice * (1 - discountEarned / 100);

  printf("The original price of the product is: %.2f \n", productPrice);
  printf("The promotional price of the product with the discount of %.0f percent is %.2f USD \n",discountEarned, finalPrice);
  printf("Press Enter to Exit ... \n");
  getchar();

  return 0;
}
