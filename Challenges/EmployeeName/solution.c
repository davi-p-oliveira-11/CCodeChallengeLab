#include <stdio.h>
#include <string.h>

int main() {

  char userName[100], month[30];
  float salary;

  printf("What is you name ? ");
  fgets(userName, sizeof(userName), stdin);

  // Remove the newline character from userName
    int length = strlen(userName);

    if (userName[length - 1] == '\n') {
        userName[length - 1] = '\0';
    }
 
  printf("What is your salary ? ");
  scanf("%f", &salary);
  getchar();

  printf("What month are we in ? ");
  scanf("%s", &month);
  getchar();

  printf("Employee %s has a salary of %.0f USD in %s", userName, salary, month);
  printf("Press Enter to Exit ... ");
  getchar();

  return 0;
}
