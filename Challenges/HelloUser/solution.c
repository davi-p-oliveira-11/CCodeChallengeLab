#include <stdio.h>
#include <string.h>

int main() {
  char personName[100];

  printf("What is you name ? ");
  fgets(personName, sizeof(personName), stdin);

  // Remove the newline character from personName
    int length = strlen(personName);

    if (personName[length - 1] == '\n') {
        personName[length - 1] = '\0';
    }

  printf("Hello, %s nice to meet you ! \n", personName);
  printf("Press Enter to Exit ...");
  getchar();
  
  return 0;
}
