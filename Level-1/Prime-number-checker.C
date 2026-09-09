#include <stdio.h>
#include <stdbool.h>

int primeCheck(int num);

int main(void) {
  int num = 0;
  printf("\n*** Prime Number ***\n");
  printf("\nEnter a number to check: ");
  scanf("%d",&num);
  if(num < 0){
    printf("\nNegative integers are not prime numbers, you dumb creature\n");
  }
  else{
    if(primeCheck(num)){
      printf("\n%d is a prime number\n",num);
    }
    else{
      printf("\n%d is a composite number\n",num);
    }
  }
  return 0;
}

int primeCheck(int num){
  if(num <= 1){//checks if less than 1
    return false;
  }
  if(num <= 3 && num > 1){//checks if number is 2 or 3
    return true;
  }
  if(num % 2 == 0 || num % 3 == 0){//checks if number is multiple of 2 or 3
    return false;
  }// num can be 5,7,11,13,17,19,23,25 ...
  
  for(long int i = 5;i*i <= num;i += 6){// here, i is 5 and then 11 and i + 2 is 13 which checks if the number is divisible by any of the prime number
    if(num % i == 0 || num % (i+2) == 0){
      return false;
      break;
    }
  }
  return true;
}