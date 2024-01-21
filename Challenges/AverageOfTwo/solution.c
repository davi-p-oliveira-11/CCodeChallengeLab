int main() {

  float grade1, grade2, average;

  printf("Enter the grade for the first test:  ");
  scanf("%f", &grade1);
  getchar();

  printf("Enter the grade for the second test: ");
  scanf("%f", &grade2);
  getchar();

  average = (grade1 + grade2) / 2;

  printf("The average between %.1f and %.1f is equal to %.1f", grade1, grade2, average);
  getchar();

  return 0;
}
