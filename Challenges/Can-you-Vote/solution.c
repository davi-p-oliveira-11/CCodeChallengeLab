#include <stdio.h>

int main () {

  int yearOfBirth, currentYear, userAge;

  printf("What is the year of your birth ? ");
  scanf("%d", &yearOfBirth);
  getchar();

  printf("What year are we in ? ");
  scanf("%d", &currentYear);
  getchar();

  userAge = currentYear - yearOfBirth;

  if (userAge >= 16) {
    printf("You can already vote\n");
  } else {
    printf("You are not yet old enough to vote.\n");
  }

   printf("Press Enter to exit ... ");
   getchar();


  return 0;
}
