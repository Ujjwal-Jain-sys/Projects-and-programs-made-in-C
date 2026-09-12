#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

bool primeCheck(int num);
int main(void) {
  int lowLim = 0;
  int upLim = 0;
  int temp = 0;
  printf("\n*** Prime Number range ***\n");
  printf("\nEnter lower limit: ");
  scanf("%d",&lowLim);
  while(lowLim < 0){
    printf("\nInvalid Input\nEnter lower limit: ");
    scanf("%d",&lowLim);
  }
  printf("\nEnter upper limit: ");
  scanf("%d",&upLim);
  while(upLim < lowLim){
    printf("\nInvalid Input\nEnter upper limit: ");
    scanf("%d",&upLim);
  }
  int diff = ((upLim-lowLim)+1);
  int prime[diff];
  int index = 0;
  if(upLim == lowLim){
    if(primeCheck(lowLim)){
      printf("\n%d is the only prime number in this range\n",lowLim);
    }
    else{
      printf("\nNo prime Numbers found in this range\n");
    }
  }
  else{
    for(int i = lowLim;i<=upLim;i++){
      if(primeCheck(i)){
        prime[index]= i;
        index++;
      }
    }
    for(int i=0;i<index;i++){
      printf("%d . ",prime[i]);
      fflush(stdout);
      usleep(80*1000);
    }
    printf("\n");
    printf("Want to know Something More?\nEnter 1 for that\nEnter your Choice: ");
    scanf("%d",&temp);
    int twinPrime = 0;
    int cousinPrime = 0;
    int sexyPrime = 0;
    int maxDesert = 0;
    if(temp == 1){
      printf("\nCooking it up");
      for(int i=1;i<4;i++){
        printf(" .");
        fflush(stdout);
        usleep(500*1000);
      }
      //Loop for Prime Gap Distribution
      for(int j=1;j<index;j++){
        if(prime[j]-prime[j-1] > maxDesert){
          maxDesert = prime[j]-prime[j-1];
        }
        if(prime[j]-prime[j-1] == 2){
          twinPrime++;
        }
        else if(prime[j]-prime[j-1] == 4){
          cousinPrime++;
        }
        else{
          sexyPrime++;
        }
      }
      printf("\nThere are:\n- %d Twin Primes[has gap of 2]\n- %d Cousin Primes[has gap of 4]\n- %d Sexy Primes[has gap of 6]\n",twinPrime,cousinPrime,sexyPrime);
      printf("And the Desert\n[Maximum gap between two consecutive prime numbers]\ncomes out to be %d\n",maxDesert);
    }    
  }
  printf("\nProgram Ended\n");
  return 0;
}
bool primeCheck(int num){
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
    }
  }
  return true;
}