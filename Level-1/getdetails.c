#include <stdio.h>
#include <string.h>
int main() {
//   Get details program
  int age = 0;
  printf("Enter Your Age: ");
  scanf("%i",&age);

  float gpa = 0.0f;
  printf("Enter Your Gpa: ");
  scanf("%f",&gpa);

  char grade = '\0';
  printf("Enter Your Grade: ");
  scanf(" %c",&grade);

  char name[30] = "";
  getchar();
  printf("Enter Your Name: ");
  fgets(name,sizeof(name),stdin);
  name[strlen(name) - 1] = '\0';

  printf("%-i\n",age);
  printf("%-5.2f\n",gpa);
  printf("%-c\n",grade);
  printf("%-s\n",name);
  return 0;
}