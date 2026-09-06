#include <stdio.h>
#include <unistd.h>

int main(void) {
  int num = 0;
  printf("\n-------------------------\n");
  printf("\n*** Number Checker***\n");
  printf("-------------------------");
  printf("\nEnter a number: ");
  scanf("%d",&num);
  printf("Thinking");
  for (int i = 0; i < 3; i++)
  {
    printf(".");
    fflush(stdout);
    usleep(500*1000);
  }
  printf("\n%d is a %s number\n",num,(num % 2 == 0) ? "Even" : "Odd");
  
  if(num == 0){
    printf("Zero is neither positive nor negative\n");
  }
  else if (num > 0)
  {
    printf("%d is a positive number\n",num);
  }
  else{
    printf("%d is a negative number\n",num);
  }
  return 0;
}