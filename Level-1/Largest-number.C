#include <stdio.h>
#include <unistd.h>
int main(void) {
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  printf("***\nFind largest out of three\n");
  printf("\nEnter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);
  printf("Enter number 3: ");
  scanf("%d",&num3);
  printf("Thinking");
  for (int i = 0; i < 3; i++)
  {
    printf(".");
    fflush(stdout);
    usleep(500*1000);
  }
  printf("\n");
  if(num1>num2){
    if(num1>num3){
      if(num2 == num3){// num1> num2=num3
        printf("Largest Number: %d",num1);
        printf("\nAnd last two numbers are equal\n");
      }
      else{//num1>num2&num1>num3
        printf("Largest Number: %d\n",num1);
      }
    }
    else if(num1 == num3){//num1=num3>num2
      printf("Largest Number is: %d",num1);
      printf("\nAnd first & third numbers are equal\n");
    }
    else{//num3>num1>num2
      printf("Largest Number: %d\n",num3);
    }
  }
  else if(num1<num2){
    if(num2>num3){
      if(num1 == num3){//num2>num3=num1
        printf("Largest Number: %d",num2);
        printf("\nAnd first & third numbers are equal\n");
      }
      else{//num2>num1&num2>num3
        printf("Largest Number: %d\n",num2);
      }
    }
    else if(num2 == num3){//num2=num3>num1
      printf("Largest Number: %d",num2);
      printf("\nAnd last two numbers are equal\n");
    }
    else{
      printf("Largest Number: %d\n",num3);
    }
  }
  else{
    if(num1>num3){
      printf("Largest Number: %d",num1);
      printf("\nAnd first two numbers are equal\n");
    }
    else if(num1<num3){
      printf("Largest Number: %d\n",num3);
    }
    else{
      printf("Largest Number: %d",num1);
      printf("\nAnd All three numbers are equal\n");
    }
  }
  return 0;
}