#include <stdio.h>

int main(void) {

  int num = 0;
  printf("\n*** Factorial Calculator ***\n");
  printf("\nEnter the number to get factorial of it: ");
  scanf("%d",&num);
  int factorial = 1;
  if(num>0){
    for(int i = num;i>0;i--){
      factorial *= i;
    }
    printf("\n%d! = %d\n",num,factorial);
  }
  else if(num == 0){
    printf("\n0! = 1\n");
  }
  else{
    printf("\nCan't have factorial of %d\n",num);
  }
  return 0;
}