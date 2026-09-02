#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int initial(){
  int opt = 0;
  printf("\nThis is a banking system\nSelect an option:\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n\nEnter your choice: ");
  scanf("%i",&opt);
  while (opt <1 || opt >4)
  {
    printf("Invalid Option, Plz Enter again: ");
    scanf("%i",&opt);
  }
  return opt;
}

void checkBalance(double Amount){
  printf("\nYour current balance is $%.2f\n",Amount);
}

double Deposit(double Amount){
  double dep = 0.0;
  bool exitcode = false;
  do{
    printf("\nEnter the amount you want to deposit: ");
    scanf("%lf",&dep);
    if(dep>=0){
      printf("\nSuccessfully Deposited\n");
      exitcode = true;
    }
    else{
      printf("\nInvalid Amount to deposit\nReturning to the Main Menu");
      dep = 0;
      exitcode = true;
    }
  }while(exitcode == false);
  return dep;
  dep = 0;
}

int main(void) {

  bool ExitCode = false;
  do{
    printf("-------------------------------------------------------------");
    int option = initial();
    switch(option)
    {
    double Amount = 0.0;
    case 1:
      checkBalance(Amount);
      fflush(stdout);
      usleep(500*1000);
      break;
    case 2:
      Amount += Deposit(Amount);
      fflush(stdout);
      usleep(500*1000);
      break;
    default:
      printf("\nAn error has occued while fetching Data\nReturning to Main Menu\n");
      break;
    }
  }while(ExitCode == false);
  return 0;
}