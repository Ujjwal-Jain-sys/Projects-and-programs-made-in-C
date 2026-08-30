#include <stdio.h>

int main(void) {
  // Single operation calculator
  
  float FirstNum = 0.0f;
  float SecondNum = 0.0f;
  char operation = '\0';
  float result = 0.0f;
  printf("Enter the first number: ");
  scanf("%f",&FirstNum);
  getchar(); //used this to empty the stack that has char value of enter pressed for 200th line.
  printf("Enter the operator (+ - * /): ");
  scanf("%c",&operation);
  printf("Enter the second number: ");
  scanf("%f",&SecondNum);

  switch (operation)
  {
  case '+':
    result = FirstNum+SecondNum;
    printf("Result: %.3f\n",result);
    break;
  case '-':
    result = FirstNum-SecondNum;
    printf("Result: %.3f\n",result);
    break;
  case '*':
    result = FirstNum*SecondNum;
    printf("Result: %.3f\n",result);
    break;
  case '/':
    if (SecondNum == 0)
    {
    printf("You can't divide by zero");
    }
    else{
     result = FirstNum/SecondNum;
     printf("Result: %.3f\n",result);
    }
    break;
  default:
    printf("Invalid Operation, Try again");
    break;
  }
  return 0;
}