#include <stdio.h>

int main(void) {

  int num = -1;// so even if user inputs string, it will show Invalid input
  printf("\n*** Prime Number Checker ***\n\n");
  printf("Enter the number to check: ");
  scanf("%d",&num);
  if(num>=0){
    switch (num)
    {
    case 0:
      printf("\nZero is not a prime number\n");
      printf("As it has infinitely many solutions");
      break;
    case 1:
      printf("\nOne is not a prime number\n");
      printf("As it has only one factor, itself\n");
      break;
    case 2:
      printf("\nTwo is a prime number\n");
      break;
    case 3:
      printf("\nThree is a prime number\n");
      break;
    default:
      int k = (num-1)/6;
      break;
    }
  }
  else{
    printf("\nInvalid Input,Try again\n");
  }
  return 0;
}