#include <stdio.h>

int main() {

  char userName[100], month[30];
  float salary;

  printf("What is you name ? ");
  scanf("%s", &userName);

  printf("What is your salary ");
  scanf("%f", &salary);

  printf("What month are we in ");
  scanf("%s", &month);
  getchar();

  printf("Employee %s has a salary of %.0f USD in %s", userName, salary, month);
  getchar();

  return 0;
}
